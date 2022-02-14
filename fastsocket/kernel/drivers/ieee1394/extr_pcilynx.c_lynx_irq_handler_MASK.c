
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct ti_pcl {int pcl_status; } ;
struct TYPE_8__ {int next; } ;
struct TYPE_7__ {int queue_lock; TYPE_4__ queue; int data_dma; int header_dma; TYPE_4__ pcl_queue; int pcl; } ;
struct TYPE_6__ {int queue_lock; TYPE_4__ queue; int data_dma; int header_dma; TYPE_4__ pcl_queue; int pcl; } ;
struct TYPE_5__ {size_t next; int last; int tq; int lock; int pcl_start; int chan_count; int used; void** stat; } ;
struct ti_lynx {int selfid_size; int phy_reg0; int* rcv_page; int rcv_pcl_start; int id; TYPE_3__ iso_send; int dev; TYPE_2__ async; TYPE_1__ iso_rcv; int phy_reg_lock; struct hpsb_host* host; } ;
struct hpsb_packet {scalar_t__ data_size; scalar_t__ header_size; int driver_list; } ;
struct hpsb_host {scalar_t__ in_bus_reset; } ;
typedef int quadlet_t ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_2 (int ) ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_3 (int ,int ,char*,...) ;
 int FUNC_4 (int ,int ,char*,...) ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_5 (int*) ;
 struct hpsb_packet* FUNC_6 (int ) ;
 int FUNC_7 (struct ti_lynx*,int ,struct ti_pcl*) ;
 int FUNC_8 (struct ti_lynx*,struct hpsb_host*) ;
 int VAR_36 ;
 int FUNC_9 (struct hpsb_host*) ;
 int VAR_37 ;
 int FUNC_10 (struct hpsb_host*,int*,int,int ) ;
 int FUNC_11 (struct hpsb_host*,struct hpsb_packet*,int) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (int ,int ,scalar_t__,int ) ;
 void* FUNC_15 (struct ti_lynx*,int ) ;
 int FUNC_16 (struct ti_lynx*,int ,int) ;
 int FUNC_17 (struct ti_lynx*,int ,int ) ;
 int FUNC_18 (struct ti_lynx*,int ,int,int ) ;
 int FUNC_19 (struct ti_lynx*,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_23(int VAR_38, void *VAR_39)
{
        struct ti_lynx *VAR_40 = (struct ti_lynx *)VAR_39;
        struct hpsb_host *VAR_41 = VAR_40->host;
        u32 VAR_42;
        u32 VAR_43;

        VAR_43 = FUNC_15(VAR_40, VAR_26);
        VAR_42 = FUNC_15(VAR_40, VAR_33);

        if (!(VAR_42 & VAR_32))
  return VAR_12;

        FUNC_4(VAR_13, VAR_40->id, "interrupt: 0x%08x / 0x%08x", VAR_42,
               VAR_43);

        FUNC_16(VAR_40, VAR_26, VAR_43);
        FUNC_16(VAR_40, VAR_33, VAR_42);

        if (VAR_42 & VAR_31) {
                if (VAR_43 & VAR_24) {
                        FUNC_3(VAR_15, VAR_40->id, "PHY timeout occurred");
                }
                if (VAR_43 & VAR_22) {
                        FUNC_3(VAR_15, VAR_40->id, "bus reset interrupt");
                        VAR_40->selfid_size = -1;
                        VAR_40->phy_reg0 = -1;
                        if (!VAR_41->in_bus_reset)
                                FUNC_9(VAR_41);
                }
                if (VAR_43 & VAR_23) {
                        u32 VAR_44;

                        FUNC_20(&VAR_40->phy_reg_lock);
                        VAR_44 = FUNC_15(VAR_40, VAR_28);
                        FUNC_21(&VAR_40->phy_reg_lock);

                        if (!VAR_41->in_bus_reset) {
                                FUNC_3(VAR_15, VAR_40->id,
                                      "phy reg received without reset");
                        } else if (VAR_44 & 0xf00) {
                                FUNC_3(VAR_15, VAR_40->id,
                                      "unsolicited phy reg %d received",
                                      (VAR_44 >> 8) & 0xf);
                        } else {
                                VAR_40->phy_reg0 = VAR_44 & 0xff;
                                FUNC_8(VAR_40, VAR_41);
                        }
                }
                if (VAR_43 & VAR_20) {
                        FUNC_3(VAR_15, VAR_40->id, "isochronous transmitter stuck");
                }
                if (VAR_43 & VAR_17) {
                        FUNC_3(VAR_15, VAR_40->id, "asynchronous transmitter stuck");
                }
                if (VAR_43 & VAR_25) {
                        FUNC_3(VAR_15, VAR_40->id, "sent reject");
                }
                if (VAR_43 & VAR_27) {
                        FUNC_3(VAR_15, VAR_40->id, "invalid transaction code");
                }
                if (VAR_43 & VAR_19) {

                        if (VAR_41->in_bus_reset)
                                FUNC_16(VAR_40, VAR_9,
                                          VAR_10);
                        FUNC_3(VAR_15, VAR_40->id, "GRF overflow");
                }
                if (VAR_43 & VAR_21) {
                        FUNC_3(VAR_15, VAR_40->id, "ITF underflow");
                }
                if (VAR_43 & VAR_18) {
                        FUNC_3(VAR_15, VAR_40->id, "ATF underflow");
                }
        }

        if (VAR_42 & FUNC_2(VAR_4)) {
                FUNC_4(VAR_13, VAR_40->id, "iso receive");

                FUNC_20(&VAR_40->iso_rcv.lock);

                VAR_40->iso_rcv.stat[VAR_40->iso_rcv.next] =
                        FUNC_15(VAR_40, FUNC_0(VAR_4));

                VAR_40->iso_rcv.used++;
                VAR_40->iso_rcv.next = (VAR_40->iso_rcv.next + 1) % VAR_29;

                if ((VAR_40->iso_rcv.next == VAR_40->iso_rcv.last)
                    || !VAR_40->iso_rcv.chan_count) {
                        FUNC_4(VAR_13, VAR_40->id, "stopped");
                        FUNC_16(VAR_40, FUNC_1(VAR_4), 0);
                }

                FUNC_18(VAR_40, VAR_40->iso_rcv.pcl_start, VAR_40->iso_rcv.next,
                            VAR_4);

                FUNC_21(&VAR_40->iso_rcv.lock);

  FUNC_22(&VAR_40->iso_rcv.tq);
        }

        if (VAR_42 & FUNC_2(VAR_3)) {
                FUNC_4(VAR_13, VAR_40->id, "async sent");
                FUNC_20(&VAR_40->async.queue_lock);

                if (FUNC_13(&VAR_40->async.pcl_queue)) {
                        FUNC_21(&VAR_40->async.queue_lock);
                        FUNC_3(VAR_16, VAR_40->id, "async dma halted, but no queued packet (maybe it was cancelled)");
                } else {
                        struct ti_pcl VAR_45;
                        u32 VAR_46;
                        struct hpsb_packet *VAR_47;

                        FUNC_7(VAR_40, VAR_40->async.pcl, &VAR_45);

                        VAR_47 = FUNC_6(VAR_40->async.pcl_queue.next);
                        FUNC_12(&VAR_47->driver_list);

                        FUNC_14(VAR_40->dev, VAR_40->async.header_dma,
                                         VAR_47->header_size, VAR_30);
                        if (VAR_47->data_size) {
                                FUNC_14(VAR_40->dev, VAR_40->async.data_dma,
                                                 VAR_47->data_size, VAR_30);
                        }

                        if (!FUNC_13(&VAR_40->async.queue)) {
                                FUNC_19(VAR_40, VAR_36);
                        }

                        FUNC_21(&VAR_40->async.queue_lock);

                        if (VAR_45.pcl_status & VAR_6) {
                                if (VAR_45.pcl_status & VAR_8) {
                                        VAR_46 = (VAR_45.pcl_status >> 15) & 0xf;
                                        FUNC_4(VAR_15, VAR_40->id, "special ack %d", VAR_46);
                                        VAR_46 = (VAR_46 == 1 ? VAR_1 : VAR_0);
                                } else {
                                        VAR_46 = (VAR_45.pcl_status >> 15) & 0xf;
                                }
                        } else {
                                FUNC_3(VAR_15, VAR_40->id, "async packet was not completed");
                                VAR_46 = VAR_0;
                        }
                        FUNC_11(VAR_41, VAR_47, VAR_46);
                }
        }

        if (VAR_42 & FUNC_2(VAR_5)) {
                FUNC_4(VAR_13, VAR_40->id, "iso sent");
                FUNC_20(&VAR_40->iso_send.queue_lock);

                if (FUNC_13(&VAR_40->iso_send.pcl_queue)) {
                        FUNC_21(&VAR_40->iso_send.queue_lock);
                        FUNC_3(VAR_14, VAR_40->id, "iso send dma halted, but no queued packet");
                } else {
                        struct ti_pcl VAR_48;
                        u32 VAR_49;
                        struct hpsb_packet *VAR_50;

                        FUNC_7(VAR_40, VAR_40->iso_send.pcl, &VAR_48);

                        VAR_50 = FUNC_6(VAR_40->iso_send.pcl_queue.next);
                        FUNC_12(&VAR_50->driver_list);

                        FUNC_14(VAR_40->dev, VAR_40->iso_send.header_dma,
                                         VAR_50->header_size, VAR_30);
                        if (VAR_50->data_size) {
                                FUNC_14(VAR_40->dev, VAR_40->iso_send.data_dma,
                                                 VAR_50->data_size, VAR_30);
                        }





                        FUNC_21(&VAR_40->iso_send.queue_lock);

                        if (VAR_48.pcl_status & VAR_6) {
                                if (VAR_48.pcl_status & VAR_8) {
                                        VAR_49 = (VAR_48.pcl_status >> 15) & 0xf;
                                        FUNC_4(VAR_15, VAR_40->id, "special ack %d", VAR_49);
                                        VAR_49 = (VAR_49 == 1 ? VAR_1 : VAR_0);
                                } else {
                                        VAR_49 = (VAR_48.pcl_status >> 15) & 0xf;
                                }
                        } else {
                                FUNC_3(VAR_15, VAR_40->id, "iso send packet was not completed");
                                VAR_49 = VAR_0;
                        }

                        FUNC_11(VAR_41, VAR_50, VAR_49);
                }
        }

        if (VAR_42 & FUNC_2(VAR_2)) {

                int VAR_51 = FUNC_15(VAR_40, FUNC_0(VAR_2));

                FUNC_4(VAR_13, VAR_40->id, "received packet size %d",
                       VAR_51 & 0x1fff);

                if (VAR_51 & VAR_7) {
                        VAR_40->selfid_size = VAR_51 & 0x1fff;
                        FUNC_8(VAR_40, VAR_41);
                } else {
                        quadlet_t *VAR_52 = VAR_40->rcv_page;
                        if ((*VAR_52 >> 4 & 0xf) == VAR_34
                            || (*VAR_52 >> 4 & 0xf) == VAR_35) {
                                FUNC_5(VAR_52 + 3);
                        }
                        FUNC_10(VAR_41, VAR_52, VAR_51 & 0x1fff, 0);
                }

                FUNC_17(VAR_40, VAR_40->rcv_pcl_start, VAR_2);
        }

 return VAR_11;
}
