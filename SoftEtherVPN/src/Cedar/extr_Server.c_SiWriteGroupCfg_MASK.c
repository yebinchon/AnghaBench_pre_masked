
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int Traffic; int * Policy; int Note; int RealName; } ;
typedef TYPE_1__ USERGROUP ;
typedef int FOLDER ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(FOLDER *VAR_0, USERGROUP *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_1->lock);
 {
  FUNC_0(VAR_0, "RealName", VAR_1->RealName);
  FUNC_0(VAR_0, "Note", VAR_1->Note);
  if (VAR_1->Policy != ((void*)0))
  {
   FUNC_3(FUNC_1(VAR_0, "Policy"), VAR_1->Policy, 0);
  }
  FUNC_4(VAR_0, "Traffic", VAR_1->Traffic);
 }
 FUNC_5(VAR_1->lock);
}
