
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {int valid; int eoc; } ;
struct TYPE_13__ {TYPE_8__ rid_desc; scalar_t__ card_ram_off; } ;
struct airo_info {TYPE_3__ config_desc; TYPE_6__* dev; scalar_t__ pciaux; TYPE_2__* txfids; TYPE_1__* rxfids; } ;
typedef int rsp ;
typedef int cmd ;
typedef int TxFid ;
struct TYPE_15__ {int name; } ;
struct TYPE_14__ {int parm2; scalar_t__ parm1; int parm0; void* cmd; } ;
struct TYPE_12__ {TYPE_8__ tx_desc; scalar_t__ card_ram_off; } ;
struct TYPE_11__ {TYPE_8__ rx_desc; scalar_t__ card_ram_off; } ;
typedef int RxFid ;
typedef int Rid ;
typedef TYPE_4__ Resp ;
typedef TYPE_4__ Cmd ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct airo_info*,TYPE_4__*,TYPE_4__*) ;
 int FUNC_2 (scalar_t__,TYPE_8__*,int) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;
 int FUNC_4 (TYPE_6__*) ;

__attribute__((used)) static int FUNC_5 (struct airo_info *VAR_6)
{
 Cmd VAR_7;
 Resp VAR_8;
 int VAR_9;
 int VAR_10 = VAR_5;


 FUNC_4(VAR_6->dev);

 FUNC_3(&VAR_8,0,sizeof(VAR_8));
 FUNC_3(&VAR_7,0,sizeof(VAR_7));

 VAR_7.cmd = VAR_0;
 VAR_7.parm0 = VAR_1;
 VAR_7.parm1 = (VAR_6->rxfids[0].card_ram_off - VAR_6->pciaux);
 VAR_7.parm2 = VAR_3;
 VAR_10=FUNC_1(VAR_6, &VAR_7, &VAR_8);
 if (VAR_10 != VAR_5) {
  FUNC_0(VAR_6->dev->name, "Couldn't allocate RX FID");
  return VAR_10;
 }

 for (VAR_9=0; VAR_9<VAR_3; VAR_9++) {
  FUNC_2(VAR_6->rxfids[VAR_9].card_ram_off,
   &VAR_6->rxfids[VAR_9].rx_desc, sizeof(RxFid));
 }



 FUNC_3(&VAR_8,0,sizeof(VAR_8));
 FUNC_3(&VAR_7,0,sizeof(VAR_7));

 VAR_7.cmd = VAR_0;
 VAR_7.parm0 = VAR_2;
 VAR_7.parm1 = (VAR_6->txfids[0].card_ram_off - VAR_6->pciaux);
 VAR_7.parm2 = VAR_3;

 for (VAR_9=0; VAR_9<VAR_3; VAR_9++) {
  VAR_6->txfids[VAR_9].tx_desc.valid = 1;
  FUNC_2(VAR_6->txfids[VAR_9].card_ram_off,
   &VAR_6->txfids[VAR_9].tx_desc, sizeof(TxFid));
 }
 VAR_6->txfids[VAR_9-1].tx_desc.eoc = 1;

 VAR_10=FUNC_1(VAR_6, &VAR_7, &VAR_8);
 if (VAR_10 != VAR_5) {
  FUNC_0(VAR_6->dev->name, "Couldn't allocate TX FID");
  return VAR_10;
 }


 FUNC_3(&VAR_8,0,sizeof(VAR_8));
 FUNC_3(&VAR_7,0,sizeof(VAR_7));

 VAR_7.cmd = VAR_0;
 VAR_7.parm0 = VAR_4;
 VAR_7.parm1 = (VAR_6->config_desc.card_ram_off - VAR_6->pciaux);
 VAR_7.parm2 = 1;
 VAR_10=FUNC_1(VAR_6, &VAR_7, &VAR_8);
 if (VAR_10 != VAR_5) {
  FUNC_0(VAR_6->dev->name, "Couldn't allocate RID");
  return VAR_10;
 }

 FUNC_2(VAR_6->config_desc.card_ram_off,
  &VAR_6->config_desc.rid_desc, sizeof(Rid));

 return VAR_10;
}
