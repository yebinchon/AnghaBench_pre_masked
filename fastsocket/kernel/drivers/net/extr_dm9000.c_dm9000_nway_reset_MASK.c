
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int mii; } ;
typedef TYPE_1__ board_info_t ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0)
{
 board_info_t *VAR_1 = FUNC_1(VAR_0);
 return FUNC_0(&VAR_1->mii);
}
