
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ubyte ;
struct TYPE_3__ {int x; int y; int z; } ;
struct wiimote_t {int* event_buf; int event; int gforce; TYPE_1__ accel; int accel_calib; int orient; } ;


 int FUNC_0 (struct wiimote_t*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct wiimote_t*,int*) ;
 int FUNC_3 (struct wiimote_t*,int*) ;
 int FUNC_4 (int *,TYPE_1__*,int *) ;
 int FUNC_5 (int *,TYPE_1__*,int *,int ) ;
 int FUNC_6 (struct wiimote_t*,int*) ;
 int FUNC_7 (struct wiimote_t*,int*) ;
 int FUNC_8 (struct wiimote_t*,int*) ;
 int FUNC_9 (struct wiimote_t*,int*) ;
 int FUNC_10 (struct wiimote_t*,int*) ;

void FUNC_11(struct wiimote_t *VAR_2)
{
 ubyte VAR_3;
 ubyte *VAR_4;

 VAR_3 = VAR_2->event_buf[0];
 VAR_4 = VAR_2->event_buf+1;

 switch(VAR_3) {
  case 129:
   FUNC_8(VAR_2,VAR_4);
   return;
  case 128:
   FUNC_7(VAR_2,VAR_4);
   return;
  case 137:
   FUNC_6(VAR_2,VAR_4);
   return;
  case 136:
   FUNC_10(VAR_2,VAR_4);
   break;
  case 135:
   FUNC_10(VAR_2,VAR_4);

   VAR_2->accel.x = (VAR_4[2]<<2)|((VAR_4[0]>>5)&3);
   VAR_2->accel.y = (VAR_4[3]<<2)|((VAR_4[1]>>4)&2);
   VAR_2->accel.z = (VAR_4[4]<<2)|((VAR_4[1]>>5)&2);


   FUNC_5(&VAR_2->accel_calib, &VAR_2->accel, &VAR_2->orient, FUNC_0(VAR_2, VAR_1));


   FUNC_4(&VAR_2->accel_calib, &VAR_2->accel, &VAR_2->gforce);

   break;
  case 133:
   FUNC_10(VAR_2,VAR_4);

   VAR_2->accel.x = (VAR_4[2]<<2)|((VAR_4[0]>>5)&3);
   VAR_2->accel.y = (VAR_4[3]<<2)|((VAR_4[1]>>4)&2);
   VAR_2->accel.z = (VAR_4[4]<<2)|((VAR_4[1]>>5)&2);


   FUNC_5(&VAR_2->accel_calib, &VAR_2->accel, &VAR_2->orient, FUNC_0(VAR_2, VAR_1));


   FUNC_4(&VAR_2->accel_calib, &VAR_2->accel, &VAR_2->gforce);

   FUNC_3(VAR_2, VAR_4+5);
   break;
  case 131:
   FUNC_10(VAR_2,VAR_4);
   FUNC_9(VAR_2,VAR_4+2);
   break;
  case 134:

   FUNC_10(VAR_2, VAR_4);

   VAR_2->accel.x = (VAR_4[2]<<2)|((VAR_4[0]>>5)&3);
   VAR_2->accel.y = (VAR_4[3]<<2)|((VAR_4[1]>>4)&2);
   VAR_2->accel.z = (VAR_4[4]<<2)|((VAR_4[1]>>5)&2);

   FUNC_5(&VAR_2->accel_calib, &VAR_2->accel, &VAR_2->orient, FUNC_0(VAR_2, VAR_1));
   FUNC_4(&VAR_2->accel_calib, &VAR_2->accel, &VAR_2->gforce);

   FUNC_9(VAR_2, VAR_4+5);
   break;
  case 130:
   FUNC_10(VAR_2,VAR_4);
   FUNC_2(VAR_2, VAR_4+2);
   FUNC_9(VAR_2,VAR_4+12);
   break;
  case 132:

   FUNC_10(VAR_2, VAR_4);

   VAR_2->accel.x = (VAR_4[2]<<2)|((VAR_4[0]>>5)&3);
   VAR_2->accel.y = (VAR_4[3]<<2)|((VAR_4[1]>>4)&2);
   VAR_2->accel.z = (VAR_4[4]<<2)|((VAR_4[1]>>5)&2);

   FUNC_5(&VAR_2->accel_calib, &VAR_2->accel, &VAR_2->orient, FUNC_0(VAR_2, VAR_1));
   FUNC_4(&VAR_2->accel_calib, &VAR_2->accel, &VAR_2->gforce);


   FUNC_2(VAR_2, VAR_4+5);

   FUNC_9(VAR_2, VAR_4+15);
   break;
  default:
   FUNC_1("Unknown event, can not handle it [Code 0x%x].", VAR_3);
   return;
 }


 VAR_2->event = VAR_0;
}
