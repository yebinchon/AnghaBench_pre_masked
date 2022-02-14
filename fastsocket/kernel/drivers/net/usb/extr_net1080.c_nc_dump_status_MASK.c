
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


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct usbnet*,char*,int ,int ,int,char,int ,char*,char*,char*,int ,char*,char*,char*,int) ;
 int FUNC_3 (struct usbnet*) ;

__attribute__((used)) static inline void FUNC_4(struct usbnet *VAR_8, u16 VAR_9)
{
 if (!FUNC_3(VAR_8))
  return;
 FUNC_2(VAR_8, "net1080 %s-%s status 0x%x:"
   " this (%c) PKT=%d%s%s%s;"
   " other PKT=%d%s%s%s; unspec 0x%x",
  VAR_8->udev->bus->bus_name, VAR_8->udev->devpath,
  VAR_9,




  (VAR_9 & VAR_4) ? 'A' : 'B',
  FUNC_1(VAR_9),
  (VAR_9 & VAR_1) ? " CON" : "",
  (VAR_9 & VAR_6) ? " SUS" : "",
  (VAR_9 & VAR_3) ? " MBOX" : "",

  FUNC_0(VAR_9),
  (VAR_9 & VAR_0) ? " CON" : "",
  (VAR_9 & VAR_5) ? " SUS" : "",
  (VAR_9 & VAR_2) ? " MBOX" : "",

  VAR_9 & VAR_7
  );
}
