
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_en_dev {scalar_t__ last_overflow_check; int clock; scalar_t__ overflow_period; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct mlx4_en_dev *VAR_1)
{
 bool VAR_2 = FUNC_0(VAR_1->last_overflow_check +
           VAR_1->overflow_period);

 if (VAR_2) {
  FUNC_1(&VAR_1->clock);
  VAR_1->last_overflow_check = VAR_0;
 }
}
