
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {unsigned int i_size; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef unsigned int loff_t ;


 unsigned int FUNC_0 (struct file*,struct address_space*,unsigned int,unsigned int,unsigned int,struct page*,void*) ;
 int FUNC_1 (struct inode*,unsigned int) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;

int FUNC_5(struct file *VAR_0, struct address_space *VAR_1,
   loff_t VAR_2, unsigned VAR_3, unsigned VAR_4,
   struct page *VAR_5, void *VAR_6)
{
 struct inode *VAR_7 = VAR_1->host;
 int VAR_8 = 0;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_2+VAR_4 > VAR_7->i_size) {
  FUNC_1(VAR_7, VAR_2+VAR_4);
  VAR_8 = 1;
 }

 FUNC_4(VAR_5);
 FUNC_3(VAR_5);







 if (VAR_8)
  FUNC_2(VAR_7);

 return VAR_4;
}
