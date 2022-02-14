
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned short ss_family; } ;
struct TYPE_6__ {TYPE_1__ src_addr; } ;
struct TYPE_7__ {TYPE_2__ addr; } ;
struct TYPE_8__ {TYPE_3__ route; } ;
struct rdma_id_private {TYPE_4__ id; } ;



__attribute__((used)) static inline unsigned short FUNC_0(struct rdma_id_private *VAR_0)
{
 return VAR_0->id.route.addr.src_addr.ss_family;
}
