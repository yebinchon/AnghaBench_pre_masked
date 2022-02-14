
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usbnet {int dummy; } ;
struct urb {int actual_length; int transfer_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usbnet*,char*,int) ;
 int FUNC_1 (struct usbnet*,char*,int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*,int ,int) ;
 scalar_t__ FUNC_4 (struct usbnet*) ;
 int FUNC_5 (struct usbnet*,int ) ;

__attribute__((used)) static void FUNC_6(struct usbnet *VAR_2, struct urb *VAR_3)
{
 u32 VAR_4;

 if (VAR_3->actual_length != 4) {
  FUNC_1(VAR_2, "unexpected urb length %d", VAR_3->actual_length);
  return;
 }

 FUNC_3(&VAR_4, VAR_3->transfer_buffer, 4);
 FUNC_2(&VAR_4);

 if (FUNC_4(VAR_2))
  FUNC_0(VAR_2, "intdata: 0x%08X", VAR_4);

 if (VAR_4 & VAR_1)
  FUNC_5(VAR_2, VAR_0);
 else
  FUNC_1(VAR_2, "unexpected interrupt, intdata=0x%08X", VAR_4);
}
