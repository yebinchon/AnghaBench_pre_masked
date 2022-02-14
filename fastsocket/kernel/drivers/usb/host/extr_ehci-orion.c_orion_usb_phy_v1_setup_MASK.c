
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct usb_hcd *VAR_10)
{




 FUNC_1(VAR_0, 0);
 FUNC_1(VAR_3, 0);




 FUNC_1(VAR_1, FUNC_0(VAR_1) | 0x2);
 while (FUNC_0(VAR_1) & 0x2);





 FUNC_1(VAR_2, (FUNC_0(VAR_2) & ~0x7f00) | 0xc00);





 FUNC_1(VAR_6, (FUNC_0(VAR_6) & ~0xc0)| 0x40);





 FUNC_1(VAR_9, (FUNC_0(VAR_9) & ~0x78) | 0x202040);






 FUNC_1(VAR_7, (FUNC_0(VAR_7) & ~0xc2003f0) | 0xc0000010);





 FUNC_1(VAR_5, (FUNC_0(VAR_5) & ~0x80003 ) | 0x32);





 FUNC_1(VAR_8, FUNC_0(VAR_8) & ~0x8000);




 FUNC_1(VAR_1, FUNC_0(VAR_1) & ~0x1);
 FUNC_1(VAR_1, FUNC_0(VAR_1) | 0x2);
 while (FUNC_0(VAR_1) & 0x2);






 FUNC_1(VAR_4, 0x13);
}
