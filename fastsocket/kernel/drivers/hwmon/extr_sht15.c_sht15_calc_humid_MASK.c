
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sht15_data {int const val_humid; } ;


 int FUNC_0 (struct sht15_data*) ;

__attribute__((used)) static inline int FUNC_1(struct sht15_data *VAR_0)
{
 int VAR_1;
 int VAR_2 = FUNC_0(VAR_0);

 const int VAR_3 = -4;
 const int VAR_4 = 40500;
 const int VAR_5 = -2800;

 VAR_1 = VAR_3*1000
  + VAR_4 * VAR_0->val_humid/1000
  + (VAR_0->val_humid * VAR_0->val_humid * VAR_5)/1000000;
 return (VAR_2 - 25000) * (10000 + 80 * VAR_0->val_humid)
  / 1000000 + VAR_1;
}
