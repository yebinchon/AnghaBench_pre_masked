
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uthread {char* pth_name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;

void
FUNC_2(void *VAR_1, void *VAR_2)
{
 struct uthread *VAR_3 = (struct uthread *)VAR_1;
 struct uthread *VAR_4 = (struct uthread *)VAR_2;

 if (VAR_4->pth_name == ((void*)0))
  return;

 if (VAR_3->pth_name == ((void*)0)) {
  VAR_3->pth_name = (char *)FUNC_1(VAR_0);
  if (VAR_3->pth_name == ((void*)0))
   return;
 }

 FUNC_0(VAR_4->pth_name, VAR_3->pth_name, VAR_0);
 return;
}
