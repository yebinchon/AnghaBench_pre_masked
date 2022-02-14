
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef int pgoff_t ;
typedef int loff_t ;
typedef int get_block_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct inode*,struct page*,unsigned int,unsigned int,int *) ;
 struct page* FUNC_4 (struct address_space*,int,unsigned int) ;
 int FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct page*) ;

int FUNC_8(struct file *VAR_3, struct address_space *VAR_4,
   loff_t VAR_5, unsigned VAR_6, unsigned VAR_7,
   struct page **VAR_8, void **VAR_9,
   get_block_t *VAR_10)
{
 struct inode *VAR_11 = VAR_4->host;
 int VAR_12 = 0;
 struct page *VAR_13;
 pgoff_t VAR_14;
 unsigned VAR_15, VAR_16;
 int VAR_17 = 0;

 VAR_14 = VAR_5 >> VAR_1;
 VAR_15 = VAR_5 & (VAR_2 - 1);
 VAR_16 = VAR_15 + VAR_6;

 VAR_13 = *VAR_8;
 if (VAR_13 == ((void*)0)) {
  VAR_17 = 1;
  VAR_13 = FUNC_4(VAR_4, VAR_14, VAR_7);
  if (!VAR_13) {
   VAR_12 = -VAR_0;
   goto out;
  }
  *VAR_8 = VAR_13;
 } else
  FUNC_0(!FUNC_2(VAR_13));

 VAR_12 = FUNC_3(VAR_11, VAR_13, VAR_15, VAR_16, VAR_10);
 if (FUNC_6(VAR_12)) {
  FUNC_1(VAR_13);

  if (VAR_17) {
   FUNC_7(VAR_13);
   FUNC_5(VAR_13);
   *VAR_8 = ((void*)0);
  }
 }

out:
 return VAR_12;
}
