
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct ti_pcl {int pcl_status; } ;
struct TYPE_9__ {int lock; int chan_count; } ;
struct TYPE_11__ {int next; } ;
struct TYPE_8__ {int queue_lock; int data_dma; int header_dma; TYPE_4__ pcl_queue; int pcl; int queue; } ;
struct TYPE_10__ {int reg_1394a; } ;
struct ti_lynx {int selfid_size; int phy_reg0; int id; TYPE_2__ iso_rcv; TYPE_1__ async; int dev; TYPE_3__ phyic; } ;
struct hpsb_packet {int driver_list; int data_size; int header_size; } ;
struct hpsb_host {struct ti_lynx* hostdata; } ;
typedef enum devctl_cmd { ____Placeholder_devctl_cmd } devctl_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;



 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (TYPE_4__) ;



 int VAR_17 ;
 int FUNC_3 (int ,int ,char*,...) ;
 int FUNC_4 (int ,int ,char*,...) ;






 struct hpsb_packet* FUNC_5 (int ) ;
 int FUNC_6 (struct ti_lynx*,int ,struct ti_pcl*) ;
 int FUNC_7 (struct ti_lynx*,int) ;
 int FUNC_8 (struct hpsb_host*,struct hpsb_packet*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (int *,TYPE_4__*) ;
 TYPE_4__ VAR_18 ;
 int FUNC_12 (int ,int ,int ,int ) ;
 int FUNC_13 (struct ti_lynx*,int ,int ) ;
 int FUNC_14 (struct ti_lynx*,int ) ;
 int FUNC_15 (struct ti_lynx*,int ,int ) ;
 int FUNC_16 (struct ti_lynx*,int ,int) ;
 int FUNC_17 (struct ti_lynx*,int,int) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_20(struct hpsb_host *VAR_19, enum devctl_cmd VAR_20, int VAR_21)
{
        struct ti_lynx *VAR_22 = VAR_19->hostdata;
        int VAR_23 = 0;
        struct hpsb_packet *VAR_24;
 FUNC_2(VAR_18);
        unsigned long VAR_25;
 int VAR_26;

        switch (VAR_20) {
        case 133:
                if (FUNC_14(VAR_22, VAR_16) & VAR_15) {
                        VAR_23 = 0;
                        break;
                }

  switch (VAR_21) {
  case 130:
   if (VAR_22->phyic.reg_1394a) {
    VAR_26 = FUNC_7(VAR_22, 5);
    if (VAR_26 == -1) {
     FUNC_3(VAR_10, VAR_22->id, "cannot reset bus, because read phy reg failed");
     VAR_23 = -1;
     break;
    }
    VAR_26 |= 0x40;

    FUNC_3(VAR_11, VAR_22->id, "resetting bus (short bus reset) on request");

    VAR_22->selfid_size = -1;
    VAR_22->phy_reg0 = -1;
    FUNC_17(VAR_22, 5, VAR_26);
    break;
   } else {
    FUNC_3(VAR_11, VAR_22->id, "cannot do short bus reset, because of old phy");

   }
  case 136:
   VAR_26 = FUNC_7(VAR_22, 1);
   if (VAR_26 == -1) {
    FUNC_3(VAR_10, VAR_22->id, "cannot reset bus, because read phy reg failed");
    VAR_23 = -1;
    break;
   }
   VAR_26 |= 0x40;

   FUNC_3(VAR_11, VAR_22->id, "resetting bus (long bus reset) on request");

   VAR_22->selfid_size = -1;
   VAR_22->phy_reg0 = -1;
   FUNC_17(VAR_22, 1, VAR_26);
   break;
  case 128:
   if (VAR_22->phyic.reg_1394a) {
    VAR_26 = FUNC_7(VAR_22, 1);
    if (VAR_26 == -1) {
     FUNC_3(VAR_10, VAR_22->id, "cannot reset bus, because read phy reg failed");
     VAR_23 = -1;
     break;
    }
    if (VAR_26 & 0x80) {
     VAR_26 &= ~0x80;
     FUNC_17(VAR_22, 1, VAR_26);
    }

    VAR_26 = FUNC_7(VAR_22, 5);
    if (VAR_26 == -1) {
     FUNC_3(VAR_10, VAR_22->id, "cannot reset bus, because read phy reg failed");
     VAR_23 = -1;
     break;
    }
    VAR_26 |= 0x40;

    FUNC_3(VAR_11, VAR_22->id, "resetting bus (short bus reset, no force_root) on request");

    VAR_22->selfid_size = -1;
    VAR_22->phy_reg0 = -1;
    FUNC_17(VAR_22, 5, VAR_26);
    break;
   } else {
    FUNC_3(VAR_11, VAR_22->id, "cannot do short bus reset, because of old phy");

   }
  case 134:
   VAR_26 = FUNC_7(VAR_22, 1);
   if (VAR_26 == -1) {
    FUNC_3(VAR_10, VAR_22->id, "cannot reset bus, because read phy reg failed");
    VAR_23 = -1;
    break;
   }
   VAR_26 &= ~0x80;
   VAR_26 |= 0x40;

   FUNC_3(VAR_11, VAR_22->id, "resetting bus (long bus reset, no force_root) on request");

   VAR_22->selfid_size = -1;
   VAR_22->phy_reg0 = -1;
   FUNC_17(VAR_22, 1, VAR_26);
   break;
  case 129:
   if (VAR_22->phyic.reg_1394a) {
    VAR_26 = FUNC_7(VAR_22, 1);
    if (VAR_26 == -1) {
     FUNC_3(VAR_10, VAR_22->id, "cannot reset bus, because read phy reg failed");
     VAR_23 = -1;
     break;
    }
    if (!(VAR_26 & 0x80)) {
     VAR_26 |= 0x80;
     FUNC_17(VAR_22, 1, VAR_26);
    }

    VAR_26 = FUNC_7(VAR_22, 5);
    if (VAR_26 == -1) {
     FUNC_3(VAR_10, VAR_22->id, "cannot reset bus, because read phy reg failed");
     VAR_23 = -1;
     break;
    }
    VAR_26 |= 0x40;

    FUNC_3(VAR_11, VAR_22->id, "resetting bus (short bus reset, force_root set) on request");

    VAR_22->selfid_size = -1;
    VAR_22->phy_reg0 = -1;
    FUNC_17(VAR_22, 5, VAR_26);
    break;
   } else {
    FUNC_3(VAR_11, VAR_22->id, "cannot do short bus reset, because of old phy");

   }
  case 135:
   VAR_26 = FUNC_7(VAR_22, 1);
   if (VAR_26 == -1) {
    FUNC_3(VAR_10, VAR_22->id, "cannot reset bus, because read phy reg failed");
    VAR_23 = -1;
    break;
   }
   VAR_26 |= 0xc0;

   FUNC_3(VAR_11, VAR_22->id, "resetting bus (long bus reset, force_root set) on request");

   VAR_22->selfid_size = -1;
   VAR_22->phy_reg0 = -1;
   FUNC_17(VAR_22, 1, VAR_26);
   break;
  default:
   FUNC_3(VAR_10, VAR_22->id, "unknown argument for reset_bus command %d", VAR_21);
   VAR_23 = -1;
  }

                break;

        case 139:
                VAR_23 = FUNC_14(VAR_22, VAR_5);
                break;

        case 131:
                FUNC_16(VAR_22, VAR_5, VAR_21);
                break;

        case 132:
                FUNC_16(VAR_22, VAR_14,
                          (VAR_21 << 22) | (FUNC_14(VAR_22, VAR_14) & 0x003f0000));
                break;

        case 141:
                if (VAR_21) {
                        FUNC_15(VAR_22, VAR_12,
                                     VAR_13);
                } else {
                        FUNC_13(VAR_22, VAR_12,
                                       VAR_13);
                }
                break;

        case 140:
                FUNC_18(&VAR_22->async.queue_lock, VAR_25);

                FUNC_16(VAR_22, FUNC_0(VAR_3), 0);
  FUNC_11(&VAR_22->async.queue, &VAR_18);

                if (FUNC_10(&VAR_22->async.pcl_queue)) {
                        FUNC_19(&VAR_22->async.queue_lock, VAR_25);
                        FUNC_4(VAR_9, VAR_22->id, "no async packet in PCL to cancel");
                } else {
                        struct ti_pcl VAR_27;
                        u32 VAR_28;

                        FUNC_3(VAR_11, VAR_22->id, "cancelling async packet, that was already in PCL");

                        FUNC_6(VAR_22, VAR_22->async.pcl, &VAR_27);

                        VAR_24 = FUNC_5(VAR_22->async.pcl_queue.next);
   FUNC_9(&VAR_24->driver_list);

                        FUNC_12(VAR_22->dev, VAR_22->async.header_dma,
                                         VAR_24->header_size, VAR_17);
                        if (VAR_24->data_size) {
                                FUNC_12(VAR_22->dev, VAR_22->async.data_dma,
                                                 VAR_24->data_size, VAR_17);
                        }

                        FUNC_19(&VAR_22->async.queue_lock, VAR_25);

                        if (VAR_27.pcl_status & VAR_6) {
                                if (VAR_27.pcl_status & VAR_7) {
                                        VAR_28 = (VAR_27.pcl_status >> 15) & 0xf;
                                        FUNC_4(VAR_11, VAR_22->id, "special ack %d", VAR_28);
                                        VAR_28 = (VAR_28 == 1 ? VAR_2 : VAR_1);
                                } else {
                                        VAR_28 = (VAR_27.pcl_status >> 15) & 0xf;
                                }
                        } else {
                                FUNC_3(VAR_11, VAR_22->id, "async packet was not completed");
                                VAR_28 = VAR_0;
                        }
                        FUNC_8(VAR_19, VAR_24, VAR_28);
                }

  while (!FUNC_10(&VAR_18)) {
   VAR_24 = FUNC_5(VAR_18.next);
   FUNC_9(&VAR_24->driver_list);
   FUNC_8(VAR_19, VAR_24, VAR_0);
  }

                break;
        default:
                FUNC_3(VAR_10, VAR_22->id, "unknown devctl command %d", VAR_20);
                VAR_23 = -1;
        }

        return VAR_23;
}
