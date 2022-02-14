
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint16_t ;
struct qla_hw_data {TYPE_1__* isp_ops; } ;
struct TYPE_20__ {struct qla_hw_data* hw; } ;
typedef TYPE_4__ scsi_qla_host_t ;
struct TYPE_18__ {int al_pa; int area; int domain; } ;
struct TYPE_19__ {TYPE_2__ b; } ;
struct TYPE_21__ {int loop_id; scalar_t__ login_retry; TYPE_3__ d_id; int supported_classes; int flags; int port_type; } ;
typedef TYPE_5__ fc_port_t ;
struct TYPE_17__ {int (* fabric_login ) (TYPE_4__*,int,int ,int ,int ,int*,int) ;int (* fabric_logout ) (TYPE_4__*,int,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,TYPE_4__*,int,char*,int,int ,int ,int ,...) ;
 int VAR_14 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_5__*,int,int ) ;
 int FUNC_4 (TYPE_4__*,int,int ,int ,int ,int*,int) ;
 int FUNC_5 (TYPE_4__*,int,int ,int ,int ) ;
 int FUNC_6 (TYPE_4__*,int,int ,int ,int ) ;

int
FUNC_7(scsi_qla_host_t *VAR_15, fc_port_t *VAR_16,
    uint16_t *VAR_17)
{
 int VAR_18;
 int VAR_19;
 uint16_t VAR_20;
 uint16_t VAR_21[VAR_7];
 struct qla_hw_data *VAR_22 = VAR_15->hw;

 VAR_19 = 0;
 VAR_20 = 0;

 for (;;) {
  FUNC_0(VAR_14, VAR_15, 0x2000,
      "Trying Fabric Login w/loop id 0x%04x for port "
      "%02x%02x%02x.\n",
      VAR_16->loop_id, VAR_16->d_id.b.domain,
      VAR_16->d_id.b.area, VAR_16->d_id.b.al_pa);


  VAR_18 = VAR_22->isp_ops->fabric_login(VAR_15, VAR_16->loop_id,
      VAR_16->d_id.b.domain, VAR_16->d_id.b.area,
      VAR_16->d_id.b.al_pa, VAR_21, VAR_0);
  if (VAR_18 != VAR_12) {
   return VAR_18;
  }
  if (VAR_21[0] == VAR_11) {







   VAR_19++;
   VAR_20 = VAR_16->loop_id;
   VAR_16->loop_id = VAR_21[1];

   FUNC_0(VAR_14, VAR_15, 0x2001,
       "Fabric Login: port in use - next loop "
       "id=0x%04x, port id= %02x%02x%02x.\n",
       VAR_16->loop_id, VAR_16->d_id.b.domain,
       VAR_16->d_id.b.area, VAR_16->d_id.b.al_pa);

  } else if (VAR_21[0] == VAR_8) {



   if (VAR_19) {

    *VAR_17 = VAR_20;
   } else {




    *VAR_17 = (VAR_16->loop_id + 1);
   }

   if (VAR_21[1] & VAR_0) {
    VAR_16->port_type = VAR_3;
   } else {
    VAR_16->port_type = VAR_4;
    if (VAR_21[1] & VAR_1) {
     VAR_16->flags |= VAR_2;
    }
   }

   if (VAR_21[10] & VAR_0)
    VAR_16->supported_classes |= VAR_5;
   if (VAR_21[10] & VAR_1)
    VAR_16->supported_classes |= VAR_6;

   VAR_18 = VAR_12;
   break;
  } else if (VAR_21[0] == VAR_10) {



   VAR_16->loop_id++;
   VAR_18 = FUNC_2(VAR_15, VAR_16);
   if (VAR_18 != VAR_12) {

    break;
   }
  } else if (VAR_21[0] == VAR_9) {





   *VAR_17 = VAR_16->loop_id;
   VAR_22->isp_ops->fabric_logout(VAR_15, VAR_16->loop_id,
       VAR_16->d_id.b.domain, VAR_16->d_id.b.area,
       VAR_16->d_id.b.al_pa);
   FUNC_3(VAR_15, VAR_16, 1, 0);

   VAR_18 = 1;
   break;
  } else {



   FUNC_0(VAR_14, VAR_15, 0x2002,
       "Failed=%x port_id=%02x%02x%02x loop_id=%x "
       "jiffies=%lx.\n", VAR_21[0], VAR_16->d_id.b.domain,
       VAR_16->d_id.b.area, VAR_16->d_id.b.al_pa,
       VAR_16->loop_id, VAR_13);

   *VAR_17 = VAR_16->loop_id;
   VAR_22->isp_ops->fabric_logout(VAR_15, VAR_16->loop_id,
       VAR_16->d_id.b.domain, VAR_16->d_id.b.area,
       VAR_16->d_id.b.al_pa);
   FUNC_1(VAR_16);
   VAR_16->login_retry = 0;

   VAR_18 = 3;
   break;
  }
 }

 return (VAR_18);
}
