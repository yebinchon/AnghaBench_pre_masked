
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int name ;
struct TYPE_3__ {int Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef int PACK ;
typedef int HUB ;


 int FUNC_0 (int ,int *,int) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,char*,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

void FUNC_7(SERVER *VAR_1, PACK *VAR_2)
{
 char VAR_3[VAR_0];
 HUB *VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 if (FUNC_3(VAR_2, "HubName", VAR_3, sizeof(VAR_3)) == 0)
 {
  return;
 }

 FUNC_2(VAR_1->Cedar);

 VAR_4 = FUNC_1(VAR_1->Cedar, VAR_3);
 if (VAR_4 == ((void*)0))
 {
  FUNC_6(VAR_1->Cedar);
  return;
 }
 FUNC_6(VAR_1->Cedar);

 FUNC_5(VAR_4);

 FUNC_2(VAR_1->Cedar);

 FUNC_0(VAR_1->Cedar, VAR_4, 1);

 FUNC_6(VAR_1->Cedar);

 FUNC_4(VAR_4);
}
