
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_line6_pod {int atomic_flags; scalar_t__ dirty; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct usb_line6_pod *VAR_1, int VAR_2, int VAR_3)
{
 VAR_1->dirty = 0;
 FUNC_0(VAR_0, &VAR_1->atomic_flags);
}
