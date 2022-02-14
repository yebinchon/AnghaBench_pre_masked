
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct cx25840_state {scalar_t__ aud_input; int audclk_freq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct i2c_client*,int,int,int) ;
 int FUNC_1 (struct i2c_client*,int,int) ;
 int FUNC_2 (struct i2c_client*,int,int) ;
 int FUNC_3 (struct i2c_client*) ;
 scalar_t__ FUNC_4 (struct cx25840_state*) ;
 scalar_t__ FUNC_5 (struct cx25840_state*) ;
 int FUNC_6 (struct cx25840_state*) ;
 int FUNC_7 (struct i2c_client*,int ) ;
 struct cx25840_state* FUNC_8 (int ) ;

void FUNC_9(struct i2c_client *VAR_1)
{
 struct cx25840_state *VAR_2 = FUNC_8(FUNC_3(VAR_1));

 if (!FUNC_6(VAR_2)) {

  FUNC_0(VAR_1, 0x810, ~0x1, 0x01);


  FUNC_0(VAR_1, 0x803, ~0x10, 0);


  FUNC_1(VAR_1, 0x8d3, 0x1f);

  if (VAR_2->aud_input == VAR_0) {

   FUNC_2(VAR_1, 0x8d0, 0x01011012);




  } else {

   FUNC_2(VAR_1, 0x8d0, 0x1f063870);
  }
 }

 FUNC_7(VAR_1, VAR_2->audclk_freq);

 if (!FUNC_6(VAR_2)) {
  if (VAR_2->aud_input != VAR_0) {


   FUNC_0(VAR_1, 0x803, ~0x10, 0x10);
  }


  FUNC_0(VAR_1, 0x810, ~0x1, 0x00);


  if (FUNC_5(VAR_2) || FUNC_4(VAR_2))
   FUNC_0(VAR_1, 0x803, ~0x10, 0x10);
 }
}
