
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* close ) (TYPE_1__*) ;int state; int netdev; } ;
typedef TYPE_1__ wlandevice_t ;
struct TYPE_6__ {TYPE_1__* ml_priv; } ;
typedef TYPE_2__ netdevice_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(netdevice_t *VAR_1)
{
 int VAR_2 = 0;
 wlandevice_t *VAR_3 = VAR_1->ml_priv;

 if (VAR_3->close != ((void*)0))
  VAR_2 = VAR_3->close(VAR_3);

 FUNC_0(VAR_3->netdev);
 VAR_3->state = VAR_0;

 return VAR_2;
}
