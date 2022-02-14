
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wlandevice_t ;
struct iw_request_info {int dummy; } ;
struct iw_point {int dummy; } ;
struct TYPE_3__ {int * ml_priv; } ;
typedef TYPE_1__ netdevice_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(netdevice_t *VAR_2,
    struct iw_request_info *VAR_3,
    struct iw_point *VAR_4, char *VAR_5)
{
 wlandevice_t *VAR_6 = VAR_2->ml_priv;
 int VAR_7 = 0;

 if (!VAR_1) {
  VAR_7 = (-VAR_0);
  goto exit;
 }


 VAR_7 = FUNC_0(VAR_6);

exit:
 return VAR_7;
}
