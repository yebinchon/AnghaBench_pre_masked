
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usbnet {int intf; } ;


 int VAR_0 ;
 int FUNC_0 (struct usbnet*,int ,int ,int ,int ,void*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct usbnet *VAR_1, u8 VAR_2, u8 VAR_3,
      u16 VAR_4, u16 VAR_5, void *VAR_6, u16 VAR_7)
{
 int VAR_8;

 if (FUNC_1(VAR_1->intf) < 0)
  return -VAR_0;
 VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
    VAR_6, VAR_7);
 FUNC_2(VAR_1->intf);
 return VAR_8;
}
