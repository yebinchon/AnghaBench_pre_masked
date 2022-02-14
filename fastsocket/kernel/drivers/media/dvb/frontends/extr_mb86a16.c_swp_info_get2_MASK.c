
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb86a16_state {int master_clk; } ;



__attribute__((used)) static void FUNC_0(struct mb86a16_state *VAR_0,
     int VAR_1,
     int VAR_2,
     int VAR_3,
     int *VAR_4,
     int *VAR_5,
     unsigned char *VAR_6,
     unsigned char *VAR_7)
{
 int VAR_8 ;

 if (VAR_2 == 0)
  *VAR_5 = (VAR_3 + 1000) / 2000 * 2;
 else
  *VAR_5 = (VAR_3 + 500) / 1000;

 if (*VAR_5 >= VAR_3)
  *VAR_4 = *VAR_5 * 1000 - VAR_3;
 else
  *VAR_4 = VAR_3 - *VAR_5 * 1000;

 VAR_8 = *VAR_4 * 8192 / VAR_0->master_clk;
 *VAR_6 = VAR_8 & 0x00ff;
 *VAR_7 = (VAR_8 & 0x0f00) >> 8;
}
