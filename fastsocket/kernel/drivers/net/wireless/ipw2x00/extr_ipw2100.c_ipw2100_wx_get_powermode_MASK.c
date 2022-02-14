
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ length; } ;
union iwreq_data {TYPE_1__ data; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw2100_priv {int power_mode; } ;
typedef int s32 ;



 int VAR_0 ;
 int FUNC_0 (int) ;

 int VAR_1 ;
 struct ipw2100_priv* FUNC_1 (struct net_device*) ;
 int* VAR_2 ;
 int FUNC_2 (char*,int ,char*,int,...) ;
 scalar_t__ FUNC_3 (char*) ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4,
        struct iw_request_info *VAR_5,
        union iwreq_data *VAR_6, char *VAR_7)
{




 struct ipw2100_priv *VAR_8 = FUNC_1(VAR_4);
 int VAR_9 = FUNC_0(VAR_8->power_mode);
 s32 VAR_10, VAR_11;

 if (!(VAR_8->power_mode & VAR_0)) {
  FUNC_2(VAR_7, VAR_1,
    "Power save level: %d (Off)", VAR_9);
 } else {
  switch (VAR_9) {
  case 128:
   FUNC_2(VAR_7, VAR_1,
     "Power save level: %d (None)", VAR_9);
   break;
  case 129:
   FUNC_2(VAR_7, VAR_1,
     "Power save level: %d (Auto)", VAR_9);
   break;
  default:
   VAR_10 = VAR_3[VAR_9 - 1] / 1000;
   VAR_11 = VAR_2[VAR_9 - 1] / 1000;
   FUNC_2(VAR_7, VAR_1,
     "Power save level: %d "
     "(Timeout %dms, Period %dms)",
     VAR_9, VAR_10, VAR_11);
  }
 }

 VAR_6->data.length = FUNC_3(VAR_7) + 1;

 return 0;
}
