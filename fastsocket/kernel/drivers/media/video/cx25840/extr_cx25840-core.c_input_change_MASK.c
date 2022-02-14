
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct i2c_client {int dummy; } ;
struct cx25840_state {int std; int pvr150_workaround; scalar_t__ radio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct i2c_client*,int,int,int) ;
 int FUNC_1 (struct i2c_client*,int,int) ;
 int FUNC_2 (struct i2c_client*) ;
 scalar_t__ FUNC_3 (struct cx25840_state*) ;
 struct cx25840_state* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct i2c_client *VAR_9)
{
 struct cx25840_state *VAR_10 = FUNC_4(FUNC_2(VAR_9));
 v4l2_std_id VAR_11 = VAR_10->std;


 if (VAR_11 & VAR_5) {
  FUNC_1(VAR_9, 0x402, 0);
 }
 else {
  FUNC_1(VAR_9, 0x402, 0x04);
  FUNC_1(VAR_9, 0x49f, (VAR_11 & VAR_1) ? 0x14 : 0x11);
 }
 FUNC_0(VAR_9, 0x401, ~0x60, 0);
 FUNC_0(VAR_9, 0x401, ~0x60, 0x60);


 if (FUNC_3(VAR_10))
  return;

 FUNC_0(VAR_9, 0x810, ~0x01, 1);

 if (VAR_10->radio) {
  FUNC_1(VAR_9, 0x808, 0xf9);
  FUNC_1(VAR_9, 0x80b, 0x00);
 }
 else if (VAR_11 & VAR_0) {





  int VAR_12 = VAR_10->pvr150_workaround;

  if (VAR_11 == VAR_2) {

   FUNC_1(VAR_9, 0x808, VAR_12 ? 0x2f : 0xf7);
  } else if (VAR_11 == VAR_3) {

   FUNC_1(VAR_9, 0x808, VAR_12 ? 0x3f : 0xf8);
  } else {

   FUNC_1(VAR_9, 0x808, VAR_12 ? 0x1f : 0xf6);
  }
  FUNC_1(VAR_9, 0x80b, 0x00);
 } else if (VAR_11 & VAR_4) {

  FUNC_1(VAR_9, 0x808, 0xff);




        FUNC_1(VAR_9, 0x80b, 0x00);
 } else if (VAR_11 & VAR_5) {

  FUNC_1(VAR_9, 0x808, 0xff);


  if ((VAR_11 & VAR_6) &&
      !(VAR_11 & (VAR_7 | VAR_8))) {

   FUNC_1(VAR_9, 0x80b, 0x00);
        } else if (!(VAR_11 & VAR_6) &&
     (VAR_11 & (VAR_7 | VAR_8))) {

   FUNC_1(VAR_9, 0x80b, 0x08);
        } else {

   FUNC_1(VAR_9, 0x80b, 0x10);
        }
 }

 FUNC_0(VAR_9, 0x810, ~0x01, 0);
}
