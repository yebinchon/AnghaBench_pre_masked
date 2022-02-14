
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct usbnet*,char*,int ,int ,int,char*,char*,char*,char*,char*,char*,char*,char*,char*,int) ;
 int FUNC_1 (struct usbnet*) ;

__attribute__((used)) static inline void FUNC_2(struct usbnet *VAR_10, u16 VAR_11)
{
 if (!FUNC_1(VAR_10))
  return;
 FUNC_0(VAR_10, "net1080 %s-%s usbctl 0x%x:%s%s%s%s%s;"
   " this%s%s;"
   " other%s%s; r/o 0x%x",
  VAR_10->udev->bus->bus_name, VAR_10->udev->devpath,
  VAR_11,
  (VAR_11 & VAR_3) ? " lang" : "",
  (VAR_11 & VAR_4) ? " mfgr" : "",
  (VAR_11 & VAR_5) ? " prod" : "",
  (VAR_11 & VAR_6) ? " serial" : "",
  (VAR_11 & VAR_2) ? " defaults" : "",

  (VAR_11 & VAR_7) ? " FLUSH" : "",
  (VAR_11 & VAR_0) ? " DIS" : "",
  (VAR_11 & VAR_8) ? " FLUSH" : "",
  (VAR_11 & VAR_1) ? " DIS" : "",
  VAR_11 & ~VAR_9
  );
}
