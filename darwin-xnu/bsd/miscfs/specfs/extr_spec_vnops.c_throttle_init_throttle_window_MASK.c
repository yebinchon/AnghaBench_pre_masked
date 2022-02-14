
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int throttle_window_size ;


 scalar_t__ FUNC_0 (char*,int*,int) ;
 scalar_t__ FUNC_1 (char*,int*,int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static void
FUNC_2(void)
{
 int VAR_4;
 if (FUNC_0("kern.io_throttle_window_tier1", &VAR_4, sizeof(VAR_4)))
  VAR_3[VAR_0] = VAR_4;

 if (FUNC_0("kern.io_throttle_window_tier2", &VAR_4, sizeof(VAR_4)))
  VAR_3[VAR_1] = VAR_4;

 if (FUNC_0("kern.io_throttle_window_tier3", &VAR_4, sizeof(VAR_4)))
  VAR_3[VAR_2] = VAR_4;


 if (FUNC_1("io_throttle_window_tier1", &VAR_4, sizeof(VAR_4)))
  VAR_3[VAR_0] = VAR_4;

 if (FUNC_1("io_throttle_window_tier2", &VAR_4, sizeof(VAR_4)))
  VAR_3[VAR_1] = VAR_4;

 if (FUNC_1("io_throttle_window_tier3", &VAR_4, sizeof(VAR_4)))
  VAR_3[VAR_2] = VAR_4;
}
