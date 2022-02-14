
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ipmi_addr {size_t channel; } ;
typedef TYPE_2__* ipmi_smi_t ;
struct TYPE_5__ {TYPE_1__* channels; } ;
struct TYPE_4__ {unsigned char lun; unsigned char address; } ;


 int VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static int FUNC_0(ipmi_smi_t VAR_2,
        struct ipmi_addr *VAR_3,
        unsigned char *VAR_4,
        unsigned char *VAR_5)
{
 if (VAR_3->channel >= VAR_1)
  return -VAR_0;
 *VAR_5 = VAR_2->channels[VAR_3->channel].lun;
 *VAR_4 = VAR_2->channels[VAR_3->channel].address;
 return 0;
}
