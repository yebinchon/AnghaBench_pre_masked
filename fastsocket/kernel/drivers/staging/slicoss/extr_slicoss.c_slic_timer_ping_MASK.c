
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef struct sliccard* ulong ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct sliccard {TYPE_1__ pingtimer; struct sliccard* card; } ;
struct net_device {int dummy; } ;
struct adapter {TYPE_1__ pingtimer; struct adapter* card; } ;


 int FUNC_0 (struct sliccard*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 struct sliccard* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(ulong VAR_3)
{
 struct adapter *VAR_4;
 struct sliccard *VAR_5;

 FUNC_0(VAR_3);
 VAR_4 = FUNC_2((struct net_device *)VAR_3);
 FUNC_0(VAR_4);
 VAR_5 = VAR_4->card;
 FUNC_0(VAR_5);

 VAR_4->pingtimer.expires = VAR_2 + (VAR_1 * VAR_0);
 FUNC_1(&VAR_4->pingtimer);
}
