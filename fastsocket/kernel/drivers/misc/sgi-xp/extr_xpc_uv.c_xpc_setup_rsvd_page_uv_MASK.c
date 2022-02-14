
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


struct TYPE_9__ {void* activate_gru_mq_desc_gpa; void* heartbeat_gpa; } ;
struct TYPE_10__ {TYPE_3__ uv; } ;
struct xpc_rsvd_page {TYPE_4__ sn; } ;
struct TYPE_12__ {int * gru_mq_desc; } ;
struct TYPE_7__ {int cached_heartbeat; } ;
struct TYPE_8__ {TYPE_1__ uv; } ;
struct TYPE_11__ {TYPE_2__ sn; } ;


 size_t VAR_0 ;
 void* FUNC_0 (int *) ;
 TYPE_6__* VAR_1 ;
 int * VAR_2 ;
 TYPE_5__* VAR_3 ;

__attribute__((used)) static int
FUNC_1(struct xpc_rsvd_page *VAR_4)
{
 VAR_2 =
     &VAR_3[VAR_0].sn.uv.cached_heartbeat;
 VAR_4->sn.uv.heartbeat_gpa = FUNC_0(VAR_2);
 VAR_4->sn.uv.activate_gru_mq_desc_gpa =
     FUNC_0(VAR_1->gru_mq_desc);
 return 0;
}
