
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int throttle_period_size ;
struct _throttle_io_info_t {scalar_t__ throttle_is_fusion_with_priority; int* throttle_io_periods; } ;
typedef scalar_t__ boolean_t ;


 scalar_t__ FUNC_0 (char*,int*,int) ;
 scalar_t__ FUNC_1 (char*,int*,int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;

__attribute__((used)) static void
FUNC_2(struct _throttle_io_info_t *VAR_6, boolean_t VAR_7)
{
 int VAR_8;
 if ((VAR_7 == VAR_3) && (VAR_6->throttle_is_fusion_with_priority == 0))
  VAR_6->throttle_io_periods = &VAR_5[0];
 else
  VAR_6->throttle_io_periods = &VAR_4[0];


 if (FUNC_0("kern.io_throttle_period_tier1", &VAR_8, sizeof(VAR_8)))
  VAR_6->throttle_io_periods[VAR_0] = VAR_8;

 if (FUNC_0("kern.io_throttle_period_tier2", &VAR_8, sizeof(VAR_8)))
  VAR_6->throttle_io_periods[VAR_1] = VAR_8;

 if (FUNC_0("kern.io_throttle_period_tier3", &VAR_8, sizeof(VAR_8)))
  VAR_6->throttle_io_periods[VAR_2] = VAR_8;


 if (FUNC_1("io_throttle_period_tier1", &VAR_8, sizeof(VAR_8)))
  VAR_6->throttle_io_periods[VAR_0] = VAR_8;

 if (FUNC_1("io_throttle_period_tier2", &VAR_8, sizeof(VAR_8)))
  VAR_6->throttle_io_periods[VAR_1] = VAR_8;

 if (FUNC_1("io_throttle_period_tier3", &VAR_8, sizeof(VAR_8)))
  VAR_6->throttle_io_periods[VAR_2] = VAR_8;

}
