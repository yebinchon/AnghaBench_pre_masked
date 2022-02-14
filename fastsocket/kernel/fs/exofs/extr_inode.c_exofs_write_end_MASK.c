
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {scalar_t__ i_size; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct file*,struct address_space*,scalar_t__,unsigned int,unsigned int,struct page*,void*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, struct address_space *VAR_1,
   loff_t VAR_2, unsigned VAR_3, unsigned VAR_4,
   struct page *VAR_5, void *VAR_6)
{
 struct inode *VAR_7 = VAR_1->host;

 loff_t VAR_8 = VAR_7->i_size;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_0, VAR_1,VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_8 != VAR_7->i_size)
  FUNC_0(VAR_7);
 return VAR_9;
}
