
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_params {int large_buf_capacity; } ;
struct sge {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sge*,struct sge_params*) ;
 scalar_t__ FUNC_1 (struct sge*,struct sge_params*) ;
 int FUNC_2 (struct sge*,struct sge_params*) ;
 int FUNC_3 (struct sge*) ;
 int FUNC_4 (struct sge*) ;

int FUNC_5(struct sge *VAR_1, struct sge_params *VAR_2)
{
 if (FUNC_0(VAR_1, VAR_2))
  return -VAR_0;
 if (FUNC_1(VAR_1, VAR_2)) {
  FUNC_3(VAR_1);
  return -VAR_0;
 }
 FUNC_2(VAR_1, VAR_2);







 VAR_2->large_buf_capacity = FUNC_4(VAR_1);
 return 0;
}
