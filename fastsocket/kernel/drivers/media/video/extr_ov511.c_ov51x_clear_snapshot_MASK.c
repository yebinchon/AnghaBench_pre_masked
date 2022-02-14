
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ov511 {scalar_t__ bclass; TYPE_1__* dev; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct usb_ov511*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct usb_ov511 *VAR_3)
{
 if (VAR_3->bclass == VAR_0) {
  FUNC_2(VAR_3, VAR_2, 0x00);
  FUNC_2(VAR_3, VAR_2, 0x02);
  FUNC_2(VAR_3, VAR_2, 0x00);
 } else if (VAR_3->bclass == VAR_1) {
  FUNC_1(&VAR_3->dev->dev,
    "snapshot reset not supported yet on OV518(+)\n");
 } else {
  FUNC_0(&VAR_3->dev->dev, "clear snap: invalid bridge type\n");
 }
}
