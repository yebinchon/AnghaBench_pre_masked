
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int sa_family; int sa_data; } ;
union iwreq_data {TYPE_4__ addr; } ;
struct airo_info {int* fids; TYPE_6__* dev; TYPE_2__* txfids; } ;
typedef size_t s32 ;
typedef int __le16 ;
struct TYPE_7__ {int status; } ;
struct TYPE_11__ {TYPE_1__ ctlhdr; } ;
typedef TYPE_5__ WifiCtlHdr ;
struct TYPE_9__ {int tx_carrier_errors; int tx_heartbeat_errors; int tx_aborted_errors; } ;
struct TYPE_12__ {TYPE_3__ stats; } ;
struct TYPE_8__ {scalar_t__ virtual_host_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct airo_info*,int *,int,int ) ;
 scalar_t__ FUNC_1 (struct airo_info*,int,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (TYPE_6__*,int ,union iwreq_data*,int *) ;

__attribute__((used)) static void FUNC_5(struct airo_info *VAR_5, s32 VAR_6)
{
 __le16 VAR_7;

 if (VAR_6 < 0)
  VAR_7 = ((WifiCtlHdr *)VAR_5->txfids[0].virtual_host_addr)->ctlhdr.status;
 else {
  if (FUNC_1(VAR_5, VAR_5->fids[VAR_6] & 0xffff, 4, VAR_1) != VAR_4)
   return;
  FUNC_0(VAR_5, &VAR_7, 2, VAR_1);
 }
 if (FUNC_2(VAR_7) & 2)
  VAR_5->dev->stats.tx_aborted_errors++;
 if (FUNC_2(VAR_7) & 4)
  VAR_5->dev->stats.tx_heartbeat_errors++;
 if (FUNC_2(VAR_7) & 8)
  { }
 if (FUNC_2(VAR_7) & 0x10)
  VAR_5->dev->stats.tx_carrier_errors++;
 if (FUNC_2(VAR_7) & 0x20)
  { }




 if ((FUNC_2(VAR_7) & 2) ||
      (FUNC_2(VAR_7) & 4)) {
  union iwreq_data VAR_8;
  char VAR_9[0x18];




  FUNC_0(VAR_5, (__le16 *) VAR_9, 0x18, VAR_1);
  FUNC_3(VAR_8.addr.sa_data, VAR_9 + 0x12, VAR_2);
  VAR_8.addr.sa_family = VAR_0;


  FUNC_4(VAR_5->dev, VAR_3, &VAR_8, ((void*)0));
 }
}
