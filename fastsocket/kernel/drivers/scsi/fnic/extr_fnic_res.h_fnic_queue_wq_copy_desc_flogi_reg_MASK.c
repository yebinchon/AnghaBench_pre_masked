
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct vnic_wq_copy {int dummy; } ;
struct TYPE_9__ {int gateway_mac; int s_id; scalar_t__ _resvd; int format; } ;
struct TYPE_10__ {TYPE_4__ flogi_reg; } ;
struct TYPE_6__ {int req_id; } ;
struct TYPE_7__ {TYPE_1__ u; } ;
struct TYPE_8__ {TYPE_2__ tag; scalar_t__ _resvd; scalar_t__ status; int type; } ;
struct fcpio_host_req {TYPE_5__ u; TYPE_3__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *,int ) ;
 struct fcpio_host_req* FUNC_2 (struct vnic_wq_copy*) ;
 int FUNC_3 (struct vnic_wq_copy*) ;

__attribute__((used)) static inline void FUNC_4(struct vnic_wq_copy *VAR_2,
           u32 VAR_3, u8 VAR_4,
           u32 VAR_5, u8 *VAR_6)
{
 struct fcpio_host_req *VAR_7 = FUNC_2(VAR_2);

 VAR_7->hdr.type = VAR_1;
 VAR_7->hdr.status = 0;
 VAR_7->hdr._resvd = 0;
 VAR_7->hdr.tag.u.req_id = VAR_3;

 VAR_7->u.flogi_reg.format = VAR_4;
 VAR_7->u.flogi_reg._resvd = 0;
 FUNC_0(VAR_7->u.flogi_reg.s_id, VAR_5);
 FUNC_1(VAR_7->u.flogi_reg.gateway_mac, VAR_6, VAR_0);

 FUNC_3(VAR_2);
}
