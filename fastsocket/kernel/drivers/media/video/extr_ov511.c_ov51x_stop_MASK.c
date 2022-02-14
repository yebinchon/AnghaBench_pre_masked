
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {int stopped; scalar_t__ bclass; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct usb_ov511*,int ,int) ;
 int FUNC_2 (struct usb_ov511*,int ,int,int) ;

__attribute__((used)) static inline int
FUNC_3(struct usb_ov511 *VAR_2)
{
 FUNC_0(4, "stopping");
 VAR_2->stopped = 1;
 if (VAR_2->bclass == VAR_0)
  return (FUNC_2(VAR_2, VAR_1, 0x3a, 0x3a));
 else
  return (FUNC_1(VAR_2, VAR_1, 0x3d));
}
