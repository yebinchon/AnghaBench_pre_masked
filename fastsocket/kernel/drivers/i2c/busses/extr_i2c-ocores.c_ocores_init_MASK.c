
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ocores_i2c {int clock_khz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ocores_i2c*,int ) ;
 int FUNC_1 (struct ocores_i2c*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ocores_i2c *VAR_7)
{
 int VAR_8;
 u8 VAR_9 = FUNC_0(VAR_7, VAR_2);


 FUNC_1(VAR_7, VAR_2, VAR_9 & ~(VAR_3|VAR_4));

 VAR_8 = (VAR_7->clock_khz / (5*100)) - 1;
 FUNC_1(VAR_7, VAR_6, VAR_8 & 0xff);
 FUNC_1(VAR_7, VAR_5, VAR_8 >> 8);


 FUNC_1(VAR_7, VAR_0, VAR_1);
 FUNC_1(VAR_7, VAR_2, VAR_9 | VAR_4 | VAR_3);
}
