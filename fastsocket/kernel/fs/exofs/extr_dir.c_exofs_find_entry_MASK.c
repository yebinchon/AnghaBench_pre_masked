
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int dummy; } ;
struct exofs_i_info {unsigned long i_dir_start_lookup; } ;
struct exofs_dir_entry {scalar_t__ rec_len; } ;
struct TYPE_2__ {unsigned char* name; int len; } ;
struct dentry {TYPE_1__ d_name; } ;


 unsigned int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct page*) ;
 unsigned long FUNC_3 (struct inode*) ;
 struct page* FUNC_4 (struct inode*,unsigned long) ;
 struct exofs_i_info* FUNC_5 (struct inode*) ;
 unsigned int FUNC_6 (struct inode*,unsigned long) ;
 scalar_t__ FUNC_7 (int,unsigned char const*,struct exofs_dir_entry*) ;
 struct exofs_dir_entry* FUNC_8 (struct exofs_dir_entry*) ;
 int FUNC_9 (struct page*) ;
 char* FUNC_10 (struct page*) ;

struct exofs_dir_entry *FUNC_11(struct inode *VAR_0,
   struct dentry *VAR_1, struct page **VAR_2)
{
 const unsigned char *VAR_3 = VAR_1->d_name.name;
 int VAR_4 = VAR_1->d_name.len;
 unsigned VAR_5 = FUNC_0(VAR_4);
 unsigned long VAR_6, VAR_7;
 unsigned long VAR_8 = FUNC_3(VAR_0);
 struct page *VAR_9 = ((void*)0);
 struct exofs_i_info *VAR_10 = FUNC_5(VAR_0);
 struct exofs_dir_entry *VAR_11;

 if (VAR_8 == 0)
  goto out;

 *VAR_2 = ((void*)0);

 VAR_6 = VAR_10->i_dir_start_lookup;
 if (VAR_6 >= VAR_8)
  VAR_6 = 0;
 VAR_7 = VAR_6;
 do {
  char *VAR_12;
  VAR_9 = FUNC_4(VAR_0, VAR_7);
  if (!FUNC_2(VAR_9)) {
   VAR_12 = FUNC_10(VAR_9);
   VAR_11 = (struct exofs_dir_entry *) VAR_12;
   VAR_12 += FUNC_6(VAR_0, VAR_7) - VAR_5;
   while ((char *) VAR_11 <= VAR_12) {
    if (VAR_11->rec_len == 0) {
     FUNC_1(
      "ERROR: exofs_find_entry: "
      "zero-length directory entry");
     FUNC_9(VAR_9);
     goto out;
    }
    if (FUNC_7(VAR_4, VAR_3, VAR_11))
     goto found;
    VAR_11 = FUNC_8(VAR_11);
   }
   FUNC_9(VAR_9);
  }
  if (++VAR_7 >= VAR_8)
   VAR_7 = 0;
 } while (VAR_7 != VAR_6);
out:
 return ((void*)0);

found:
 *VAR_2 = VAR_9;
 VAR_10->i_dir_start_lookup = VAR_7;
 return VAR_11;
}
