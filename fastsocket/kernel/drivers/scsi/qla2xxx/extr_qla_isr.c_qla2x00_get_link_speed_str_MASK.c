
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct qla_hw_data {int dummy; } ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 size_t VAR_0 ;

const char *
FUNC_2(struct qla_hw_data *VAR_1, uint16_t VAR_2)
{
 static const char * const VAR_3[] = {
  "1", "2", "?", "4", "8", "16", "10"
 };

 if (FUNC_0(VAR_1) || FUNC_1(VAR_1))
  return VAR_3[0];
 else if (VAR_2 == 0x13)
  return VAR_3[6];
 else if (VAR_2 < 6)
  return VAR_3[VAR_2];
 else
  return VAR_3[VAR_0];
}
