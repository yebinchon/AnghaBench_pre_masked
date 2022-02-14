
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ucma_multicast {int id; int uid; } ;
struct TYPE_6__ {int id; int uid; } ;
struct ucma_event {TYPE_3__ resp; struct ucma_multicast* mc; struct ucma_context* ctx; } ;
struct ucma_context {int id; int uid; } ;
struct TYPE_4__ {scalar_t__ private_data; } ;
struct TYPE_5__ {TYPE_1__ ud; } ;
struct rdma_cm_event {int event; TYPE_2__ param; } ;





__attribute__((used)) static void FUNC_0(struct ucma_context *VAR_0,
       struct rdma_cm_event *VAR_1,
       struct ucma_event *VAR_2)
{
 VAR_2->ctx = VAR_0;
 switch (VAR_1->event) {
 case 128:
 case 129:
  VAR_2->mc = (struct ucma_multicast *)
        VAR_1->param.ud.private_data;
  VAR_2->resp.uid = VAR_2->mc->uid;
  VAR_2->resp.id = VAR_2->mc->id;
  break;
 default:
  VAR_2->resp.uid = VAR_0->uid;
  VAR_2->resp.id = VAR_0->id;
  break;
 }
}
