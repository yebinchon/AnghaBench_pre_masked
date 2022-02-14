
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct qib_ibport {int * guids; int gid_prefix; } ;
struct TYPE_4__ {int interface_id; int subnet_prefix; } ;
struct TYPE_5__ {TYPE_1__ global; } ;
struct ib_grh {int dgid; TYPE_2__ sgid; int hop_limit; int next_hdr; int paylen; int version_tclass_flow; } ;
struct ib_global_route {int traffic_class; int flow_label; int sgid_index; int dgid; int hop_limit; } ;
struct TYPE_6__ {int guid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (struct qib_ibport*) ;

u32 FUNC_3(struct qib_ibport *VAR_6, struct ib_grh *VAR_7,
   struct ib_global_route *VAR_8, u32 VAR_9, u32 VAR_10)
{
 VAR_7->version_tclass_flow =
  FUNC_1((VAR_3 << VAR_4) |
       (VAR_8->traffic_class << VAR_2) |
       (VAR_8->flow_label << VAR_0));
 VAR_7->paylen = FUNC_0((VAR_9 - 2 + VAR_10 + VAR_5) << 2);

 VAR_7->next_hdr = VAR_1;
 VAR_7->hop_limit = VAR_8->hop_limit;

 VAR_7->sgid.global.subnet_prefix = VAR_6->gid_prefix;
 VAR_7->sgid.global.interface_id = VAR_8->sgid_index ?
  VAR_6->guids[VAR_8->sgid_index - 1] : FUNC_2(VAR_6)->guid;
 VAR_7->dgid = VAR_8->dgid;


 return sizeof(struct ib_grh) / sizeof(u32);
}
