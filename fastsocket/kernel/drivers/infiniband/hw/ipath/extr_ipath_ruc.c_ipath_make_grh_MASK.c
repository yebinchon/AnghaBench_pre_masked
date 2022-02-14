
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ipath_ibdev {TYPE_3__* dd; int gid_prefix; } ;
struct TYPE_4__ {int interface_id; int subnet_prefix; } ;
struct TYPE_5__ {TYPE_1__ global; } ;
struct ib_grh {int next_hdr; int dgid; TYPE_2__ sgid; int hop_limit; int paylen; int version_tclass_flow; } ;
struct ib_global_route {int traffic_class; int flow_label; int dgid; int hop_limit; } ;
struct TYPE_6__ {int ipath_guid; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

u32 FUNC_2(struct ipath_ibdev *VAR_1, struct ib_grh *VAR_2,
     struct ib_global_route *VAR_3, u32 VAR_4, u32 VAR_5)
{
 VAR_2->version_tclass_flow =
  FUNC_1((6 << 28) |
       (VAR_3->traffic_class << 20) |
       VAR_3->flow_label);
 VAR_2->paylen = FUNC_0((VAR_4 - 2 + VAR_5 + VAR_0) << 2);

 VAR_2->next_hdr = 0x1B;
 VAR_2->hop_limit = VAR_3->hop_limit;

 VAR_2->sgid.global.subnet_prefix = VAR_1->gid_prefix;
 VAR_2->sgid.global.interface_id = VAR_1->dd->ipath_guid;
 VAR_2->dgid = VAR_3->dgid;


 return sizeof(struct ib_grh) / sizeof(u32);
}
