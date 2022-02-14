
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mtu; } ;
typedef TYPE_1__ netdevice_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(netdevice_t *VAR_1, int VAR_2)
{


 if ((VAR_2 < 68) || (VAR_2 > (2312 - 20 - 8)))
  return -VAR_0;

 VAR_1->mtu = VAR_2;

 return 0;
}
