
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pd_dvb_adapter {int ep_addr; TYPE_1__* pd_device; scalar_t__* urb_array; } ;
struct TYPE_2__ {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*,int ,int ,int ,int ,int ,int ,struct pd_dvb_adapter*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct pd_dvb_adapter *VAR_4)
{
 if (VAR_4->urb_array[0])
  return 0;

 FUNC_0(VAR_4->urb_array, VAR_0,
   VAR_4->pd_device->udev, VAR_4->ep_addr,
   VAR_1, VAR_2,
   VAR_3, VAR_4);
 return 0;
}
