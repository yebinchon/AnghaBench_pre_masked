
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* FirmwareVersion; struct TYPE_4__* HardwareVersion; struct TYPE_4__* SerialNumber; struct TYPE_4__* Model; struct TYPE_4__* ManufacturerId; struct TYPE_4__* Label; } ;
typedef TYPE_1__ SEC_INFO ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(SEC_INFO *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0->Label);
 FUNC_0(VAR_0->ManufacturerId);
 FUNC_0(VAR_0->Model);
 FUNC_0(VAR_0->SerialNumber);
 FUNC_0(VAR_0->HardwareVersion);
 FUNC_0(VAR_0->FirmwareVersion);
 FUNC_0(VAR_0);
}
