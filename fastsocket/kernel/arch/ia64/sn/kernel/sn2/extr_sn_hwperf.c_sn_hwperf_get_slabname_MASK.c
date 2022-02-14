
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sn_hwperf_object_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct sn_hwperf_object_info*) ;
 int FUNC_1 (struct sn_hwperf_object_info*) ;
 scalar_t__ FUNC_2 (struct sn_hwperf_object_info*) ;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_3 (struct sn_hwperf_object_info*,struct sn_hwperf_object_info*) ;
 int FUNC_4 (struct sn_hwperf_object_info*) ;

__attribute__((used)) static const char *FUNC_5(struct sn_hwperf_object_info *VAR_4,
   struct sn_hwperf_object_info *VAR_5, int *VAR_6)
{
 int VAR_7;
 const char *VAR_8 = VAR_2;

 if ((VAR_7 = FUNC_1(VAR_4)) || FUNC_0(VAR_4)) {
      VAR_8 = VAR_7 ? VAR_1 : VAR_0;
  *VAR_6 = FUNC_4(VAR_4);
 }
 else {
  *VAR_6 = FUNC_3(VAR_4, VAR_5);
  if (FUNC_2(VAR_4))
   VAR_8 = VAR_3;
 }

 return VAR_8;
}
