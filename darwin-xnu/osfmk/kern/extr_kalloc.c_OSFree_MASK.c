
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int uint32_t ;
struct TYPE_4__ {int OSMT_attr; } ;
typedef TYPE_1__* OSMallocTag ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (int ,int ,int) ;

void
FUNC_3(
 void *VAR_3,
 uint32_t VAR_4,
 OSMallocTag VAR_5)
{
 if ((VAR_5->OSMT_attr & VAR_0)
     && (VAR_4 & ~VAR_1)) {
  FUNC_2(VAR_2, (vm_offset_t)VAR_3, VAR_4);
 } else
  FUNC_1((void *)VAR_3, VAR_4);

 FUNC_0(VAR_5);
}
