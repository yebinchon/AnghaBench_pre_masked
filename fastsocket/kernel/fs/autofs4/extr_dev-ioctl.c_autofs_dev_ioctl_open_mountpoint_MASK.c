
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int mnt; int dentry; } ;
struct file {int dummy; } ;
typedef int dev_t ;


 scalar_t__ FUNC_0 (struct file*) ;
 int VAR_0 ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (int,struct file*) ;
 int FUNC_3 () ;
 struct file* FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (char const*,struct path*,int ,int *) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_9(const char *VAR_2, dev_t VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = FUNC_6();
 if (FUNC_7(VAR_5 >= 0)) {
  struct file *VAR_6;
  struct path VAR_7;

  VAR_4 = FUNC_5(VAR_2, &VAR_7, VAR_1, &VAR_3);
  if (VAR_4)
   goto out;






  VAR_6 = FUNC_4(VAR_7.dentry, VAR_7.mnt, VAR_0,
       FUNC_3());
  if (FUNC_0(VAR_6)) {
   VAR_4 = FUNC_1(VAR_6);
   goto out;
  }

  FUNC_2(VAR_5, VAR_6);
 }

 return VAR_5;

out:
 FUNC_8(VAR_5);
 return VAR_4;
}
