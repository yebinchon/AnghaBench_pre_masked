
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int i_blkbits; int i_size; TYPE_2__* i_sb; struct address_space* i_mapping; } ;
struct file {TYPE_1__* f_dentry; } ;
struct buffer_head {struct buffer_head* b_this_page; } ;
struct address_space_operations {int (* write_begin ) (struct file*,struct address_space*,long long,unsigned int,unsigned int,struct page**,void**) ;int (* write_end ) (struct file*,struct address_space*,long long,unsigned int,unsigned int,struct page*,void*) ;int (* readpage ) (struct file*,struct page*) ;} ;
struct address_space {struct address_space_operations* a_ops; } ;
typedef int sector_t ;
typedef int pgoff_t ;
typedef int handle_t ;
typedef int ext4_lblk_t ;
struct TYPE_4__ {unsigned long s_blocksize; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*,int,int ) ;
 int FUNC_5 (struct inode*,int ,struct buffer_head*,int ) ;
 int * FUNC_6 (struct inode*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 () ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (int *,struct inode*,struct inode*,int,int,int*) ;
 struct buffer_head* FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*) ;
 scalar_t__ FUNC_15 (int ,int ) ;
 int FUNC_16 (struct file*,struct address_space*,long long,unsigned int,unsigned int,struct page**,void**) ;
 int FUNC_17 (struct file*,struct page*) ;
 int FUNC_18 (struct file*,struct address_space*,long long,unsigned int,unsigned int,struct page*,void*) ;
 int FUNC_19 (struct page*,int ) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 (struct page*) ;
 int FUNC_22 (struct page*) ;

__attribute__((used)) static int
FUNC_23(struct file *VAR_4, struct inode *VAR_5,
    pgoff_t VAR_6, int VAR_7,
    int VAR_8, int VAR_9, int *VAR_10)
{
 struct inode *VAR_11 = VAR_4->f_dentry->d_inode;
 struct address_space *VAR_12 = VAR_11->i_mapping;
 struct buffer_head *VAR_13;
 struct page *VAR_14 = ((void*)0);
 const struct address_space_operations *VAR_15 = VAR_12->a_ops;
 handle_t *VAR_16;
 ext4_lblk_t VAR_17;
 long long VAR_18 = VAR_6 << VAR_2;
 unsigned long VAR_19 = VAR_11->i_sb->s_blocksize;
 unsigned int VAR_20 = 0;
 unsigned int VAR_21, VAR_22, VAR_23;
 void *VAR_24;
 int VAR_25, VAR_26;
 int VAR_27 = 0;
 int VAR_28 = 0;
 int VAR_29 = VAR_3 >> VAR_11->i_blkbits;





 VAR_26 = FUNC_8(VAR_11) * 2;
 VAR_16 = FUNC_6(VAR_11, VAR_26);
 if (FUNC_0(VAR_16)) {
  *VAR_10 = FUNC_1(VAR_16);
  return 0;
 }

 if (FUNC_15(FUNC_9(), VAR_1))
  VAR_20 |= VAR_0;

 VAR_17 = VAR_6 * VAR_29 +
  VAR_7;







 if (VAR_9) {
  VAR_28 = FUNC_11(VAR_16, VAR_11,
      VAR_5, VAR_17,
      VAR_8, VAR_10);
  goto out2;
 }

 VAR_18 = (long long)VAR_17 << VAR_11->i_blkbits;


 if ((VAR_17 + VAR_8 - 1) ==
     ((VAR_11->i_size - 1) >> VAR_11->i_blkbits)) {

  VAR_21 = VAR_11->i_size & (VAR_19 - 1);




  if (VAR_21 == 0)
   VAR_21 = VAR_19;

  VAR_22 = VAR_21 +
   ((VAR_8 - 1) << VAR_11->i_blkbits);
 } else
  VAR_22 = VAR_8 << VAR_11->i_blkbits;

 VAR_23 = VAR_22;

 *VAR_10 = VAR_15->write_begin(VAR_4, VAR_12, VAR_18, VAR_22, VAR_20,
     &VAR_14, &VAR_24);
 if (FUNC_20(*VAR_10 < 0))
  goto out;

 if (!FUNC_3(VAR_14)) {
  VAR_12->a_ops->readpage(VAR_4, VAR_14);
  FUNC_10(VAR_14);
 }
 FUNC_22(VAR_14);


 FUNC_19(VAR_14, 0);

 VAR_28 = FUNC_11(VAR_16, VAR_11, VAR_5,
     VAR_17, VAR_8,
     &VAR_27);
 if (VAR_27) {
  if (VAR_28) {
   VAR_8 = VAR_28;
   VAR_23 =
    VAR_8 << VAR_11->i_blkbits;
  } else
   goto out;
 }

 if (!FUNC_14(VAR_14))
  FUNC_4(VAR_14, 1 << VAR_11->i_blkbits, 0);

 VAR_13 = FUNC_12(VAR_14);
 for (VAR_25 = 0; VAR_25 < VAR_7; VAR_25++)
  VAR_13 = VAR_13->b_this_page;

 for (VAR_25 = 0; VAR_25 < VAR_8; VAR_25++) {
  *VAR_10 = FUNC_5(VAR_11,
    (sector_t)(VAR_17 + VAR_25), VAR_13, 0);
  if (*VAR_10 < 0)
   goto out;

  if (VAR_13->b_this_page != ((void*)0))
   VAR_13 = VAR_13->b_this_page;
 }

 *VAR_10 = VAR_15->write_end(VAR_4, VAR_12, VAR_18, VAR_22, VAR_23,
          VAR_14, VAR_24);
 VAR_14 = ((void*)0);

out:
 if (FUNC_20(VAR_14)) {
  if (FUNC_2(VAR_14))
   FUNC_21(VAR_14);
  FUNC_13(VAR_14);
  FUNC_7(VAR_16);
 }
out2:
 FUNC_7(VAR_16);

 if (VAR_27)
  *VAR_10 = VAR_27;

 return VAR_28;
}
