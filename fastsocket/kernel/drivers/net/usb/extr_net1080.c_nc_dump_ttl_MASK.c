
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct usbnet {TYPE_2__* udev; } ;
struct TYPE_4__ {int devpath; TYPE_1__* bus; } ;
struct TYPE_3__ {int bus_name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct usbnet*,char*,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct usbnet*) ;

__attribute__((used)) static inline void FUNC_4(struct usbnet *VAR_0, u16 VAR_1)
{
 if (FUNC_3(VAR_0))
  FUNC_2(VAR_0, "net1080 %s-%s ttl 0x%x this = %d, other = %d",
   VAR_0->udev->bus->bus_name, VAR_0->udev->devpath,
   VAR_1, FUNC_1(VAR_1), FUNC_0(VAR_1));
}
