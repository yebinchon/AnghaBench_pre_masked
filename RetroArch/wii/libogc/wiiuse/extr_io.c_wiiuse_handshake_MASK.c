
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uword ;
typedef int ubyte ;
struct TYPE_4__ {int x; int y; int z; } ;
struct TYPE_3__ {int x; int y; int z; } ;
struct accel_t {TYPE_2__ cal_zero; TYPE_1__ cal_g; } ;
struct wiimote_t {int handshake_state; int event; struct accel_t accel_calib; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct wiimote_t*,int ) ;
 int FUNC_2 (struct wiimote_t*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int* FUNC_3 (int) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (struct wiimote_t*,int*,int ,int,void (*) (struct wiimote_t*,int*,int)) ;
 int FUNC_7 (struct wiimote_t*,int ,int *) ;
 int FUNC_8 (struct wiimote_t*,void (*) (struct wiimote_t*,int*,int)) ;

void FUNC_9(struct wiimote_t *VAR_9,ubyte *VAR_10,uword VAR_11)
{
 ubyte *VAR_12 = ((void*)0);
 struct accel_t *VAR_13 = &VAR_9->accel_calib;



 switch(VAR_9->handshake_state) {
  case 0:
   VAR_9->handshake_state++;

   FUNC_7(VAR_9,VAR_1,((void*)0));
   FUNC_8(VAR_9,FUNC_9);
   return;

  case 1:
   VAR_9->handshake_state++;
   VAR_12 = FUNC_3(sizeof(ubyte)*8);

   if (VAR_11 > 2 && VAR_10[2]&VAR_6) {
    FUNC_6(VAR_9,VAR_12,VAR_7,6,FUNC_9);
    return;

  case 2:
    if (FUNC_0(*(int*)(&VAR_10[2])) == VAR_0) {
     FUNC_5(VAR_10, 0, 8);
     FUNC_2(VAR_9, VAR_4);
     break;
    }
    VAR_12 = VAR_10;
   }

   VAR_9->handshake_state++;
   FUNC_6(VAR_9,VAR_12,VAR_8,7,FUNC_9);
   return;
 }

 VAR_13->cal_zero.x = ((VAR_10[0]<<2)|((VAR_10[3]>>4)&3));
 VAR_13->cal_zero.y = ((VAR_10[1]<<2)|((VAR_10[3]>>2)&3));
 VAR_13->cal_zero.z = ((VAR_10[2]<<2)|(VAR_10[3]&3));

 VAR_13->cal_g.x = (((VAR_10[4]<<2)|((VAR_10[7]>>4)&3)) - VAR_13->cal_zero.x);
 VAR_13->cal_g.y = (((VAR_10[5]<<2)|((VAR_10[7]>>2)&3)) - VAR_13->cal_zero.y);
 VAR_13->cal_g.z = (((VAR_10[6]<<2)|(VAR_10[7]&3)) - VAR_13->cal_zero.z);
 FUNC_4(VAR_10);

 FUNC_1(VAR_9, VAR_2);
 FUNC_2(VAR_9, VAR_3);

 VAR_9->event = VAR_5;
 FUNC_8(VAR_9,((void*)0));
}
