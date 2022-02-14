
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rom; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (void*,int ,int) ;
 void* VAR_1 ;

void FUNC_1(void)
{
  VAR_1 = (void *) ((char *)VAR_0.rom + 0x200000);
  FUNC_0(VAR_1, 0, sizeof(*VAR_1));
}
