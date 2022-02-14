
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ dw_AiBase; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (void*) ;

int FUNC_1(struct comedi_device *VAR_1)
{
 if ((FUNC_0((void *)(VAR_0->dw_AiBase + 8)) & 0x80000UL) == 0x80000UL)
  return 1;
 else
  return 0;

}
