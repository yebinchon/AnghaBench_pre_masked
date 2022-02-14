
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {unsigned int index; TYPE_1__* mapping; } ;
struct inode {unsigned int i_size; int i_ino; } ;
struct exofs_dir_entry {int name_len; int inode_no; int rec_len; } ;
struct TYPE_2__ {struct inode* host; } ;


 unsigned int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,...) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int ) ;
 unsigned int FUNC_5 (struct inode*) ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 char* FUNC_8 (struct page*) ;

__attribute__((used)) static void FUNC_9(struct page *VAR_3)
{
 struct inode *VAR_4 = VAR_3->mapping->host;
 unsigned VAR_5 = FUNC_5(VAR_4);
 char *VAR_6 = FUNC_8(VAR_3);
 unsigned VAR_7, VAR_8;
 unsigned VAR_9 = VAR_2;
 struct exofs_dir_entry *VAR_10;
 char *VAR_11;


 if ((VAR_4->i_size >> VAR_1) == VAR_3->index) {
  VAR_9 = VAR_4->i_size & ~VAR_0;
  if (VAR_9 & (VAR_5 - 1))
   goto Ebadsize;
  if (!VAR_9)
   goto out;
 }
 for (VAR_7 = 0; VAR_7 <= VAR_9 - FUNC_0(1); VAR_7 += VAR_8) {
  VAR_10 = (struct exofs_dir_entry *)(VAR_6 + VAR_7);
  VAR_8 = FUNC_6(VAR_10->rec_len);

  if (VAR_8 < FUNC_0(1))
   goto Eshort;
  if (VAR_8 & 3)
   goto Ealign;
  if (VAR_8 < FUNC_0(VAR_10->name_len))
   goto Enamelen;
  if (((VAR_7 + VAR_8 - 1) ^ VAR_7) & ~(VAR_5-1))
   goto Espan;
 }
 if (VAR_7 != VAR_9)
  goto Eend;
out:
 FUNC_2(VAR_3);
 return;

Ebadsize:
 FUNC_1("ERROR [exofs_check_page]: "
  "size of directory #%lu is not a multiple of chunk size",
  VAR_4->i_ino
 );
 goto fail;
Eshort:
 VAR_11 = "rec_len is smaller than minimal";
 goto bad_entry;
Ealign:
 VAR_11 = "unaligned directory entry";
 goto bad_entry;
Enamelen:
 VAR_11 = "rec_len is too small for name_len";
 goto bad_entry;
Espan:
 VAR_11 = "directory entry across blocks";
 goto bad_entry;
bad_entry:
 FUNC_1(
  "ERROR [exofs_check_page]: bad entry in directory #%lu: %s - "
  "offset=%lu, inode=%llu, rec_len=%d, name_len=%d",
  VAR_4->i_ino, VAR_11, (VAR_3->index<<VAR_1)+VAR_7,
  FUNC_4(FUNC_7(VAR_10->inode_no)),
  VAR_8, VAR_10->name_len);
 goto fail;
Eend:
 VAR_10 = (struct exofs_dir_entry *)(VAR_6 + VAR_7);
 FUNC_1("ERROR [exofs_check_page]: "
  "entry in directory #%lu spans the page boundary"
  "offset=%lu, inode=%llu",
  VAR_4->i_ino, (VAR_3->index<<VAR_1)+VAR_7,
  FUNC_4(FUNC_7(VAR_10->inode_no)));
fail:
 FUNC_2(VAR_3);
 FUNC_3(VAR_3);
}
