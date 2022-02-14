
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sa_data; int sa_family; } ;
struct TYPE_4__ {scalar_t__ flags; scalar_t__ length; } ;
union iwreq_data {TYPE_1__ ap_addr; TYPE_2__ data; } ;
struct net_device {int dummy; } ;
struct atmel_private {scalar_t__ station_state; scalar_t__ bus_type; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct atmel_private*,int ) ;
 int FUNC_1 (struct net_device*,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 struct atmel_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ,union iwreq_data*,int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_7)
{
 struct atmel_private *VAR_8 = FUNC_3(VAR_7);


 if (VAR_8->station_state == VAR_6) {
  union iwreq_data VAR_9;

  VAR_9.data.length = 0;
  VAR_9.data.flags = 0;
  VAR_9.ap_addr.sa_family = VAR_0;
  FUNC_2(VAR_9.ap_addr.sa_data, 0, VAR_2);
  FUNC_4(VAR_8->dev, VAR_4, &VAR_9, ((void*)0));
 }

 FUNC_0(VAR_8, VAR_5);

 if (VAR_8->bus_type == VAR_1)
  FUNC_1(VAR_7, VAR_3, 0x0060);
 FUNC_1(VAR_7, VAR_3, 0x0040);
 return 0;
}
