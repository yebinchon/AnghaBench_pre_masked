
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct dvb_usb_device {scalar_t__ last_event; struct cinergyt2_state* priv; } ;
struct cinergyt2_state {scalar_t__ rc_counter; } ;
typedef int key ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct dvb_usb_device*,int*,int,int*,int,int ) ;
 int FUNC_3 (struct dvb_usb_device*,int*,scalar_t__*,int*) ;
 scalar_t__* VAR_4 ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_device *VAR_5, u32 *VAR_6, int *VAR_7)
{
 struct cinergyt2_state *VAR_8 = VAR_5->priv;
 u8 VAR_9[5] = {0, 0, 0, 0, 0}, VAR_10 = VAR_0;
 int VAR_11;

 *VAR_7 = VAR_3;

 FUNC_2(VAR_5, &VAR_10, 1, VAR_9, sizeof(VAR_9), 0);
 if (VAR_9[4] == 0xff) {

  VAR_8->rc_counter++;
  if (VAR_8->rc_counter > VAR_1) {
   for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_4); VAR_11++) {
    if (VAR_5->last_event == VAR_4[VAR_11]) {
     *VAR_7 = VAR_2;
     *VAR_6 = VAR_5->last_event;
     FUNC_1("repeat key, event %x\n",
         *VAR_6);
     return 0;
    }
   }
   FUNC_1("repeated key (non repeatable)\n");
  }
  return 0;
 }


 VAR_9[2] = ~VAR_9[1];
 FUNC_3(VAR_5, VAR_9, VAR_6, VAR_7);
 if (VAR_9[0] != 0) {
  if (*VAR_6 != VAR_5->last_event)
   VAR_8->rc_counter = 0;

  FUNC_1("key: %x %x %x %x %x\n",
         VAR_9[0], VAR_9[1], VAR_9[2], VAR_9[3], VAR_9[4]);
 }
 return 0;
}
