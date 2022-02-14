
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {int pd_idx; int qd_idx; scalar_t__ ddf_layout; } ;



__attribute__((used)) static int FUNC_0(int VAR_0, struct stripe_head *VAR_1,
        int *VAR_2, int VAR_3)
{
 int VAR_4 = *VAR_2;

 if (VAR_1->ddf_layout)
  (*VAR_2)++;
 if (VAR_0 == VAR_1->pd_idx)
  return VAR_3;
 if (VAR_0 == VAR_1->qd_idx)
  return VAR_3 + 1;
 if (!VAR_1->ddf_layout)
  (*VAR_2)++;
 return VAR_4;
}
