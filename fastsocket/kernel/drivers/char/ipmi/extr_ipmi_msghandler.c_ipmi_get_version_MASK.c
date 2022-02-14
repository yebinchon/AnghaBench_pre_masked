
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* ipmi_user_t ;
struct TYPE_5__ {TYPE_1__* intf; } ;
struct TYPE_4__ {unsigned char ipmi_version_major; unsigned char ipmi_version_minor; } ;



void FUNC_0(ipmi_user_t VAR_0,
        unsigned char *VAR_1,
        unsigned char *VAR_2)
{
 *VAR_1 = VAR_0->intf->ipmi_version_major;
 *VAR_2 = VAR_0->intf->ipmi_version_minor;
}
