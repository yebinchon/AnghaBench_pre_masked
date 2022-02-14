
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_3__* ipmi_user_t ;
struct TYPE_7__ {TYPE_2__* intf; } ;
struct TYPE_6__ {TYPE_1__* channels; } ;
struct TYPE_5__ {unsigned char lun; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;

int FUNC_0(ipmi_user_t VAR_2,
      unsigned int VAR_3,
      unsigned char VAR_4)
{
 if (VAR_3 >= VAR_1)
  return -VAR_0;
 VAR_2->intf->channels[VAR_3].lun = VAR_4 & 0x3;
 return 0;
}
