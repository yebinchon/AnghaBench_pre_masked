
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct inode*,struct page*,unsigned int,unsigned int) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct file *VAR_1, struct address_space *VAR_2,
   loff_t VAR_3, unsigned VAR_4, unsigned VAR_5,
   struct page *VAR_6, void *VAR_7)
{
 struct inode *VAR_8 = VAR_2->host;
 unsigned VAR_9;

 VAR_9 = VAR_3 & (VAR_0 - 1);

 if (FUNC_4(VAR_5 < VAR_4)) {
  if (!FUNC_0(VAR_6))
   VAR_5 = 0;

  FUNC_3(VAR_6, VAR_9+VAR_5, VAR_9+VAR_4);
 }
 FUNC_2(VAR_6);


 FUNC_1(VAR_8, VAR_6, VAR_9, VAR_9+VAR_5);

 return VAR_5;
}
