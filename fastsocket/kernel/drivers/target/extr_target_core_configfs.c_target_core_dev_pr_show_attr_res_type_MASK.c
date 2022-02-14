
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_device {int dev_reservation_flags; TYPE_1__* transport; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ transport_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(
  struct se_device *VAR_2, char *VAR_3)
{
 if (VAR_2->transport->transport_type == VAR_1)
  return FUNC_0(VAR_3, "SPC_PASSTHROUGH\n");
 else if (VAR_2->dev_reservation_flags & VAR_0)
  return FUNC_0(VAR_3, "SPC2_RESERVATIONS\n");
 else
  return FUNC_0(VAR_3, "SPC3_PERSISTENT_RESERVATIONS\n");
}
