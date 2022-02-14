
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int flags; } ;
union iwreq_data {TYPE_1__ encoding; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct net_device *VAR_2,
    struct iw_request_info *VAR_3,
    union iwreq_data *VAR_4,
    char *VAR_5)
{
 VAR_5[1] = VAR_1 & 0xff;
 VAR_5[0] = (VAR_1>>8) & 0xff;
 VAR_4->encoding.flags = VAR_0;
 VAR_4->encoding.length = 2;
 return 0;
}
