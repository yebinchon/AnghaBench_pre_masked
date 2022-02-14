
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct ch7006_state {int* regs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 int FUNC_0 (struct i2c_client*,struct ch7006_state*,size_t) ;

void FUNC_1(struct i2c_client *VAR_28,
         struct ch7006_state *VAR_29)
{
 FUNC_0(VAR_28, VAR_29, VAR_17);

 FUNC_0(VAR_28, VAR_29, VAR_7);
 FUNC_0(VAR_28, VAR_29, VAR_8);
 FUNC_0(VAR_28, VAR_29, VAR_2);
 FUNC_0(VAR_28, VAR_29, VAR_10);
 FUNC_0(VAR_28, VAR_29, VAR_4);
 FUNC_0(VAR_28, VAR_29, VAR_18);
 FUNC_0(VAR_28, VAR_29, VAR_16);
 FUNC_0(VAR_28, VAR_29, VAR_1);
 FUNC_0(VAR_28, VAR_29, VAR_9);
 FUNC_0(VAR_28, VAR_29, VAR_27);
 FUNC_0(VAR_28, VAR_29, VAR_11);
 FUNC_0(VAR_28, VAR_29, VAR_6);
 FUNC_0(VAR_28, VAR_29, VAR_5);
 FUNC_0(VAR_28, VAR_29, VAR_14);
 FUNC_0(VAR_28, VAR_29, VAR_12);
 FUNC_0(VAR_28, VAR_29, VAR_13);
 FUNC_0(VAR_28, VAR_29, VAR_0);
 FUNC_0(VAR_28, VAR_29, VAR_19);
 FUNC_0(VAR_28, VAR_29, VAR_20);
 FUNC_0(VAR_28, VAR_29, VAR_21);
 FUNC_0(VAR_28, VAR_29, VAR_22);
 FUNC_0(VAR_28, VAR_29, VAR_23);
 FUNC_0(VAR_28, VAR_29, VAR_24);
 FUNC_0(VAR_28, VAR_29, VAR_25);
 FUNC_0(VAR_28, VAR_29, VAR_26);
 FUNC_0(VAR_28, VAR_29, VAR_15);
 FUNC_0(VAR_28, VAR_29, VAR_3);

 VAR_29->regs[VAR_8] = (VAR_29->regs[VAR_8] & 0xf0) |
  (VAR_29->regs[VAR_8] & 0x0c) >> 2 |
  (VAR_29->regs[VAR_8] & 0x03) << 2;
}
