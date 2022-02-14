
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int Hub; } ;
typedef TYPE_1__ SESSION ;
typedef int PKT ;


 int FUNC_0 (int ,TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;

bool FUNC_3(SESSION *VAR_0, PKT *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }


 if (FUNC_2(VAR_0, VAR_1) == 0)
 {
  return 0;
 }


 if (FUNC_1(VAR_0, VAR_1) == 0)
 {
  return 0;
 }


 if (FUNC_0(VAR_0->Hub, VAR_0, VAR_1) == 0)
 {
  return 0;
 }

 return 1;
}
