
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_size; int i_sb; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef int pgoff_t ;
typedef int loff_t ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*,struct address_space*,int,unsigned int,unsigned int,struct page**,void**,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int VAR_5 ;
 int * FUNC_4 (struct inode*,int) ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 int FUNC_6 (int *,struct inode*) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 scalar_t__ FUNC_8 (int ,int*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 struct page* FUNC_11 (struct address_space*,int,unsigned int) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct inode*,int,unsigned int,unsigned int) ;
 int FUNC_15 (struct page*) ;
 int FUNC_16 (int *,int ,unsigned int,unsigned int,int *,int ) ;

__attribute__((used)) static int FUNC_17(struct file *VAR_7, struct address_space *VAR_8,
    loff_t VAR_9, unsigned VAR_10, unsigned VAR_11,
    struct page **VAR_12, void **VAR_13)
{
 struct inode *VAR_14 = VAR_8->host;
 int VAR_15;
 handle_t *VAR_16;
 int VAR_17 = 0;
 struct page *VAR_18;
 pgoff_t VAR_19;
 unsigned VAR_20, VAR_21;


 int VAR_22 = FUNC_10(VAR_14) + 1;

 FUNC_14(VAR_14, VAR_9, VAR_10, VAR_11);

 VAR_19 = VAR_9 >> VAR_2;
 VAR_20 = VAR_9 & (VAR_3 - 1);
 VAR_21 = VAR_20 + VAR_10;

retry:
 VAR_18 = FUNC_11(VAR_8, VAR_19, VAR_11);
 if (!VAR_18)
  return -VAR_0;
 *VAR_12 = VAR_18;

 VAR_16 = FUNC_4(VAR_14, VAR_22);
 if (FUNC_0(VAR_16)) {
  FUNC_15(VAR_18);
  FUNC_13(VAR_18);
  VAR_15 = FUNC_1(VAR_16);
  goto out;
 }
 if (FUNC_7(VAR_14)) {
  VAR_15 = FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12,
     VAR_13, VAR_6);
  if (VAR_15)
   goto write_begin_failed;
  VAR_15 = FUNC_16(VAR_16, FUNC_12(VAR_18), VAR_20, VAR_21,
     ((void*)0), VAR_4);
 } else {
  VAR_15 = FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12,
     VAR_13, VAR_5);
 }

write_begin_failed:
 if (VAR_15) {
  if (VAR_9 + VAR_10 > VAR_14->i_size && FUNC_3(VAR_14))
   FUNC_6(VAR_16, VAR_14);
  FUNC_5(VAR_16);
  FUNC_15(VAR_18);
  FUNC_13(VAR_18);
  if (VAR_9 + VAR_10 > VAR_14->i_size)
   FUNC_9(VAR_14);
 }
 if (VAR_15 == -VAR_1 && FUNC_8(VAR_14->i_sb, &VAR_17))
  goto retry;
out:
 return VAR_15;
}
