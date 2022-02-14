
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; } ;
union iwreq_data {TYPE_1__ data; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw_priv {int power_mode; } ;




 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 struct ipw_priv* FUNC_1 (struct net_device*) ;
 int* VAR_2 ;
 int FUNC_2 (char*,scalar_t__,char*,...) ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4,
    struct iw_request_info *VAR_5,
    union iwreq_data *VAR_6, char *VAR_7)
{
 struct ipw_priv *VAR_8 = FUNC_1(VAR_4);
 int VAR_9 = FUNC_0(VAR_8->power_mode);
 char *VAR_10 = VAR_7;

 VAR_10 += FUNC_2(VAR_10, VAR_1, "Power save level: %d ", VAR_9);

 switch (VAR_9) {
 case 129:
  VAR_10 += FUNC_2(VAR_10, VAR_1 - (VAR_10 - VAR_7), "(AC)");
  break;
 case 128:
  VAR_10 += FUNC_2(VAR_10, VAR_1 - (VAR_10 - VAR_7), "(BATTERY)");
  break;
 default:
  VAR_10 += FUNC_2(VAR_10, VAR_1 - (VAR_10 - VAR_7),
         "(Timeout %dms, Period %dms)",
         VAR_3[VAR_9 - 1] / 1000,
         VAR_2[VAR_9 - 1] / 1000);
 }

 if (!(VAR_8->power_mode & VAR_0))
  VAR_10 += FUNC_2(VAR_10, VAR_1 - (VAR_10 - VAR_7), " OFF");

 VAR_6->data.length = VAR_10 - VAR_7 + 1;

 return 0;
}
