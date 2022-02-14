
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ib_mad_agent {int mr; scalar_t__ hi_tid; scalar_t__ port_num; TYPE_1__* qp; void* context; scalar_t__ send_handler; scalar_t__ recv_handler; struct ib_device* device; scalar_t__ rmpp_version; } ;
struct ib_mad_reg_req {size_t mgmt_class_version; scalar_t__ mgmt_class; struct ib_mad_agent agent; int agent_list; int comp; int refcount; int local_work; int local_list; int timed_work; int rmpp_list; int done_list; int wait_list; int send_list; int lock; struct ib_mad_reg_req* reg_req; TYPE_2__* qp_info; int oui; } ;
struct ib_mad_port_private {int reg_lock; int agent_list; TYPE_3__* version; TYPE_2__* qp_info; } ;
struct ib_mad_mgmt_vendor_class_table {struct ib_mad_mgmt_vendor_class** vendor_class; } ;
struct ib_mad_mgmt_vendor_class {int dummy; } ;
struct ib_mad_mgmt_method_table {int dummy; } ;
struct ib_mad_mgmt_class_table {struct ib_mad_mgmt_method_table** method_table; } ;
struct ib_mad_agent_private {size_t mgmt_class_version; scalar_t__ mgmt_class; struct ib_mad_agent agent; int agent_list; int comp; int refcount; int local_work; int local_list; int timed_work; int rmpp_list; int done_list; int wait_list; int send_list; int lock; struct ib_mad_agent_private* reg_req; TYPE_2__* qp_info; int oui; } ;
struct ib_device {int dummy; } ;
typedef scalar_t__ ib_mad_send_handler ;
typedef scalar_t__ ib_mad_recv_handler ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;
struct TYPE_6__ {struct ib_mad_mgmt_vendor_class_table* vendor; struct ib_mad_mgmt_class_table* class; } ;
struct TYPE_5__ {TYPE_1__* qp; } ;
struct TYPE_4__ {int pd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ib_mad_agent* FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_10 ;
 size_t VAR_11 ;
 int FUNC_5 (struct ib_mad_reg_req*,struct ib_mad_reg_req*,scalar_t__) ;
 int FUNC_6 (struct ib_mad_reg_req*,struct ib_mad_reg_req*) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 struct ib_mad_port_private* FUNC_12 (struct ib_device*,scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ VAR_12 ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (struct ib_mad_mgmt_vendor_class*,struct ib_mad_reg_req*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct ib_mad_reg_req*) ;
 struct ib_mad_reg_req* FUNC_19 (struct ib_mad_reg_req*,int,int ) ;
 struct ib_mad_reg_req* FUNC_20 (int,int ) ;
 int FUNC_21 (int *,int *) ;
 int VAR_13 ;
 scalar_t__ FUNC_22 (struct ib_mad_mgmt_method_table**,struct ib_mad_reg_req*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *,unsigned long) ;
 int FUNC_25 (int *,unsigned long) ;
 int VAR_14 ;
 scalar_t__ FUNC_26 (scalar_t__) ;

struct ib_mad_agent *FUNC_27(struct ib_device *VAR_15,
        u8 VAR_16,
        enum ib_qp_type VAR_17,
        struct ib_mad_reg_req *VAR_18,
        u8 VAR_19,
        ib_mad_send_handler VAR_20,
        ib_mad_recv_handler VAR_21,
        void *VAR_22)
{
 struct ib_mad_port_private *VAR_23;
 struct ib_mad_agent *VAR_24 = FUNC_0(-VAR_0);
 struct ib_mad_agent_private *VAR_25;
 struct ib_mad_reg_req *VAR_26 = ((void*)0);
 struct ib_mad_mgmt_class_table *VAR_27;
 struct ib_mad_mgmt_vendor_class_table *VAR_28;
 struct ib_mad_mgmt_vendor_class *VAR_29;
 struct ib_mad_mgmt_method_table *VAR_30;
 int VAR_31, VAR_32;
 unsigned long VAR_33;
 u8 VAR_34, VAR_35;


 VAR_32 = FUNC_9(VAR_17);
 if (VAR_32 == -1)
  goto error1;

 if (VAR_19 && VAR_19 != VAR_8)
  goto error1;


 if (VAR_18) {
  if (VAR_18->mgmt_class_version >= VAR_11)
   goto error1;
  if (!VAR_21)
   goto error1;
  if (VAR_18->mgmt_class >= VAR_10) {




   if (VAR_18->mgmt_class !=
       VAR_6)
    goto error1;
  } else if (VAR_18->mgmt_class == 0) {




   goto error1;
  } else if (FUNC_15(VAR_18->mgmt_class)) {




   if (!FUNC_17(VAR_18->oui))
    goto error1;
  }

  if (!FUNC_13(VAR_18->mgmt_class)) {
   if (VAR_19)
    goto error1;
  }

  if (VAR_17 == VAR_9) {
   if ((VAR_18->mgmt_class !=
     VAR_7) &&
       (VAR_18->mgmt_class !=
     VAR_6))
    goto error1;
  } else {
   if ((VAR_18->mgmt_class ==
     VAR_7) ||
       (VAR_18->mgmt_class ==
     VAR_6))
    goto error1;
  }
 } else {

  if (!VAR_20)
   goto error1;
 }


 VAR_23 = FUNC_12(VAR_15, VAR_16);
 if (!VAR_23) {
  VAR_24 = FUNC_0(-VAR_1);
  goto error1;
 }



 if (!VAR_23->qp_info[VAR_32].qp) {
  VAR_24 = FUNC_0(-VAR_3);
  goto error1;
 }


 VAR_25 = FUNC_20(sizeof *VAR_25, VAR_4);
 if (!VAR_25) {
  VAR_24 = FUNC_0(-VAR_2);
  goto error1;
 }

 VAR_25->agent.mr = FUNC_11(VAR_23->qp_info[VAR_32].qp->pd,
       VAR_5);
 if (FUNC_4(VAR_25->agent.mr)) {
  VAR_24 = FUNC_0(-VAR_2);
  goto error2;
 }

 if (VAR_18) {
  VAR_26 = FUNC_19(VAR_18, sizeof *VAR_26, VAR_4);
  if (!VAR_26) {
   VAR_24 = FUNC_0(-VAR_2);
   goto error3;
  }
 }


 VAR_25->qp_info = &VAR_23->qp_info[VAR_32];
 VAR_25->reg_req = VAR_26;
 VAR_25->agent.rmpp_version = VAR_19;
 VAR_25->agent.device = VAR_15;
 VAR_25->agent.recv_handler = VAR_21;
 VAR_25->agent.send_handler = VAR_20;
 VAR_25->agent.context = VAR_22;
 VAR_25->agent.qp = VAR_23->qp_info[VAR_32].qp;
 VAR_25->agent.port_num = VAR_16;
 FUNC_23(&VAR_25->lock);
 FUNC_2(&VAR_25->send_list);
 FUNC_2(&VAR_25->wait_list);
 FUNC_2(&VAR_25->done_list);
 FUNC_2(&VAR_25->rmpp_list);
 FUNC_1(&VAR_25->timed_work, VAR_14);
 FUNC_2(&VAR_25->local_list);
 FUNC_3(&VAR_25->local_work, VAR_13);
 FUNC_7(&VAR_25->refcount, 1);
 FUNC_14(&VAR_25->comp);

 FUNC_24(&VAR_23->reg_lock, VAR_33);
 VAR_25->agent.hi_tid = ++VAR_12;





 if (VAR_18) {
  VAR_34 = FUNC_8(VAR_18->mgmt_class);
  if (!FUNC_15(VAR_34)) {
   VAR_27 = VAR_23->version[VAR_18->
         mgmt_class_version].class;
   if (VAR_27) {
    VAR_30 = VAR_27->method_table[VAR_34];
    if (VAR_30) {
     if (FUNC_22(&VAR_30,
          VAR_18))
      goto error4;
    }
   }
   VAR_31 = FUNC_5(VAR_18, VAR_25,
        VAR_34);
  } else {

   VAR_28 = VAR_23->version[VAR_18->
          mgmt_class_version].vendor;
   if (VAR_28) {
    VAR_35 = FUNC_26(VAR_34);
    VAR_29 = VAR_28->vendor_class[VAR_35];
    if (VAR_29) {
     if (FUNC_16(
       VAR_29,
       VAR_18))
      goto error4;
    }
   }
   VAR_31 = FUNC_6(VAR_18, VAR_25);
  }
  if (VAR_31) {
   VAR_24 = FUNC_0(VAR_31);
   goto error4;
  }
 }


 FUNC_21(&VAR_25->agent_list, &VAR_23->agent_list);
 FUNC_25(&VAR_23->reg_lock, VAR_33);

 return &VAR_25->agent;

error4:
 FUNC_25(&VAR_23->reg_lock, VAR_33);
 FUNC_18(VAR_26);
error3:
 FUNC_10(VAR_25->agent.mr);
error2:
 FUNC_18(VAR_25);
error1:
 return VAR_24;
}
