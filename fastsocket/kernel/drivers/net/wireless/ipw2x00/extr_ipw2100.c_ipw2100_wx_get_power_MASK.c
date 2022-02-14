
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int disabled; scalar_t__ flags; } ;
union iwreq_data {TYPE_1__ power; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw2100_priv {int power_mode; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 struct ipw2100_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
    struct iw_request_info *VAR_2,
    union iwreq_data *VAR_3, char *VAR_4)
{




 struct ipw2100_priv *VAR_5 = FUNC_1(VAR_1);

 if (!(VAR_5->power_mode & VAR_0))
  VAR_3->power.disabled = 1;
 else {
  VAR_3->power.disabled = 0;
  VAR_3->power.flags = 0;
 }

 FUNC_0("GET Power Management Mode -> %02X\n", VAR_5->power_mode);

 return 0;
}
