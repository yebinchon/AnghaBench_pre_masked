
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_size; int i_sb; scalar_t__ i_nlink; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef int pgoff_t ;
typedef int loff_t ;
typedef int handle_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*,struct address_space*,int,unsigned int,unsigned int,struct page**,void**,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int VAR_6 ;
 int * FUNC_4 (struct inode*,int) ;
 int FUNC_5 (int *) ;
 int VAR_7 ;
 int FUNC_6 (int *,struct inode*) ;
 int FUNC_7 (int *,struct inode*) ;
 int FUNC_8 (struct inode*) ;
 scalar_t__ FUNC_9 (int ,int*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 struct page* FUNC_12 (struct address_space*,int,unsigned int) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 (struct inode*,int,unsigned int,unsigned int) ;
 int FUNC_16 (struct page*) ;
 int FUNC_17 (int *,int ,unsigned int,unsigned int,int *,int ) ;

__attribute__((used)) static int FUNC_18(struct file *VAR_8, struct address_space *VAR_9,
       loff_t VAR_10, unsigned VAR_11, unsigned VAR_12,
       struct page **VAR_13, void **VAR_14)
{
 struct inode *VAR_15 = VAR_9->host;
 int VAR_16, VAR_17;
 handle_t *VAR_18;
 int VAR_19 = 0;
 struct page *VAR_20;
 pgoff_t VAR_21;
 unsigned VAR_22, VAR_23;

 FUNC_15(VAR_15, VAR_10, VAR_11, VAR_12);




 VAR_17 = FUNC_11(VAR_15) + 1;
 VAR_21 = VAR_10 >> VAR_3;
 VAR_22 = VAR_10 & (VAR_4 - 1);
 VAR_23 = VAR_22 + VAR_11;

retry:
 VAR_18 = FUNC_4(VAR_15, VAR_17);
 if (FUNC_0(VAR_18)) {
  VAR_16 = FUNC_1(VAR_18);
  goto out;
 }



 VAR_12 |= VAR_0;

 VAR_20 = FUNC_12(VAR_9, VAR_21, VAR_12);
 if (!VAR_20) {
  FUNC_5(VAR_18);
  VAR_16 = -VAR_1;
  goto out;
 }
 *VAR_13 = VAR_20;

 if (!FUNC_8(VAR_15))
  VAR_16 = FUNC_2(VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13,
    VAR_14, VAR_6);
 else {
  VAR_16 = FUNC_2(VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13,
    VAR_14, VAR_7);
  if (!VAR_16)
   VAR_16 = FUNC_17(VAR_18, FUNC_13(VAR_20),
    VAR_22, VAR_23, ((void*)0), VAR_5);
 }

 if (VAR_16) {
  FUNC_16(VAR_20);
  FUNC_14(VAR_20);
  if (VAR_10 + VAR_11 > VAR_15->i_size && FUNC_3(VAR_15))
   FUNC_6(VAR_18, VAR_15);

  FUNC_5(VAR_18);
  if (VAR_10 + VAR_11 > VAR_15->i_size) {
   FUNC_10(VAR_15);






   if (VAR_15->i_nlink)
    FUNC_7(((void*)0), VAR_15);
  }
 }

 if (VAR_16 == -VAR_2 && FUNC_9(VAR_15->i_sb, &VAR_19))
  goto retry;
out:
 return VAR_16;
}
