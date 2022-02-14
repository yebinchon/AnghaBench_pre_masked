
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int sa_family; int sa_data; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_3__ {int bss_id; } ;
typedef TYPE_1__ ray_dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2,
         struct iw_request_info *VAR_3,
         struct sockaddr *VAR_4, char *VAR_5)
{
 ray_dev_t *VAR_6 = FUNC_1(VAR_2);

 FUNC_0(VAR_4->sa_data, VAR_6->bss_id, VAR_1);
 VAR_4->sa_family = VAR_0;

 return 0;
}
