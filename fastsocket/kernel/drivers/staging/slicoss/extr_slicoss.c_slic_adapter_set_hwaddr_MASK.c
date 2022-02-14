
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* MacInfo; } ;
struct sliccard {TYPE_2__ config; scalar_t__ config_set; } ;
struct slic_config_mac {int dummy; } ;
struct adapter {size_t functionnumber; scalar_t__* currmacaddr; TYPE_3__* netdev; scalar_t__* macaddr; struct sliccard* card; } ;
struct TYPE_6__ {scalar_t__* dev_addr; } ;
struct TYPE_4__ {scalar_t__* macaddrA; } ;


 int FUNC_0 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_0)
{
 struct sliccard *VAR_1 = VAR_0->card;

 if ((VAR_0->card) && (VAR_1->config_set)) {
  FUNC_0(VAR_0->macaddr,
         VAR_1->config.MacInfo[VAR_0->functionnumber].macaddrA,
         sizeof(struct slic_config_mac));
  if (!(VAR_0->currmacaddr[0] || VAR_0->currmacaddr[1] ||
        VAR_0->currmacaddr[2] || VAR_0->currmacaddr[3] ||
        VAR_0->currmacaddr[4] || VAR_0->currmacaddr[5])) {
   FUNC_0(VAR_0->currmacaddr, VAR_0->macaddr, 6);
  }
  if (VAR_0->netdev) {
   FUNC_0(VAR_0->netdev->dev_addr, VAR_0->currmacaddr,
          6);
  }
 }
}
