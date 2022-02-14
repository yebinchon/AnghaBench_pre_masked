
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int SessionCreated; scalar_t__ SessionSlotNumber; scalar_t__ SessionId; TYPE_1__* Api; } ;
struct TYPE_6__ {int (* C_CloseSession ) (scalar_t__) ;} ;
typedef TYPE_2__ SECURE ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(SECURE *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }
 if (VAR_0->SessionCreated == 0)
 {
  return;
 }


 VAR_0->Api->C_CloseSession(VAR_0->SessionId);

 VAR_0->SessionCreated = 0;
 VAR_0->SessionId = 0;
 VAR_0->SessionSlotNumber = 0;

 FUNC_1(VAR_0);


 FUNC_0(VAR_0);
}
