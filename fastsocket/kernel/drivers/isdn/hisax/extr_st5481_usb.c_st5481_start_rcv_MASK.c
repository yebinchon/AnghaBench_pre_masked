
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st5481_in {TYPE_1__** urb; struct st5481_adapter* adapter; } ;
struct st5481_adapter {int usb_dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
 struct st5481_in *VAR_2 = VAR_1;
 struct st5481_adapter *VAR_3 = VAR_2->adapter;

 FUNC_0(4,"");

 VAR_2->urb[0]->dev = VAR_3->usb_dev;
 FUNC_1(VAR_2->urb[0], VAR_0);

 VAR_2->urb[1]->dev = VAR_3->usb_dev;
 FUNC_1(VAR_2->urb[1], VAR_0);
}
