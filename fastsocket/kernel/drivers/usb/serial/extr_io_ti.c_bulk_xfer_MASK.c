
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial {TYPE_1__** port; int dev; } ;
struct TYPE_2__ {int bulk_out_endpointAddress; } ;


 int FUNC_0 (int ,int ,void*,int,int*,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_serial *VAR_0, void *VAR_1,
      int VAR_2, int *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0->dev,
   FUNC_1(VAR_0->dev,
    VAR_0->port[0]->bulk_out_endpointAddress),
   VAR_1, VAR_2, VAR_3, 1000);
 return VAR_4;
}
