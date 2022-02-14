
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_se401 {int bgain; int ggain; int rgain; int resetlevel; int expose_h; int expose_m; int expose_l; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct usb_se401*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct usb_se401 *VAR_7)
{

 FUNC_0(VAR_7, VAR_4, VAR_7->expose_l);

 FUNC_0(VAR_7, VAR_5, VAR_7->expose_m);

 FUNC_0(VAR_7, VAR_6, VAR_7->expose_h);

 FUNC_0(VAR_7, VAR_3, VAR_7->resetlevel);

 FUNC_0(VAR_7, VAR_2, VAR_7->rgain);

 FUNC_0(VAR_7, VAR_1, VAR_7->ggain);

 FUNC_0(VAR_7, VAR_0, VAR_7->bgain);

 return 0;
}
