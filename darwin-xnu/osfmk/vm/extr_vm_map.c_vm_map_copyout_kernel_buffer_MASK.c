
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef int vm_object_offset_t ;
typedef TYPE_1__* vm_map_t ;
typedef scalar_t__ vm_map_size_t ;
typedef int vm_map_offset_t ;
typedef TYPE_2__* vm_map_copy_t ;
typedef scalar_t__ vm_map_address_t ;
typedef TYPE_3__* thread_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_17__ {TYPE_1__* map; } ;
struct TYPE_16__ {scalar_t__ size; int cpy_kdata; scalar_t__ offset; } ;
struct TYPE_15__ {scalar_t__ pmap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_11 ;
 TYPE_3__* FUNC_3 () ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_12 ;
 int FUNC_5 (TYPE_2__*,scalar_t__) ;
 scalar_t__ VAR_13 ;
 int FUNC_6 (char*,long long,long long) ;
 int VAR_14 ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,scalar_t__*,scalar_t__,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_11 (scalar_t__,int ) ;
 TYPE_1__* FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (scalar_t__,int ) ;

__attribute__((used)) static kern_return_t
FUNC_14(
 vm_map_t VAR_15,
 vm_map_address_t *VAR_16,
 vm_map_copy_t VAR_17,
 vm_map_size_t VAR_18,
 boolean_t VAR_19,
 boolean_t VAR_20)
{
 kern_return_t VAR_21 = VAR_2;
 thread_t VAR_22 = FUNC_3();

 FUNC_1(VAR_17->size == VAR_18);




 if (VAR_18 > VAR_13 || VAR_17->offset)
  FUNC_6("Invalid vm_map_copy_t sz:%lld, ofst:%lld",
        (long long)VAR_17->size, (long long)VAR_17->offset);

 if (!VAR_19) {




  *VAR_16 = 0;
  VAR_21 = FUNC_8(VAR_15,
      VAR_16,
      FUNC_11(VAR_18,
          FUNC_0(VAR_15)),
      (vm_map_offset_t) 0,
      VAR_3,
      VAR_6,
      VAR_5,
      VAR_8,
      (vm_object_offset_t) 0,
      VAR_0,
      VAR_10,
      VAR_9,
      VAR_4);
  if (VAR_21 != VAR_2)
   return VAR_21;





 }




 if (VAR_22->map == VAR_15) {





  FUNC_1((vm_size_t)VAR_18 == VAR_18);
  if (FUNC_2(VAR_17->cpy_kdata, *VAR_16, (vm_size_t)VAR_18)) {
   VAR_21 = VAR_1;
  }
 }
 else {
  vm_map_t VAR_23;






  FUNC_9(VAR_15);
  VAR_23 = FUNC_12(VAR_15);

  FUNC_1((vm_size_t)VAR_18 == VAR_18);
  if (FUNC_2(VAR_17->cpy_kdata, *VAR_16, (vm_size_t)VAR_18)) {
   VAR_14++;
   VAR_21 = VAR_1;
  }

  (void) FUNC_12(VAR_23);
  FUNC_7(VAR_15);
 }

 if (VAR_21 != VAR_2) {

  if (!VAR_19) {



   (void) FUNC_10(
    VAR_15,
    FUNC_13(*VAR_16,
        FUNC_0(VAR_15)),
    FUNC_11((*VAR_16 +
         FUNC_11(VAR_18,
             FUNC_0(VAR_15))),
        FUNC_0(VAR_15)),
    VAR_7);
   *VAR_16 = 0;
  }
 } else {

  if (VAR_20) {
   FUNC_5(VAR_17, VAR_18 + VAR_11);
  }
 }

 return VAR_21;
}
