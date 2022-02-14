
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv64xxx_i2c_data {int freq_m; int freq_n; int state; scalar_t__ reg_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct mv64xxx_i2c_data *VAR_8)
{
 FUNC_0(0, VAR_8->reg_base + VAR_6);
 FUNC_0((((VAR_8->freq_m & 0xf) << 3) | (VAR_8->freq_n & 0x7)),
  VAR_8->reg_base + VAR_0);
 FUNC_0(0, VAR_8->reg_base + VAR_5);
 FUNC_0(0, VAR_8->reg_base + VAR_4);
 FUNC_0(VAR_3 | VAR_2,
  VAR_8->reg_base + VAR_1);
 VAR_8->state = VAR_7;
}
