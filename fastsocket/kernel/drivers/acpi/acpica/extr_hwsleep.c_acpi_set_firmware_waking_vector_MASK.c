
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int acpi_status ;
struct TYPE_2__ {int length; int version; scalar_t__ xfirmware_waking_vector; int firmware_waking_vector; } ;


 int FUNC_0 (int (*) (int )) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ) ;

acpi_status
FUNC_2(u32 VAR_2)
{
 FUNC_0(FUNC_2);
 VAR_1->firmware_waking_vector = VAR_2;



 if ((VAR_1->length > 32) && (VAR_1->version >= 1)) {
  VAR_1->xfirmware_waking_vector = 0;
 }

 FUNC_1(VAR_0);
}
