
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct op_counter_config {int dummy; } ;
struct TYPE_4__ {int debug_bus_control; int group_control; } ;
struct TYPE_3__ {int cpu; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (size_t,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 int FUNC_5 (int ,size_t) ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 size_t FUNC_6 () ;
 int FUNC_7 (size_t) ;

__attribute__((used)) static int FUNC_8(struct op_counter_config *VAR_12)
{
 u32 VAR_13 = FUNC_6();
 u32 VAR_14 = 0;
 int VAR_15;
 int VAR_16;





 if (VAR_11 == VAR_1)
  return 0;




 if (FUNC_3(VAR_13))
  return 0;


 FUNC_1(VAR_13);
 FUNC_2(VAR_13);

 FUNC_4(VAR_13, VAR_10, 0);
 FUNC_4(VAR_13, VAR_5, VAR_8.group_control);
 FUNC_4(VAR_13, VAR_4, VAR_8.debug_bus_control);
 FUNC_7(VAR_13);

 for (VAR_15 = 0; VAR_15 < VAR_6; ++VAR_15) {
  if (VAR_3 & (1 << VAR_15)) {
   VAR_9[VAR_14].cpu = FUNC_0(VAR_13);
   VAR_14++;
  }
 }





 if (VAR_11 == VAR_2) {



  VAR_16 = FUNC_5(FUNC_0(VAR_13),
            VAR_14+2);



  FUNC_4(VAR_13, VAR_7, VAR_0);
  return VAR_16;
 } else
  return FUNC_5(FUNC_0(VAR_13),
      VAR_14);
}
