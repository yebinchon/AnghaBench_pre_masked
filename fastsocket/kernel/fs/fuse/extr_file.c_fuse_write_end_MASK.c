
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef int loff_t ;


 int FUNC_0 (struct file*,struct inode*,int ,unsigned int,struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, struct address_space *VAR_1,
   loff_t VAR_2, unsigned VAR_3, unsigned VAR_4,
   struct page *VAR_5, void *VAR_6)
{
 struct inode *VAR_7 = VAR_1->host;
 int VAR_8 = 0;

 if (VAR_4)
  VAR_8 = FUNC_0(VAR_0, VAR_7, VAR_2, VAR_4, VAR_5);

 FUNC_2(VAR_5);
 FUNC_1(VAR_5);
 return VAR_8;
}
