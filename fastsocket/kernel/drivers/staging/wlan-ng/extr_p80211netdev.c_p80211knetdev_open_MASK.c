
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ msdstate; int (* open ) (TYPE_1__*) ;int state; int netdev; } ;
typedef TYPE_1__ wlandevice_t ;
struct TYPE_6__ {TYPE_1__* ml_priv; } ;
typedef TYPE_2__ netdevice_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(netdevice_t *VAR_4)
{
 int VAR_5 = 0;
 wlandevice_t *VAR_6 = VAR_4->ml_priv;


 if (VAR_6->msdstate != VAR_3)
  return -VAR_1;


 if (VAR_6->open != ((void*)0)) {
  VAR_5 = VAR_6->open(VAR_6);
  if (VAR_5 == 0) {
   FUNC_0(VAR_6->netdev);
   VAR_6->state = VAR_2;
  }
 } else {
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
