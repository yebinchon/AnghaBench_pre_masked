
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sn_hwperf_object_info {int dummy; } ;
typedef int cnodeid_t ;


 int FUNC_0 (int*,struct sn_hwperf_object_info**) ;
 int FUNC_1 (struct sn_hwperf_object_info*,int,int ,int *,int *) ;
 int FUNC_2 (struct sn_hwperf_object_info*) ;

int FUNC_3(cnodeid_t VAR_0,
 cnodeid_t *VAR_1, cnodeid_t *VAR_2)
{
 int VAR_3;
 int VAR_4;
 struct sn_hwperf_object_info *VAR_5;

 if ((VAR_3 = FUNC_0(&VAR_4, &VAR_5)) == 0) {
  VAR_3 = FUNC_1(VAR_5, VAR_4,
   VAR_0, VAR_1, VAR_2);
  FUNC_2(VAR_5);
 }

 return VAR_3;
}
