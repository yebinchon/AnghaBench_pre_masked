
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_8__ {scalar_t__ LastChangeMtuError; int Name; int Eth; } ;
struct TYPE_7__ {TYPE_1__* Session; } ;
struct TYPE_6__ {int Name; int Hub; } ;
typedef TYPE_2__ CONNECTION ;
typedef TYPE_3__ BRIDGE ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,char*,int ,int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 () ;

void FUNC_5(BRIDGE *VAR_0, CONNECTION *VAR_1, UINT VAR_2)
{

 if (VAR_2 == 0 || VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }


 if (FUNC_1(VAR_0->Eth))
 {
  UINT VAR_3 = FUNC_0(VAR_0->Eth);
  if (VAR_3 != 0)
  {
   if (VAR_2 > VAR_3)
   {
    bool VAR_4 = FUNC_2(VAR_0->Eth, VAR_2);

    if (VAR_4)
    {
     FUNC_3(VAR_1->Session->Hub, "LH_SET_MTU", VAR_1->Session->Name,
      VAR_0->Name, VAR_3, VAR_2, VAR_2);
    }
    else
    {
     UINT64 VAR_5 = FUNC_4();

     if (VAR_0->LastChangeMtuError == 0 ||
      VAR_5 >= (VAR_0->LastChangeMtuError + 60000ULL))
     {
      FUNC_3(VAR_1->Session->Hub, "LH_SET_MTU_ERROR", VAR_1->Session->Name,
       VAR_0->Name, VAR_3, VAR_2, VAR_2);

      VAR_0->LastChangeMtuError = VAR_5;
     }
    }
   }
  }
 }
}
