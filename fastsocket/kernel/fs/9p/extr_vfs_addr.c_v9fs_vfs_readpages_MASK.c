
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (struct address_space*,struct list_head*,void*,struct file*) ;
 int FUNC_2 (struct inode*,struct address_space*,struct list_head*,unsigned int*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, struct address_space *VAR_3,
        struct list_head *VAR_4, unsigned VAR_5)
{
 int VAR_6 = 0;
 struct inode *VAR_7;

 VAR_7 = VAR_3->host;
 FUNC_0(VAR_0, "inode: %p file: %p\n", VAR_7, VAR_2);

 VAR_6 = FUNC_2(VAR_7, VAR_3, VAR_4, &VAR_5);
 if (VAR_6 == 0)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_4, (void *)VAR_1, VAR_2);
 FUNC_0(VAR_0, "  = %d\n", VAR_6);
 return VAR_6;
}
