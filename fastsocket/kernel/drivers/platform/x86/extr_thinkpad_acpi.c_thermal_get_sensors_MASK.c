
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibm_thermal_sensors_struct {int * temp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int *) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_1(struct ibm_thermal_sensors_struct *VAR_3)
{
 int VAR_4, VAR_5;
 int VAR_6;

 VAR_6 = 8;
 VAR_5 = 0;

 if (!VAR_3)
  return -VAR_0;

 if (VAR_2 == VAR_1)
  VAR_6 = 16;

 for (VAR_5 = 0 ; VAR_5 < VAR_6; VAR_5++) {
  VAR_4 = FUNC_0(VAR_5, &VAR_3->temp[VAR_5]);
  if (VAR_4)
   return VAR_4;
 }

 return VAR_6;
}
