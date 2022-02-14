
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct op_system_config {scalar_t__ enable_user; scalar_t__ enable_kernel; int mmcra; int mmcr1; int mmcr0; } ;
struct op_counter_config {scalar_t__ count; } ;
struct TYPE_2__ {int num_pmcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_11 ;
 TYPE_1__* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__* VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static int FUNC_2(struct op_counter_config *VAR_18,
        struct op_system_config *VAR_19,
        int VAR_20)
{
 int VAR_21;






 VAR_13 = VAR_19->mmcr0;
 VAR_14 = VAR_19->mmcr1;
 VAR_15 = VAR_19->mmcra;
 if (FUNC_0(VAR_2))
  VAR_11 = FUNC_1(VAR_14);
 else
  VAR_11 = 0;




 for (VAR_21 = 0; VAR_21 < VAR_12->num_pmcs; ++VAR_21)
  VAR_16[VAR_21] = 0x80000000UL - VAR_18[VAR_21].count;


 if (VAR_19->enable_kernel)
  VAR_13 &= ~VAR_0;
 else
  VAR_13 |= VAR_0;

 if (VAR_19->enable_user)
  VAR_13 &= ~VAR_1;
 else
  VAR_13 |= VAR_1;

 if (FUNC_0(VAR_7) || FUNC_0(VAR_8) ||
     FUNC_0(VAR_3) || FUNC_0(VAR_4) ||
     FUNC_0(VAR_6) || FUNC_0(VAR_5) ||
     FUNC_0(VAR_9) || FUNC_0(VAR_10))
  VAR_17 = 1;

 return 0;
}
