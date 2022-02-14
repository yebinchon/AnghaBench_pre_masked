
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


typedef size_t u16 ;
struct ib_sa_path_rec {int dummy; } ;
struct TYPE_9__ {TYPE_2__* mad; } ;
struct ib_mad_recv_wc {TYPE_3__ recv_buf; } ;
struct ib_mad_agent {struct cm_port* context; } ;
struct TYPE_11__ {int event; } ;
struct cm_work {int work; struct cm_port* port; struct ib_mad_recv_wc* mad_recv_wc; TYPE_5__ cm_event; } ;
struct cm_req_msg {int alt_local_lid; } ;
struct cm_port {TYPE_4__* counter_group; } ;
typedef enum ib_cm_event_type { ____Placeholder_ib_cm_event_type } ib_cm_event_type ;
struct TYPE_12__ {int wq; } ;
struct TYPE_10__ {int * counter; } ;
struct TYPE_7__ {int attr_id; } ;
struct TYPE_8__ {TYPE_1__ mad_hdr; } ;



 size_t VAR_0 ;




 size_t VAR_1 ;






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
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (int) ;
 TYPE_6__ VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct ib_mad_recv_wc*) ;
 struct cm_work* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_6(struct ib_mad_agent *VAR_16,
       struct ib_mad_recv_wc *VAR_17)
{
 struct cm_port *VAR_18 = VAR_16->context;
 struct cm_work *VAR_19;
 enum ib_cm_event_type VAR_20;
 u16 VAR_21;
 int VAR_22 = 0;

 switch (VAR_17->recv_buf.mad->mad_hdr.attr_id) {
 case 131:
  VAR_22 = 1 + (((struct cm_req_msg *) VAR_17->recv_buf.mad)->
          alt_local_lid != 0);
  VAR_20 = VAR_10;
  break;
 case 134:
  VAR_20 = VAR_7;
  break;
 case 133:
  VAR_20 = VAR_8;
  break;
 case 132:
  VAR_20 = VAR_9;
  break;
 case 130:
  VAR_20 = VAR_11;
  break;
 case 136:
  VAR_20 = VAR_5;
  break;
 case 137:
  VAR_20 = VAR_4;
  break;
 case 128:
  VAR_20 = VAR_13;
  break;
 case 129:
  VAR_20 = VAR_12;
  break;
 case 135:
  VAR_22 = 1;
  VAR_20 = VAR_6;
  break;
 case 138:
  VAR_20 = VAR_3;
  break;
 default:
  FUNC_3(VAR_17);
  return;
 }

 VAR_21 = FUNC_2(VAR_17->recv_buf.mad->mad_hdr.attr_id);
 FUNC_1(&VAR_18->counter_group[VAR_1].
   counter[VAR_21 - VAR_0]);

 VAR_19 = FUNC_4(sizeof *VAR_19 + sizeof(struct ib_sa_path_rec) * VAR_22,
         VAR_2);
 if (!VAR_19) {
  FUNC_3(VAR_17);
  return;
 }

 FUNC_0(&VAR_19->work, VAR_15);
 VAR_19->cm_event.event = VAR_20;
 VAR_19->mad_recv_wc = VAR_17;
 VAR_19->port = VAR_18;
 FUNC_5(VAR_14.wq, &VAR_19->work, 0);
}
