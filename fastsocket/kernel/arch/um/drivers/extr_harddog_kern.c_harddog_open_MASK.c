
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 char* FUNC_2 () ;
 int FUNC_3 (struct inode*,struct file*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,char*) ;
 int VAR_5 ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_6, struct file *VAR_7)
{
 int VAR_8 = -VAR_0;
 char *VAR_9 = ((void*)0);

 FUNC_1();
 FUNC_4(&VAR_4);
 if(VAR_5)
  goto err;







 VAR_8 = FUNC_6(&VAR_2, &VAR_3, VAR_9);
 if(VAR_8)
  goto err;

 VAR_5 = 1;
 FUNC_5(&VAR_4);
 FUNC_7();
 return FUNC_3(VAR_6, VAR_7);
err:
 FUNC_5(&VAR_4);
 FUNC_7();
 return VAR_8;
}
