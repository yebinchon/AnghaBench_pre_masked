
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int * port; int dev; } ;
struct ch341_private {int line_control; int baud_rate; int delta_msr_wait; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct ch341_private*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ch341_private*) ;
 struct ch341_private* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct ch341_private*) ;

__attribute__((used)) static int FUNC_7(struct usb_serial *VAR_5)
{
 struct ch341_private *VAR_6;
 int VAR_7;

 FUNC_1("ch341_attach()");


 VAR_6 = FUNC_4(sizeof(struct ch341_private), VAR_4);
 if (!VAR_6)
  return -VAR_3;

 FUNC_5(&VAR_6->lock);
 FUNC_2(&VAR_6->delta_msr_wait);
 VAR_6->baud_rate = VAR_2;
 VAR_6->line_control = VAR_1 | VAR_0;

 VAR_7 = FUNC_0(VAR_5->dev, VAR_6);
 if (VAR_7 < 0)
  goto error;

 FUNC_6(VAR_5->port[0], VAR_6);
 return 0;

error: FUNC_3(VAR_6);
 return VAR_7;
}
