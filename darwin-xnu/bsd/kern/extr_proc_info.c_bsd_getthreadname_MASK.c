
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uthread {scalar_t__ pth_name; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,char*,int ) ;

void
FUNC_1(void *VAR_1, char *VAR_2)
{
 struct uthread *VAR_3 = (struct uthread *)VAR_1;
 if(VAR_3->pth_name)
  FUNC_0(VAR_3->pth_name,VAR_2,VAR_0);
}
