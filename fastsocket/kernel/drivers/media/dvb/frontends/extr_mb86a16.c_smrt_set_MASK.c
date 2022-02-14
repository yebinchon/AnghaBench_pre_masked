
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb86a16_state {int deci; int master_clk; int csel; int rsel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,char*) ;
 scalar_t__ FUNC_1 (struct mb86a16_state*,int ,unsigned char) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct mb86a16_state *VAR_5, int VAR_6)
{
 int VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9, VAR_10;

 VAR_8 = 1 << VAR_5->deci;
 VAR_7 = (8192 * VAR_5->master_clk - 2 * VAR_8 * VAR_6 * 8192 + VAR_5->master_clk / 2) / VAR_5->master_clk;

 VAR_9 = VAR_7 & 0x0ff;
 VAR_10 = (VAR_7 & 0xf00) >> 8;

 if (FUNC_1(VAR_5, VAR_1, (VAR_5->deci << 2) |
           (VAR_5->csel << 1) |
     VAR_5->rsel) < 0)
  goto err;
 if (FUNC_1(VAR_5, VAR_2, VAR_9) < 0)
  goto err;
 if (FUNC_1(VAR_5, VAR_3, VAR_10) < 0)
  goto err;

 return 0;
err:
 FUNC_0(VAR_4, VAR_0, 1, "I2C transfer error");
 return -1;
}
