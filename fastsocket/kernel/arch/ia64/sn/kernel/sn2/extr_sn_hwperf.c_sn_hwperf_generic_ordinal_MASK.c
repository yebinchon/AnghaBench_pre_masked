
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sn_hwperf_object_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct sn_hwperf_object_info*) ;
 scalar_t__ FUNC_1 (struct sn_hwperf_object_info*,struct sn_hwperf_object_info*) ;

__attribute__((used)) static int FUNC_2(struct sn_hwperf_object_info *VAR_0,
    struct sn_hwperf_object_info *VAR_1)
{
 int VAR_2;
 struct sn_hwperf_object_info *VAR_3;

 for (VAR_2=0, VAR_3=VAR_1; VAR_3 != VAR_0; VAR_3++) {
  if (FUNC_0(VAR_3))
   continue;
  if (FUNC_1(VAR_3, VAR_0))
   VAR_2++;
 }

 return VAR_2;
}
