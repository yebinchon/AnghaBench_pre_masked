
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int AdapterList; int BasicDevice; int * ProtocolHandle; } ;
typedef int SL_CTX ;
typedef int DRIVER_OBJECT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 TYPE_1__* VAR_0 ;

void FUNC_4(DRIVER_OBJECT *VAR_1)
{

 if (VAR_0->ProtocolHandle != ((void*)0))
 {
  FUNC_0(VAR_0->ProtocolHandle);
  VAR_0->ProtocolHandle = ((void*)0);
 }


 FUNC_1(VAR_0->BasicDevice);


 FUNC_2(VAR_0->AdapterList);


 FUNC_3(VAR_0, sizeof(SL_CTX));
}
