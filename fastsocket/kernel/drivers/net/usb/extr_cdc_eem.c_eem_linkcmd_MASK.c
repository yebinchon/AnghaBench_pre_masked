
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int out; int udev; } ;
struct urb {int dummy; } ;
struct sk_buff {int len; int data; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct usbnet*,char*) ;
 int VAR_1 ;
 struct urb* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct urb*,int ,int ,int ,int ,int ,struct sk_buff*) ;
 int FUNC_4 (struct urb*) ;
 int FUNC_5 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_6(struct usbnet *VAR_2, struct sk_buff *VAR_3)
{
 struct urb *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(0, VAR_0);
 if (!VAR_4)
  goto fail;

 FUNC_3(VAR_4, VAR_2->udev, VAR_2->out,
   VAR_3->data, VAR_3->len, VAR_1, VAR_3);

 VAR_5 = FUNC_5(VAR_4, VAR_0);
 if (VAR_5) {
  FUNC_4(VAR_4);
fail:
  FUNC_0(VAR_3);
  FUNC_1(VAR_2, "link cmd failure\n");
  return;
 }
}
