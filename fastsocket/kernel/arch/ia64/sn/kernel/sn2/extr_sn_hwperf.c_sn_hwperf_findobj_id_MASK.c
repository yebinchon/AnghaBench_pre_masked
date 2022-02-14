
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sn_hwperf_object_info {int id; } ;



__attribute__((used)) static struct sn_hwperf_object_info *
FUNC_0(struct sn_hwperf_object_info *VAR_0,
 int VAR_1, int VAR_2)
{
 int VAR_3;
 struct sn_hwperf_object_info *VAR_4 = VAR_0;

 for (VAR_3=0; VAR_3 < VAR_1; VAR_3++, VAR_4++) {
  if (VAR_4->id == VAR_2)
   return VAR_4;
 }

 return ((void*)0);

}
