
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_16__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef unsigned char u16 ;
struct atm_trafprm {int traffic_class; scalar_t__ max_sdu; } ;
struct atm_qos {scalar_t__ aal; struct atm_trafprm rxtp; struct atm_trafprm txtp; } ;
struct atm_vcc {short vpi; int vci; int flags; void* dev_data; struct atm_qos qos; int dev; } ;
typedef int rounding ;
struct TYPE_25__ {void* rate; void* flags; void* vc; } ;
struct TYPE_23__ {void* flags; void* vc; } ;
struct TYPE_27__ {void* rate; void* vc; } ;
struct TYPE_28__ {TYPE_5__ open; TYPE_3__ modify_flags; TYPE_7__ modify_rate; } ;
struct TYPE_29__ {TYPE_8__ args; void* request; } ;
typedef TYPE_9__ command ;
struct TYPE_22__ {unsigned char pool; } ;
struct TYPE_18__ {unsigned char tx_frame_bits; TYPE_2__ rx_info; } ;
typedef TYPE_10__ amb_vcc ;
struct TYPE_19__ {int vcc_sf; struct atm_vcc** rxer; TYPE_4__* txer; TYPE_6__* rxq; } ;
typedef TYPE_11__ amb_dev ;
struct TYPE_26__ {unsigned int buffer_size; scalar_t__ buffers_wanted; } ;
struct TYPE_24__ {int tx_present; unsigned char tx_vc_bits; } ;
struct TYPE_21__ {unsigned char pool; } ;
struct TYPE_20__ {TYPE_1__ rx_info; } ;


 TYPE_11__* FUNC_0 (int ) ;
 TYPE_16__* FUNC_1 (struct atm_vcc*) ;
 scalar_t__ VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 short VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned char VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int ,char*) ;
 unsigned char VAR_19 ;
 unsigned char VAR_20 ;
 unsigned char VAR_21 ;
 unsigned char VAR_22 ;
 unsigned char VAR_23 ;
 unsigned char VAR_24 ;
 unsigned char VAR_25 ;
 unsigned char VAR_26 ;
 unsigned char VAR_27 ;
 unsigned char VAR_28 ;
 void* FUNC_4 (struct atm_trafprm*) ;
 scalar_t__ FUNC_5 (TYPE_11__*,TYPE_9__*) ;
 void* FUNC_6 (unsigned char) ;
 int FUNC_7 (TYPE_11__*,unsigned char,int ) ;
 TYPE_10__* FUNC_8 (int,int ) ;
 int FUNC_9 (int,int ,unsigned char*,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 void* VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 int FUNC_12 () ;
 int FUNC_13 (int ,int *) ;

__attribute__((used)) static int FUNC_14 (struct atm_vcc * VAR_33)
{
  int VAR_34;

  struct atm_qos * VAR_35;
  struct atm_trafprm * VAR_36;
  struct atm_trafprm * VAR_37;
  u16 VAR_38 = -1;
  u16 VAR_39 = -1;
  u16 VAR_40 = -1;

  amb_dev * VAR_41 = FUNC_0(VAR_33->dev);
  amb_vcc * VAR_42;
  unsigned char VAR_43 = -1;
  short VAR_44 = VAR_33->vpi;
  int VAR_45 = VAR_33->vci;

  FUNC_2 (VAR_6|VAR_9, "amb_open %x %x", VAR_44, VAR_45);
  if (!(0 <= VAR_44 && VAR_44 < (1<<VAR_18) &&
 0 <= VAR_45 && VAR_45 < (1<<VAR_17))) {
    FUNC_2 (VAR_10|VAR_9, "VPI/VCI out of range: %hd/%d", VAR_44, VAR_45);
    return -VAR_11;
  }

  VAR_35 = &VAR_33->qos;

  if (VAR_35->aal != VAR_0) {
    FUNC_2 (VAR_8, "AAL not supported");
    return -VAR_11;
  }



  FUNC_2 (VAR_8, "TX:");
  VAR_36 = &VAR_35->txtp;
  if (VAR_36->traffic_class != VAR_1) {
    switch (VAR_36->traffic_class) {
      case 128: {

 int VAR_46 = FUNC_4 (VAR_36);
 if (!VAR_46) {

   VAR_38 = 0;
   VAR_39 = VAR_27;
   VAR_40 = VAR_26;
 } else {
   rounding VAR_47;
   if (VAR_46 < 0) {
     VAR_47 = VAR_30;
     VAR_46 = -VAR_46;
   } else {
     VAR_47 = VAR_31;
   }
   VAR_34 = FUNC_9 (VAR_46, VAR_47, &VAR_38, ((void*)0));
   if (VAR_34)
     return VAR_34;
   VAR_39 = VAR_28;
   VAR_40 = VAR_25;
 }
 break;
      }







      default: {

 FUNC_2 (VAR_8, "request for non-UBR denied");
 return -VAR_11;
      }
    }
    FUNC_2 (VAR_8, "tx_rate_bits=%hx, tx_vc_bits=%hx",
     VAR_38, VAR_39);
  }

  FUNC_2 (VAR_8, "RX:");
  VAR_37 = &VAR_35->rxtp;
  if (VAR_37->traffic_class == VAR_1) {

  } else {

    for (VAR_43 = 0; VAR_43 < VAR_16; ++VAR_43)
      if ((unsigned int) VAR_37->max_sdu <= VAR_41->rxq[VAR_43].buffer_size) {
 FUNC_2 (VAR_9|VAR_8|VAR_7, "chose pool %hu (max_sdu %u <= %u)",
  VAR_43, VAR_37->max_sdu, VAR_41->rxq[VAR_43].buffer_size);
 break;
      }
    if (VAR_43 == VAR_16) {
      FUNC_2 (VAR_10|VAR_9|VAR_8|VAR_7,
       "no pool suitable for VC (RX max_sdu %d is too large)",
       VAR_37->max_sdu);
      return -VAR_11;
    }

    switch (VAR_37->traffic_class) {
      case 128: {
 break;
      }







      default: {

 FUNC_2 (VAR_8, "request for non-UBR denied");
 return -VAR_11;
      }
    }
  }


  VAR_42 = FUNC_8 (sizeof(amb_vcc), VAR_13);
  if (!VAR_42) {
    FUNC_3 (VAR_14, "out of memory!");
    return -VAR_12;
  }
  VAR_33->dev_data = (void *) VAR_42;





  FUNC_13(VAR_3,&VAR_33->flags);

  if (VAR_36->traffic_class != VAR_1) {
    command VAR_48;

    VAR_42->tx_frame_bits = VAR_40;

    FUNC_10(&VAR_41->vcc_sf);
    if (VAR_41->rxer[VAR_45]) {

      VAR_48.request = FUNC_6 (VAR_21);
      VAR_48.args.modify_rate.vc = FUNC_6 (VAR_45);
      VAR_48.args.modify_rate.rate = FUNC_6 (VAR_38 << VAR_24);
      while (FUNC_5 (VAR_41, &VAR_48))
 FUNC_12();

      VAR_48.request = FUNC_6 (VAR_20);
      VAR_48.args.modify_flags.vc = FUNC_6 (VAR_45);
      VAR_48.args.modify_flags.flags = FUNC_6
 ( (FUNC_1(VAR_41->rxer[VAR_45])->rx_info.pool << VAR_23)
   | (VAR_39 << VAR_19) );
      while (FUNC_5 (VAR_41, &VAR_48))
 FUNC_12();
    } else {

      VAR_48.request = FUNC_6 (VAR_22);
      VAR_48.args.open.vc = FUNC_6 (VAR_45);
      VAR_48.args.open.flags = FUNC_6 (VAR_39 << VAR_19);
      VAR_48.args.open.rate = FUNC_6 (VAR_38 << VAR_24);
      while (FUNC_5 (VAR_41, &VAR_48))
 FUNC_12();
    }
    VAR_41->txer[VAR_45].tx_present = 1;
    FUNC_11(&VAR_41->vcc_sf);
  }

  if (VAR_37->traffic_class != VAR_1) {
    command VAR_49;

    VAR_42->rx_info.pool = VAR_43;

    FUNC_10(&VAR_41->vcc_sf);

    if (!VAR_41->rxq[VAR_43].buffers_wanted)
      VAR_41->rxq[VAR_43].buffers_wanted = VAR_32;
    VAR_41->rxq[VAR_43].buffers_wanted += 1;
    FUNC_7 (VAR_41, VAR_43, VAR_13);

    if (VAR_41->txer[VAR_45].tx_present) {


      VAR_49.request = FUNC_6 (VAR_20);
      VAR_49.args.modify_flags.vc = FUNC_6 (VAR_45);
      VAR_49.args.modify_flags.flags = FUNC_6
 ( (VAR_43 << VAR_23)
   | (VAR_41->txer[VAR_45].tx_vc_bits << VAR_19) );
    } else {

      VAR_49.request = FUNC_6 (VAR_22);
      VAR_49.args.open.vc = FUNC_6 (VAR_45);
      VAR_49.args.open.flags = FUNC_6 (VAR_43 << VAR_23);
      VAR_49.args.open.rate = FUNC_6 (0);
    }
    while (FUNC_5 (VAR_41, &VAR_49))
      FUNC_12();

    VAR_41->rxer[VAR_45] = VAR_33;
    FUNC_11(&VAR_41->vcc_sf);
  }


  FUNC_13(VAR_4,&VAR_33->flags);

  return 0;
}
