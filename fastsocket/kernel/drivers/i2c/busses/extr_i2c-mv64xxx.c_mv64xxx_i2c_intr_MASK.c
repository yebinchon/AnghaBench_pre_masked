
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mv64xxx_i2c_data {int lock; scalar_t__ reg_base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct mv64xxx_i2c_data*) ;
 int FUNC_1 (struct mv64xxx_i2c_data*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t
FUNC_5(int VAR_5, void *VAR_6)
{
 struct mv64xxx_i2c_data *VAR_7 = VAR_6;
 unsigned long VAR_8;
 u32 VAR_9;
 irqreturn_t VAR_10 = VAR_1;

 FUNC_3(&VAR_7->lock, VAR_8);
 while (FUNC_2(VAR_7->reg_base + VAR_2) &
      VAR_3) {
  VAR_9 = FUNC_2(VAR_7->reg_base + VAR_4);
  FUNC_1(VAR_7, VAR_9);
  FUNC_0(VAR_7);
  VAR_10 = VAR_0;
 }
 FUNC_4(&VAR_7->lock, VAR_8);

 return VAR_10;
}
