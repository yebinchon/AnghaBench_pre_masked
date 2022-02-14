
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct net_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ can_csum; } ;
typedef TYPE_1__ board_info_t ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, uint32_t VAR_2)
{
 board_info_t *VAR_3 = FUNC_1(VAR_1);
 int VAR_4 = -VAR_0;

 if (VAR_3->can_csum)
  VAR_4 = FUNC_0(VAR_1, VAR_2);
 return VAR_4;
}
