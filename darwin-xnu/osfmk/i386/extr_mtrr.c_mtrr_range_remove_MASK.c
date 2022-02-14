
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_5__ {scalar_t__ refcnt; } ;
typedef TYPE_1__ mtrr_var_range_t ;
typedef int kern_return_t ;
typedef int addr64_t ;
struct TYPE_6__ {unsigned int var_count; TYPE_1__* var_range; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 () ;
 TYPE_4__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (TYPE_1__*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ,int ,int ) ;

kern_return_t
FUNC_7(addr64_t VAR_9, uint64_t VAR_10, uint32_t VAR_11)
{
 mtrr_var_range_t * VAR_12;
 int VAR_13 = VAR_1;
 int VAR_14 = 0;
 unsigned int VAR_15;

 FUNC_0("mtrr_range_remove base = 0x%llx, size = 0x%llx, type = %d\n",
            VAR_9, VAR_10, VAR_11);

 if (VAR_4 == VAR_0) {
  return VAR_2;
 }

 FUNC_1();

 for (VAR_15 = 0; VAR_15 < VAR_5.var_count; VAR_15++) {
  VAR_12 = &VAR_5.var_range[VAR_15];

  if (VAR_12->refcnt &&
      FUNC_6(VAR_12, VAR_9, VAR_10, VAR_11) > 0) {

   if (--VAR_5.var_range[VAR_15].refcnt == 0) {
    FUNC_5(VAR_12, VAR_9, VAR_10, VAR_11, 0);
    VAR_14 = 1;
   }
   VAR_13 = VAR_3;
   break;
  }
 }

 if (VAR_14) {
  FUNC_3(VAR_7,
         VAR_6,
         VAR_8, ((void*)0));
  VAR_13 = VAR_3;
 }





 FUNC_2();

 return VAR_13;
}
