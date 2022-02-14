
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb86a16_state {int master_clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,char*) ;
 int FUNC_1 (struct mb86a16_state*,int,unsigned char*) ;
 int FUNC_2 (struct mb86a16_state*,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct mb86a16_state *VAR_3,
         int VAR_4,
         int VAR_5,
         int VAR_6)
{
 unsigned char VAR_7, VAR_8, VAR_9;
 unsigned char VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17;
 int VAR_18;
 int VAR_19, VAR_20 = 0;
 int VAR_21, VAR_22, VAR_23, VAR_24;

 if (FUNC_1(VAR_3, 0x43, &VAR_7) != 2)
  goto err;

 if (VAR_7 > 127)
  VAR_13 = VAR_7 - 256;
 else
  VAR_13 = VAR_7;

 VAR_16 = VAR_5 * VAR_13 / 256;
 if (FUNC_1(VAR_3, 0x49, &VAR_10) != 2)
  goto err;

 VAR_19 = (VAR_10 & 0x04) >> 2;
 if (VAR_19 == 0) {
  if (FUNC_1(VAR_3, 0x2a, &VAR_10) != 2)
   goto err;
  VAR_20 = (VAR_10 & 0x20) >> 5;
 }

 if (VAR_19 == 1) {
  if (FUNC_1(VAR_3, 0x0e, &VAR_8) != 2)
   goto err;
  if (FUNC_1(VAR_3, 0x0f, &VAR_9) != 2)
   goto err;
 } else if (VAR_20 == 1) {
  if (FUNC_1(VAR_3, 0x2b, &VAR_8) != 2)
   goto err;
  if (FUNC_1(VAR_3, 0x2c, &VAR_9) != 2)
   goto err;
 }
 if ((VAR_19 == 1) || (VAR_20 == 1)) {
  FUNC_2(VAR_3, VAR_5);
  VAR_15 = ((VAR_9 & 0x01) << 8) + VAR_8;
  if (VAR_15 > 255)
   VAR_14 = VAR_15 - 512;
  else
   VAR_14 = VAR_15;

  VAR_17 = VAR_14 * VAR_3->master_clk / 8192;
 } else
  VAR_17 = 0;

 if (FUNC_1(VAR_3, 0x22, &VAR_10) != 2)
  goto err;
 if (FUNC_1(VAR_3, 0x23, &VAR_11) != 2)
  goto err;
 if (FUNC_1(VAR_3, 0x24, &VAR_12) != 2)
  goto err;

 VAR_21 = (VAR_10 & 0xe0) >> 5;
 VAR_22 = ((VAR_10 & 0x1f) << 12) + (VAR_11 << 4) + (VAR_12 >> 4);
 if (VAR_21 == 0)
  VAR_23 = 2 * VAR_22;
 else
  VAR_23 = VAR_22;

 VAR_24 = VAR_23 - VAR_4;

 if (VAR_6 == 0) {
  if (VAR_16 + VAR_17 + VAR_24 * 1000 >= 0)
   VAR_18 = (VAR_16 + VAR_17 + VAR_24 * 1000 + 500) / 1000;
  else
   VAR_18 = (VAR_16 + VAR_17 + VAR_24 * 1000 - 500) / 1000;
 } else {
  VAR_18 = VAR_16 + VAR_17 + VAR_24 * 1000;
 }

 return VAR_18;
err:
 FUNC_0(VAR_2, VAR_1, 1, "I2C transfer error");
 return -VAR_0;
}
