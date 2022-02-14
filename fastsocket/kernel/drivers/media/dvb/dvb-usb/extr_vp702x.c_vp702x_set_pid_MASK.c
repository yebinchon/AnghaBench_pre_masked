
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct vp702x_state {int pid_filter_state; } ;
struct dvb_usb_adapter {int dev; struct vp702x_state* priv; } ;
typedef int pid ;


 int FUNC_0 (struct dvb_usb_adapter*,int) ;
 int FUNC_1 (int ,int,int,int ,int*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_adapter *VAR_0, u16 VAR_1, u8 VAR_2, int VAR_3)
{
 struct vp702x_state *VAR_4 = VAR_0->priv;
 u8 VAR_5[16] = { 0 };

 if (VAR_3)
  VAR_4->pid_filter_state |= (1 << VAR_2);
 else {
  VAR_4->pid_filter_state &= ~(1 << VAR_2);
  VAR_1 = 0xffff;
 }

 VAR_2 = 0x10 + VAR_2*2;

 FUNC_0(VAR_0, VAR_4->pid_filter_state);
 FUNC_1(VAR_0->dev, 0xe0, (((VAR_1 >> 8) & 0xff) << 8) | (VAR_2), 0, VAR_5, 16);
 FUNC_1(VAR_0->dev, 0xe0, (((VAR_1 ) & 0xff) << 8) | (VAR_2+1), 0, VAR_5, 16);
 return 0;
}
