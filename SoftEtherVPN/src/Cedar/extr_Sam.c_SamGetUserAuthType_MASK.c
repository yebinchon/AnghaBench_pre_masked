
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int AuthType; } ;
typedef TYPE_1__ USER ;
typedef int UINT ;
typedef int HUB ;


 TYPE_1__* FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;

UINT FUNC_4(HUB *VAR_1, char *VAR_2)
{
 UINT VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_1(VAR_1);
 {
  USER *VAR_4 = FUNC_0(VAR_1, VAR_2);
  if (VAR_4 == ((void*)0))
  {
   VAR_3 = VAR_0;
  }
  else
  {
   VAR_3 = VAR_4->AuthType;
   FUNC_3(VAR_4);
  }
 }
 FUNC_2(VAR_1);

 return VAR_3;
}
