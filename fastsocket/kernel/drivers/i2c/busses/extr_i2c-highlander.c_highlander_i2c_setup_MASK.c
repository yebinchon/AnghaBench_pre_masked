
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct highlander_i2c_dev {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct highlander_i2c_dev *VAR_4)
{
 u16 VAR_5;

 VAR_5 = FUNC_0(VAR_4->base + VAR_0);
 VAR_5 |= VAR_2;

 if (VAR_3)
  VAR_5 &= ~VAR_1;
 else
  VAR_5 |= VAR_1;

 FUNC_1(VAR_5, VAR_4->base + VAR_0);
}
