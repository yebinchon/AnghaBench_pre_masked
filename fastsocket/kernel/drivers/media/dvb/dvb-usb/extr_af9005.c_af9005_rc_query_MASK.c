
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dvb_usb_device {int last_event; struct af9005_device_state* priv; } ;
struct af9005_device_state {int sequence; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int*,int,int (*) (char*,int,int )) ;
 int FUNC_2 (struct dvb_usb_device*,int*,int,int*,int,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct dvb_usb_device*,int*,int,int *,int*) ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_device *VAR_3, u32 * VAR_4, int *VAR_5)
{
 struct af9005_device_state *VAR_6 = VAR_3->priv;
 int VAR_7, VAR_8;

 u8 VAR_9[5];
 u8 VAR_10[256];

 *VAR_5 = VAR_2;
 if (&FUNC_4 == ((void*)0)) {

  return 0;
 }

 VAR_9[0] = 3;
 VAR_9[1] = 0;
 VAR_9[2] = 0x40;
 VAR_9[3] = 1;
 VAR_9[4] = VAR_6->sequence++;
 VAR_7 = FUNC_2(VAR_3, VAR_9, 5, VAR_10, 256, 0);
 if (VAR_7) {
  FUNC_3("rc query failed");
  return VAR_7;
 }
 if (VAR_10[2] != 0x41) {
  FUNC_3("rc query bad header.");
  return -VAR_0;
 }
 if (VAR_10[4] != VAR_9[4]) {
  FUNC_3("rc query bad sequence.");
  return -VAR_0;
 }
 VAR_8 = VAR_10[5];
 if (VAR_8 > 246) {
  FUNC_3("rc query invalid length");
  return -VAR_0;
 }
 if (VAR_8 > 0) {
  FUNC_0("rc data (%d) ", VAR_8);
  FUNC_1((VAR_10 + 6), VAR_8, FUNC_0);
  VAR_7 = FUNC_4(VAR_3, &VAR_10[6], VAR_8, VAR_4, VAR_5);
  if (VAR_7) {
   FUNC_3("rc_decode failed");
   return VAR_7;
  } else {
   FUNC_0("rc_decode state %x event %x\n", *VAR_5, *VAR_4);
   if (*VAR_5 == VAR_1)
    *VAR_4 = VAR_3->last_event;
  }
 }
 return 0;
}
