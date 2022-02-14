
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ttusb2_state {int id; } ;
struct dvb_usb_device {struct ttusb2_state* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_usb_device*,int*,int,int*,int,int ) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (char*,int,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_device *VAR_1, u8 VAR_2,
  u8 *VAR_3, int VAR_4, u8 *VAR_5, int VAR_6)
{
 struct ttusb2_state *VAR_7 = VAR_1->priv;
 u8 VAR_8[VAR_4+4],VAR_9[64] = { 0 };
 int VAR_10 = 0;

 FUNC_2(VAR_8,0,VAR_4+4);

 VAR_8[0] = 0xaa;
 VAR_8[1] = ++VAR_7->id;
 VAR_8[2] = VAR_2;
 VAR_8[3] = VAR_4;
 FUNC_1(&VAR_8[4],VAR_3,VAR_4);

 VAR_10 = FUNC_0(VAR_1, VAR_8, VAR_4+4, VAR_9, 64, 0);

 if (VAR_10 != 0 ||
  VAR_9[0] != 0x55 ||
  VAR_9[1] != VAR_8[1] ||
  VAR_9[2] != VAR_2 ||
  (VAR_6 > 0 && VAR_9[3] != VAR_6)) {
  FUNC_3("there might have been an error during control message transfer. (rlen = %d, was %d)",VAR_6,VAR_9[3]);
  return -VAR_0;
 }

 if (VAR_6 > 0)
  FUNC_1(VAR_5, &VAR_9[4], VAR_6);

 return 0;
}
