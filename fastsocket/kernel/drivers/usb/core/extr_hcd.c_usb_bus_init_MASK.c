
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_devmap {int dummy; } ;
struct usb_bus {int devnum_next; int busnum; int bus_list; scalar_t__ bandwidth_isoc_reqs; scalar_t__ bandwidth_int_reqs; scalar_t__ bandwidth_allocated; int * root_hub; int devmap; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void FUNC_2 (struct usb_bus *VAR_0)
{
 FUNC_1 (&VAR_0->devmap, 0, sizeof(struct usb_devmap));

 VAR_0->devnum_next = 1;

 VAR_0->root_hub = ((void*)0);
 VAR_0->busnum = -1;
 VAR_0->bandwidth_allocated = 0;
 VAR_0->bandwidth_int_reqs = 0;
 VAR_0->bandwidth_isoc_reqs = 0;

 FUNC_0 (&VAR_0->bus_list);
}
