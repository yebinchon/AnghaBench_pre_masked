
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usbnet {TYPE_1__* udev; } ;
struct sk_buff {int len; int* data; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_3(struct usbnet *VAR_0, struct sk_buff *VAR_1)
{
 u8 VAR_2;

 if (VAR_1->len == 0) {
  FUNC_1(&VAR_0->udev->dev, "unexpected empty rx frame\n");
  return 0;
 }

 FUNC_2(VAR_1, VAR_1->len - 1);
 VAR_2 = VAR_1->data[VAR_1->len];

 if (VAR_2 != 0x20)
  FUNC_0(&VAR_0->udev->dev, "rx fixup status %x\n", VAR_2);

 return VAR_1->len > 0;
}
