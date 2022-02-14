
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uwb_rc_evt_beacon {int wBPSTOffset; int bChannelNumber; } ;
struct TYPE_3__ {int dev; } ;
struct uwb_rc {TYPE_1__ uwb_dev; } ;
struct TYPE_4__ {int DestAddr; int SrcAddr; } ;
struct uwb_beacon_frame {int Beacon_Slot_Number; TYPE_2__ hdr; int Device_Identifier; } ;
typedef int macbuf ;
typedef int dstbuf ;
typedef int devbuf ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*,char*,int ,int ,int ,char*) ;
 int FUNC_1 (char*,int,int *) ;
 int FUNC_2 (char*,int,int *) ;

__attribute__((used)) static void FUNC_3(struct uwb_rc *VAR_1, struct uwb_rc_evt_beacon *VAR_2,
        struct uwb_beacon_frame *VAR_3)
{
 char VAR_4[VAR_0];
 char VAR_5[VAR_0];
 char VAR_6[VAR_0];

 FUNC_2(VAR_4, sizeof(VAR_4), &VAR_3->Device_Identifier);
 FUNC_1(VAR_5, sizeof(VAR_5), &VAR_3->hdr.SrcAddr);
 FUNC_1(VAR_6, sizeof(VAR_6), &VAR_3->hdr.DestAddr);
 FUNC_0(&VAR_1->uwb_dev.dev,
   "BEACON from %s to %s (ch%u offset %u slot %u MAC %s)\n",
   VAR_5, VAR_6, VAR_2->bChannelNumber, VAR_2->wBPSTOffset,
   VAR_3->Beacon_Slot_Number, VAR_4);
}
