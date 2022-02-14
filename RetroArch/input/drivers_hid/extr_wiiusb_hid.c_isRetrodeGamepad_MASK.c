
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ idVendor; scalar_t__ idProduct; TYPE_2__* configurations; } ;
typedef TYPE_3__ usb_devdesc ;
struct TYPE_6__ {TYPE_1__* interfaces; } ;
struct TYPE_5__ {scalar_t__ bInterfaceSubClass; scalar_t__ endpoints; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(usb_devdesc VAR_2)
{
    if (VAR_2.idVendor != VAR_1 || VAR_2.idProduct != VAR_0)
        return 0;
    if (VAR_2.configurations)
        if (VAR_2.configurations->interfaces)
            if (VAR_2.configurations->interfaces->endpoints)
                return VAR_2.configurations->interfaces->bInterfaceSubClass == 0;
    return 0;
}
