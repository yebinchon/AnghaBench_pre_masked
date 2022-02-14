
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct op_x86_model_spec {int reserved; } ;
struct op_msrs {TYPE_2__* controls; TYPE_1__* counters; } ;
struct TYPE_7__ {scalar_t__ count; scalar_t__ enabled; } ;
struct TYPE_6__ {scalar_t__ addr; } ;
struct TYPE_5__ {scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct op_x86_model_spec const*,TYPE_3__*) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,int) ;
 scalar_t__* VAR_5 ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_7(struct op_x86_model_spec const *VAR_6,
         struct op_msrs const * const VAR_7)
{
 u64 VAR_8;
 int VAR_9;


 for (VAR_9 = 0; VAR_9 < VAR_1; ++VAR_9) {
  if (VAR_2[VAR_9].enabled
      && VAR_7->counters[FUNC_2(VAR_9)].addr)
   VAR_5[VAR_9] = VAR_2[VAR_9].count;
  else
   VAR_5[VAR_9] = 0;
 }


 for (VAR_9 = 0; VAR_9 < VAR_4; ++VAR_9) {
  if (!VAR_7->controls[VAR_9].addr)
   continue;
  FUNC_4(VAR_7->controls[VAR_9].addr, VAR_8);
  if (VAR_8 & VAR_0)
   FUNC_3(VAR_9);
  VAR_8 &= VAR_6->reserved;
  FUNC_6(VAR_7->controls[VAR_9].addr, VAR_8);




  FUNC_6(VAR_7->counters[VAR_9].addr, -1LL);
 }


 for (VAR_9 = 0; VAR_9 < VAR_4; ++VAR_9) {
  int VAR_10 = FUNC_1(VAR_9);
  if (!VAR_5[VAR_10])
   continue;


  FUNC_6(VAR_7->counters[VAR_9].addr, -(u64)VAR_5[VAR_10]);


  FUNC_4(VAR_7->controls[VAR_9].addr, VAR_8);
  VAR_8 &= VAR_6->reserved;
  VAR_8 |= FUNC_0(VAR_6, &VAR_2[VAR_10]);
  FUNC_6(VAR_7->controls[VAR_9].addr, VAR_8);
 }

 if (VAR_3)
  FUNC_5();
}
