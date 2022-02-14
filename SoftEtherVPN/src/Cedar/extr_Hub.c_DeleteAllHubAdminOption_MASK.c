
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {int AdminOptionList; } ;
typedef TYPE_1__ HUB ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(HUB *VAR_0, bool VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (VAR_1)
 {
  FUNC_4(VAR_0->AdminOptionList);
 }

 for (VAR_2 = 0;VAR_2 < FUNC_3(VAR_0->AdminOptionList);VAR_2++)
 {
  FUNC_1(FUNC_2(VAR_0->AdminOptionList, VAR_2));
 }

 FUNC_0(VAR_0->AdminOptionList);

 if (VAR_1)
 {
  FUNC_5(VAR_0->AdminOptionList);
 }
}
