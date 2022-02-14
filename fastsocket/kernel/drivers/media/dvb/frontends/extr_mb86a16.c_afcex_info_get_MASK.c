
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb86a16_state {int master_clk; } ;



__attribute__((used)) static void FUNC_0(struct mb86a16_state *VAR_0,
      int VAR_1,
      unsigned char *VAR_2,
      unsigned char *VAR_3)
{
 int VAR_4 ;

 VAR_4 = VAR_1 * 8192 / VAR_0->master_clk;
 *VAR_2 = VAR_4 & 0x00ff;
 *VAR_3 = (VAR_4 & 0x0f00) >> 8;
}
