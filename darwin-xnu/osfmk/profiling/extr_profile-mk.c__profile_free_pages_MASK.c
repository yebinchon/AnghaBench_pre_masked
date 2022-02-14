
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
struct TYPE_2__ {scalar_t__ debug; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,size_t) ;
 int FUNC_2 (char*,int,int) ;

void
FUNC_3(void *VAR_1, size_t VAR_2)
{
 if (FUNC_0(0)->debug) {
  FUNC_2("Freed %d bytes for profiling, address 0x%x\n", (int)VAR_2, (int)VAR_1);
 }

 FUNC_1(VAR_0, (vm_offset_t)VAR_1, VAR_2);
 return;
}
