
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sn_hwperf_object_info {int location; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct sn_hwperf_object_info*) ;
 int FUNC_2 (struct sn_hwperf_object_info*) ;
 int FUNC_3 (struct sn_hwperf_object_info*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct sn_hwperf_object_info * VAR_0)
{
 if (!FUNC_3(VAR_0) && !FUNC_2(VAR_0))
  FUNC_0();
 if (FUNC_1(VAR_0))
  return -1;
 return FUNC_4(VAR_0->location);
}
