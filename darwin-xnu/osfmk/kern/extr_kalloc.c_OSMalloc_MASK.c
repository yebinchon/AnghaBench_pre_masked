
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_offset_t ;
typedef int uint32_t ;
typedef int kern_return_t ;
struct TYPE_5__ {int OSMT_attr; } ;
typedef TYPE_1__* OSMallocTag ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,int *,int) ;

void *
FUNC_4(
 uint32_t VAR_5,
 OSMallocTag VAR_6)
{
 void *VAR_7=((void*)0);
 kern_return_t VAR_8;

 FUNC_0(VAR_6);
 if ((VAR_6->OSMT_attr & VAR_1)
     && (VAR_5 & ~VAR_2)) {
  if ((VAR_8 = FUNC_3(VAR_4, (vm_offset_t *)&VAR_7, VAR_5)) != VAR_0)
   VAR_7 = ((void*)0);
 } else
  VAR_7 = FUNC_2((vm_size_t)VAR_5, VAR_3);

 if (!VAR_7)
  FUNC_1(VAR_6);

 return(VAR_7);
}
