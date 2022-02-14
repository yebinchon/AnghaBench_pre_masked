
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct obj_ssid {int length; int octets; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; scalar_t__ flags; } ;
struct TYPE_5__ {scalar_t__ iw_mode; } ;
typedef TYPE_1__ islpci_private ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ,struct obj_ssid*) ;
 int FUNC_3 (TYPE_1__*,int ,int ,struct obj_ssid*) ;
 TYPE_1__* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_3, struct iw_request_info *VAR_4,
    struct iw_point *VAR_5, char *VAR_6)
{
 islpci_private *VAR_7 = FUNC_4(VAR_3);
 struct obj_ssid VAR_8;

 FUNC_1(VAR_8.octets, 0, 33);


 if (VAR_5->flags && VAR_5->length) {
  if (VAR_5->length > 32)
   return -VAR_1;
  VAR_8.length = VAR_5->length;
  FUNC_0(VAR_8.octets, VAR_6, VAR_5->length);
 } else
  VAR_8.length = 0;

 if (VAR_7->iw_mode != VAR_2)
  return FUNC_3(VAR_7, VAR_0, 0, &VAR_8);


 FUNC_2(VAR_7, VAR_0, &VAR_8);
 return 0;

}
