
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_map_t ;
typedef scalar_t__ vm_map_size_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_1__* vm_map_copy_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_5__ {int cpy_kdata; scalar_t__ offset; scalar_t__ size; int type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,int ,scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (scalar_t__,int ,int ,int) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,int ) ;

__attribute__((used)) static kern_return_t
FUNC_7(
 vm_map_t VAR_12,
 vm_map_offset_t VAR_13,
 vm_map_size_t VAR_14,
 boolean_t VAR_15,
 vm_map_copy_t *VAR_16)
{
 kern_return_t VAR_17;
 vm_map_copy_t VAR_18;
 vm_size_t VAR_19;

 if (VAR_14 > VAR_11)
  return VAR_0;

 VAR_19 = (vm_size_t)(VAR_9 + VAR_14);

 VAR_18 = (vm_map_copy_t)FUNC_2(VAR_19);
 if (VAR_18 == VAR_4)
  return VAR_1;
 VAR_18->type = VAR_3;
 VAR_18->size = VAR_14;
 VAR_18->offset = 0;

 VAR_17 = FUNC_1(VAR_12, VAR_13, VAR_18->cpy_kdata, (vm_size_t)VAR_14);
 if (VAR_17 != VAR_2) {
  FUNC_3(VAR_18, VAR_19);
  return VAR_17;
 }
 if (VAR_15) {
  (void) FUNC_4(
   VAR_12,
   FUNC_6(VAR_13,
       FUNC_0(VAR_12)),
   FUNC_5(VAR_13 + VAR_14,
       FUNC_0(VAR_12)),
   (VAR_5 |
    VAR_8 |
    ((VAR_12 == VAR_10) ? VAR_6 : VAR_7)));
 }
 *VAR_16 = VAR_18;
 return VAR_2;
}
