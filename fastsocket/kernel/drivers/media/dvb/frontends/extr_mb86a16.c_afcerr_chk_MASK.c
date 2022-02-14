
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb86a16_state {int master_clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,char*) ;
 int FUNC_1 (struct mb86a16_state*,int,unsigned char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct mb86a16_state *VAR_3)
{
 unsigned char VAR_4, VAR_5 ;
 int VAR_6 ;
 int VAR_7, VAR_8 ;

 if (FUNC_1(VAR_3, 0x0e, &VAR_4) != 2)
  goto err;
 if (FUNC_1(VAR_3, 0x0f, &VAR_5) != 2)
  goto err;

 VAR_6 = (VAR_5 << 8) + VAR_4;

 if (VAR_6 > 2048)
  VAR_7 = VAR_6 - 4096;
 else
  VAR_7 = VAR_6;
 VAR_8 = VAR_7 * VAR_3->master_clk / 8192;

 return VAR_8;

err:
 FUNC_0(VAR_2, VAR_1, 1, "I2C transfer error");
 return -VAR_0;
}
