
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct dvb_usb_device {struct dibusb_device_state* priv; } ;
struct dibusb_device_state {int old_toggle; int last_repeat_count; } ;
struct TYPE_5__ {int event; } ;


 int FUNC_0 (TYPE_1__*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,int,...) ;
 int FUNC_2 (struct dvb_usb_device*,int*,int,int*,int,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_device *VAR_4, u32 *VAR_5, int *VAR_6)
{
 u8 VAR_7[5],VAR_8[2] = { VAR_0, 0x35 }, VAR_9,VAR_10,VAR_11;
 u16 VAR_12;
 int VAR_13;
 struct dibusb_device_state *VAR_14 = VAR_4->priv;

 FUNC_2(VAR_4,VAR_8,2,VAR_7,5,0);

 *VAR_6 = VAR_2;
 switch (VAR_7[0]) {
  case 128:
   VAR_12 = ((VAR_7[1] << 8) | VAR_7[2]) >> 3;
   VAR_10 = !!(VAR_12 & 0x800);
   VAR_9 = VAR_12 & 0x3f;
   VAR_11 = (VAR_12 >> 6) & 0x1f;

   FUNC_1("raw key code 0x%02x, 0x%02x, 0x%02x to c: %02x d: %02x toggle: %d\n",VAR_7[1],VAR_7[2],VAR_7[3],VAR_11,VAR_9,VAR_10);

   for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_3); VAR_13++) {
    if (FUNC_4(&VAR_3[VAR_13]) == VAR_9 &&
     FUNC_3(&VAR_3[VAR_13]) == VAR_11) {

     FUNC_1("c: %x, d: %x\n", FUNC_4(&VAR_3[VAR_13]),
         FUNC_3(&VAR_3[VAR_13]));

     *VAR_5 = VAR_3[VAR_13].event;
     *VAR_6 = VAR_1;
     if (VAR_14->old_toggle == VAR_10) {
      if (VAR_14->last_repeat_count++ < 2)
       *VAR_6 = VAR_2;
     } else {
      VAR_14->last_repeat_count = 0;
      VAR_14->old_toggle = VAR_10;
     }
     break;
    }
   }

   break;
  case 129:
  default:
   break;
 }

 return 0;
}
