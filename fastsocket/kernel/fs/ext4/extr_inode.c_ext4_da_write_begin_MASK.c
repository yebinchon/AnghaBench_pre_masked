
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


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*,struct address_space*,int,unsigned int,unsigned int,struct page**,void**,int ) ;
 int VAR_6 ;
 int * FUNC_3 (struct inode*,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct file*,struct address_space*,int,unsigned int,unsigned int,struct page**,void**) ;
 struct page* FUNC_9 (struct address_space*,int,unsigned int) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct inode*,int,unsigned int,unsigned int) ;
 int FUNC_12 (struct page*) ;

__attribute__((used)) static int FUNC_13(struct file *VAR_7, struct address_space *VAR_8,
          loff_t VAR_9, unsigned VAR_10, unsigned VAR_11,
          struct page **VAR_12, void **VAR_13)
{
 int VAR_14, VAR_15 = 0;
 struct page *VAR_16;
 pgoff_t VAR_17;
 unsigned VAR_18, VAR_19;
 struct inode *VAR_20 = VAR_8->host;
 handle_t *VAR_21;

 VAR_17 = VAR_9 >> VAR_4;
 VAR_18 = VAR_9 & (VAR_5 - 1);
 VAR_19 = VAR_18 + VAR_10;

 if (FUNC_5(VAR_20->i_sb)) {
  *VAR_13 = (void *)VAR_3;
  return FUNC_8(VAR_7, VAR_8, VAR_9,
     VAR_10, VAR_11, VAR_12, VAR_13);
 }
 *VAR_13 = (void *)0;
 FUNC_11(VAR_20, VAR_9, VAR_10, VAR_11);
retry:






 VAR_21 = FUNC_3(VAR_20, 1);
 if (FUNC_0(VAR_21)) {
  VAR_14 = FUNC_1(VAR_21);
  goto out;
 }


 VAR_11 |= VAR_0;

 VAR_16 = FUNC_9(VAR_8, VAR_17, VAR_11);
 if (!VAR_16) {
  FUNC_4(VAR_21);
  VAR_14 = -VAR_1;
  goto out;
 }
 *VAR_12 = VAR_16;

 VAR_14 = FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13,
    VAR_6);
 if (VAR_14 < 0) {
  FUNC_12(VAR_16);
  FUNC_4(VAR_21);
  FUNC_10(VAR_16);





  if (VAR_9 + VAR_10 > VAR_20->i_size)
   FUNC_7(VAR_20);
 }

 if (VAR_14 == -VAR_2 && FUNC_6(VAR_20->i_sb, &VAR_15))
  goto retry;
out:
 return VAR_14;
}
