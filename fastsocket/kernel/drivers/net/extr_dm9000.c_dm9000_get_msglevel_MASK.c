
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int msg_enable; } ;
typedef TYPE_1__ board_info_t ;


 TYPE_1__* FUNC_0 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_1(struct net_device *VAR_0)
{
 board_info_t *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->msg_enable;
}
