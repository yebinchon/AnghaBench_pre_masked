
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int mac_addr; } ;
struct wps_registrar_device {TYPE_1__ dev; struct wps_registrar_device* next; } ;
struct wps_registrar {struct wps_registrar_device* devices; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int const*,int ) ;

__attribute__((used)) static struct wps_registrar_device * FUNC_1(struct wps_registrar *VAR_1,
          const u8 *VAR_2)
{
 struct wps_registrar_device *VAR_3;

 for (VAR_3 = VAR_1->devices; VAR_3; VAR_3 = VAR_3->next) {
  if (FUNC_0(VAR_3->dev.mac_addr, VAR_2, VAR_0) == 0)
   return VAR_3;
 }
 return ((void*)0);
}
