
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9034_touch {int da9034_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_2(struct da9034_touch *VAR_2, int VAR_3)
{
 if (VAR_3)
  return FUNC_1(VAR_2->da9034_dev,
    VAR_0, VAR_1);
 else
  return FUNC_0(VAR_2->da9034_dev,
    VAR_0, VAR_1);
}
