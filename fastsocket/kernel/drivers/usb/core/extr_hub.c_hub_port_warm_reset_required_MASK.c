
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_hub {int hdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct usb_hub *VAR_3, u16 VAR_4)
{
 return FUNC_0(VAR_3->hdev) &&
  (((VAR_4 & VAR_0) ==
    VAR_2) ||
   ((VAR_4 & VAR_0) ==
    VAR_1)) ;
}
