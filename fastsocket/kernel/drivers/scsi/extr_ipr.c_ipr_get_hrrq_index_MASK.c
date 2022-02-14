
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipr_ioa_cfg {int hrrq_num; int hrrq_index; } ;


 int FUNC_0 (int,int *) ;

__attribute__((used)) static int FUNC_1(struct ipr_ioa_cfg *VAR_0)
{
 if (VAR_0->hrrq_num == 1)
  return 0;
 else
  return (FUNC_0(1, &VAR_0->hrrq_index) % (VAR_0->hrrq_num - 1)) + 1;
}
