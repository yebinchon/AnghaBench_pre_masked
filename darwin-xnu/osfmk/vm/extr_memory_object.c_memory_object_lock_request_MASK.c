
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef TYPE_1__* vm_object_t ;
typedef int memory_object_size_t ;
typedef int memory_object_return_t ;
typedef int memory_object_offset_t ;
typedef int memory_object_control_t ;
typedef int kern_return_t ;
struct TYPE_10__ {scalar_t__ paging_offset; scalar_t__ copy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ,int ,int *,int*,int ,int,int) ;

kern_return_t
FUNC_8(
 memory_object_control_t VAR_9,
 memory_object_offset_t VAR_10,
 memory_object_size_t VAR_11,
 memory_object_offset_t * VAR_12,
 int * VAR_13,
 memory_object_return_t VAR_14,
 int VAR_15,
 vm_prot_t VAR_16)
{
 vm_object_t VAR_17;




 VAR_17 = FUNC_0(VAR_9);
 if (VAR_17 == VAR_6)
  return (VAR_0);

 if ((VAR_16 & ~VAR_7) != 0 && VAR_16 != VAR_8)
  return (VAR_0);

 VAR_11 = FUNC_1(VAR_11);





 FUNC_2(VAR_17);
 FUNC_3(VAR_17);

 if (VAR_15 & VAR_3) {
  if ((VAR_14 != VAR_4) || VAR_10 || VAR_17->copy) {
   VAR_15 &= ~VAR_3;
   VAR_15 |= VAR_2;
  }
 }
 VAR_10 -= VAR_17->paging_offset;

 if (VAR_15 & VAR_3)
  FUNC_5(VAR_17, VAR_5);
 else
  (void)FUNC_7(VAR_17, VAR_10, VAR_11, VAR_12,
           VAR_13, VAR_14, VAR_15, VAR_16);

 FUNC_4(VAR_17);
 FUNC_6(VAR_17);

 return (VAR_1);
}
