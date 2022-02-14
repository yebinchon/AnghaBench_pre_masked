
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ff_condition_effect* condition; } ;
struct ff_effect {TYPE_1__ u; } ;
struct ff_condition_effect {scalar_t__ center; scalar_t__ right_coeff; scalar_t__ left_coeff; scalar_t__ right_saturation; scalar_t__ left_saturation; scalar_t__ deadband; } ;



__attribute__((used)) static int FUNC_0(struct ff_effect *VAR_0,
         struct ff_effect *VAR_1)
{
 int VAR_2;
 int VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
  struct ff_condition_effect *VAR_4 = &VAR_0->u.condition[VAR_2];
  struct ff_condition_effect *VAR_5 = &VAR_1->u.condition[VAR_2];

  VAR_3 |= VAR_4->center != VAR_5->center ||
         VAR_4->right_coeff != VAR_5->right_coeff ||
         VAR_4->left_coeff != VAR_5->left_coeff ||
         VAR_4->right_saturation != VAR_5->right_saturation ||
         VAR_4->left_saturation != VAR_5->left_saturation ||
         VAR_4->deadband != VAR_5->deadband;
 }

 return VAR_3;
}
