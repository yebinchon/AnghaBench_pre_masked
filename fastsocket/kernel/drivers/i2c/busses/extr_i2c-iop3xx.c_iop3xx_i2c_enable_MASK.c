
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_algo_iop3xx_data {scalar_t__ id; int SR_enabled; scalar_t__ ioaddr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct i2c_algo_iop3xx_data *VAR_13)
{
 u32 VAR_14 = VAR_4 | VAR_6 | VAR_8;
 VAR_13->SR_enabled =
  VAR_9 | VAR_10 |
  VAR_11 | VAR_12;

 VAR_14 |= VAR_2 | VAR_3 |
  VAR_5 | VAR_7;

 FUNC_1(VAR_14, VAR_13->ioaddr + VAR_0);
}
