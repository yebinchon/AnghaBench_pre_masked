
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmlogrdr_priv_t {scalar_t__ dev_in_use; int autopurge; scalar_t__ autorecording; int * path; } ;
struct inode {int dummy; } ;
struct file {struct vmlogrdr_priv_t* private_data; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct vmlogrdr_priv_t*,int ,int ) ;

__attribute__((used)) static int FUNC_4 (struct inode *VAR_0, struct file *VAR_1)
{
 int VAR_2;

 struct vmlogrdr_priv_t * VAR_3 = VAR_1->private_data;

 FUNC_0(VAR_3->path, ((void*)0));
 FUNC_1(VAR_3->path);
 VAR_3->path = ((void*)0);
 if (VAR_3->autorecording) {
  VAR_2 = FUNC_3(VAR_3,0,VAR_3->autopurge);
  if (VAR_2)
   FUNC_2("vmlogrdr: failed to stop "
       "recording automatically\n");
 }
 VAR_3->dev_in_use = 0;

 return 0;
}
