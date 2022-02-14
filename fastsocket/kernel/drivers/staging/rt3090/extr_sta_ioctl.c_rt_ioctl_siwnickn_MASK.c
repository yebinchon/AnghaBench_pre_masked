
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {scalar_t__ length; } ;
struct TYPE_4__ {int nickname; } ;
typedef TYPE_1__* PRTMP_ADAPTER ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 int FUNC_4 (int ,int ,scalar_t__) ;

int FUNC_5(struct net_device *VAR_5,
    struct iw_request_info *VAR_6,
    struct iw_point *VAR_7, char *VAR_8)
{
 PRTMP_ADAPTER VAR_9 = FUNC_1(VAR_5);


    if(!FUNC_2(VAR_9, VAR_4))
    {
        FUNC_0(VAR_3 ,("INFO::Network is down!\n"));
        return -VAR_1;
    }

 if (VAR_7->length > VAR_2)
  return -VAR_0;

 FUNC_4(VAR_9->nickname, 0, VAR_2 + 1);
 FUNC_3(VAR_9->nickname, VAR_8, VAR_7->length);


 return 0;
}
