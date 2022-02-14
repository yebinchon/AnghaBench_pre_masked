
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct vnic_wq_copy {int dummy; } ;
struct TYPE_8__ {void* len; int addr; } ;
struct TYPE_9__ {TYPE_3__ lunmap_req; } ;
struct TYPE_6__ {void* req_id; } ;
struct TYPE_7__ {TYPE_1__ u; } ;
struct TYPE_10__ {TYPE_2__ tag; scalar_t__ _resvd; scalar_t__ status; int type; } ;
struct fcpio_host_req {TYPE_4__ u; TYPE_5__ hdr; } ;


 int VAR_0 ;
 struct fcpio_host_req* FUNC_0 (struct vnic_wq_copy*) ;
 int FUNC_1 (struct vnic_wq_copy*) ;

__attribute__((used)) static inline void FUNC_2(struct vnic_wq_copy *VAR_1,
        u32 VAR_2, u64 VAR_3,
        u32 VAR_4)
{
 struct fcpio_host_req *VAR_5 = FUNC_0(VAR_1);

 VAR_5->hdr.type = VAR_0;
 VAR_5->hdr.status = 0;
 VAR_5->hdr._resvd = 0;
 VAR_5->hdr.tag.u.req_id = VAR_2;

 VAR_5->u.lunmap_req.addr = VAR_3;
 VAR_5->u.lunmap_req.len = VAR_4;

 FUNC_1(VAR_1);
}
