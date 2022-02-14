
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct dw_i2c_dev {scalar_t__ base; int clk; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct dw_i2c_dev *VAR_10)
{
 u32 VAR_11 = FUNC_0(VAR_10->clk) / 1000;
 u16 VAR_12;


 FUNC_1(0, VAR_10->base + VAR_5);


 FUNC_2((VAR_11 * 40 / 10000)+1,
   VAR_10->base + VAR_8);
 FUNC_2((VAR_11 * 47 / 10000)+1,
   VAR_10->base + VAR_9);
 FUNC_2((VAR_11 * 6 / 10000)+1,
   VAR_10->base + VAR_6);
 FUNC_2((VAR_11 * 13 / 10000)+1,
   VAR_10->base + VAR_7);


 VAR_12 = VAR_1 | VAR_3 |
  VAR_2 | VAR_4;
 FUNC_2(VAR_12, VAR_10->base + VAR_0);
}
