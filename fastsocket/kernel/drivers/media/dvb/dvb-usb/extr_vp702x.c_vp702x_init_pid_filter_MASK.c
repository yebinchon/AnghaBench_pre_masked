
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vp702x_state {int pid_filter_count; int pid_filter_can_bypass; int pid_filter_state; } ;
struct dvb_usb_adapter {int dev; struct vp702x_state* priv; } ;


 int FUNC_0 (struct dvb_usb_adapter*,int,int,int) ;
 int FUNC_1 (struct dvb_usb_adapter*,int) ;
 int FUNC_2 (int ,int,int,int ,int *,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_adapter *VAR_0)
{
 struct vp702x_state *VAR_1 = VAR_0->priv;
 int VAR_2;
 u8 VAR_3[10] = { 0 };

 VAR_1->pid_filter_count = 8;
 VAR_1->pid_filter_can_bypass = 1;
 VAR_1->pid_filter_state = 0x00;

 FUNC_1(VAR_0, 1);

 for (VAR_2 = 0; VAR_2 < VAR_1->pid_filter_count; VAR_2++)
  FUNC_0(VAR_0, 0xffff, VAR_2, 1);

 FUNC_2(VAR_0->dev, 0xb5, 3, 0, VAR_3, 10);
 FUNC_2(VAR_0->dev, 0xb5, 0, 0, VAR_3, 10);
 FUNC_2(VAR_0->dev, 0xb5, 1, 0, VAR_3, 10);


 return 0;
}
