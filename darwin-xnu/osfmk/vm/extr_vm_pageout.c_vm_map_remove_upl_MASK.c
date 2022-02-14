
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int vm_map_t ;
typedef scalar_t__ vm_address_t ;
typedef TYPE_1__* upl_t ;
typedef scalar_t__ upl_size_t ;
typedef int kern_return_t ;
struct TYPE_10__ {int flags; int ref_count; scalar_t__ kaddr; scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *,scalar_t__*) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_10 (scalar_t__,int ) ;
 scalar_t__ FUNC_11 (scalar_t__,int ) ;

kern_return_t
FUNC_12(
 vm_map_t VAR_7,
 upl_t VAR_8)
{
 vm_address_t VAR_9;
 upl_size_t VAR_10;
 int VAR_11 = 0, VAR_12 = 0;
 upl_t VAR_13 = ((void*)0);

 if (VAR_8 == VAR_4)
  return VAR_1;

 if((VAR_11 = FUNC_6(VAR_8))) {
  int VAR_14=0, VAR_15=0;
  VAR_13 = VAR_8;
  FUNC_3(VAR_13);
  for(VAR_12=0; VAR_12 < VAR_3; VAR_12++) {
   VAR_8 = FUNC_7(VAR_13, VAR_12 );
   if(VAR_8 == ((void*)0))
    continue;
   VAR_15++;
   if (!(VAR_5 & VAR_8->flags))
    VAR_14++;
  }

  if(VAR_14) {
   if(VAR_14 != VAR_15)
    FUNC_2("%d of the %d sub-upls within the Vector UPL is/are not mapped\n", VAR_14, VAR_15);
   else {
    FUNC_4(VAR_13);
    return VAR_0;
   }
  }
  VAR_12=0;
 }
 else
  FUNC_3(VAR_8);

process_upl_to_remove:
 if(VAR_11) {
  if(VAR_12 == VAR_3) {
   vm_map_t VAR_16;
   vm_offset_t VAR_17;
   FUNC_5(VAR_13, &VAR_16, &VAR_17);

   FUNC_9(VAR_7, VAR_17, VAR_17 + VAR_13->size, VAR_6);
   FUNC_8(VAR_16);
   FUNC_4(VAR_13);
   return VAR_2;
  }

  VAR_8 = FUNC_7(VAR_13, VAR_12++ );
  if(VAR_8 == ((void*)0))
   goto process_upl_to_remove;
 }

 if (VAR_8->flags & VAR_5) {
  VAR_9 = VAR_8->kaddr;
  VAR_10 = VAR_8->size;

  FUNC_1(VAR_8->ref_count > 1);
  VAR_8->ref_count--;

  VAR_8->flags &= ~VAR_5;
  VAR_8->kaddr = (vm_offset_t) 0;

  if(!VAR_11) {
   FUNC_4(VAR_8);

   FUNC_9(
    VAR_7,
    FUNC_11(VAR_9,
        FUNC_0(VAR_7)),
    FUNC_10(VAR_9 + VAR_10,
        FUNC_0(VAR_7)),
    VAR_6);
   return VAR_2;
  }
  else {





   goto process_upl_to_remove;
  }
 }
 FUNC_4(VAR_8);

 return VAR_0;
}
