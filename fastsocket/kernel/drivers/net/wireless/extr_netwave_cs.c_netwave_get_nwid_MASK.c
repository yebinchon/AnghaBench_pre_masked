
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fixed; scalar_t__ disabled; int value; } ;
union iwreq_data {TYPE_1__ nwid; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct net_device *VAR_1,
       struct iw_request_info *VAR_2,
       union iwreq_data *VAR_3,
       char *VAR_4)
{
 VAR_3->nwid.value = VAR_0;
 VAR_3->nwid.disabled = 0;
 VAR_3->nwid.fixed = 1;
 return 0;
}
