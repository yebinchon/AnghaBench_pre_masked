
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusb_dev {int * wusb_cap_descr; int bos; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct wusb_dev *VAR_0)
{
 FUNC_0(VAR_0->bos);
 VAR_0->wusb_cap_descr = ((void*)0);
}
