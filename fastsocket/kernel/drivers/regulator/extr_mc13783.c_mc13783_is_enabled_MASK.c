
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct mc13783_priv {int mc13783; } ;
struct TYPE_2__ {unsigned int enable_bit; int reg; } ;


 int FUNC_0 (int ,int ,unsigned int*) ;
 TYPE_1__* VAR_0 ;
 struct mc13783_priv* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_1)
{
 struct mc13783_priv *VAR_2 = FUNC_1(VAR_1);
 int VAR_3, VAR_4 = FUNC_2(VAR_1);
 unsigned int VAR_5;

 VAR_3 = FUNC_0(VAR_2->mc13783, VAR_0[VAR_4].reg, &VAR_5);
 if (VAR_3)
  return VAR_3;

 return (VAR_5 & VAR_0[VAR_4].enable_bit) != 0;
}
