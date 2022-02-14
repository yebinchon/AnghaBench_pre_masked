
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ss_family; } ;
struct TYPE_7__ {TYPE_1__ src_addr; } ;
struct TYPE_8__ {TYPE_2__ addr; } ;
struct rdma_cm_id {TYPE_3__ route; } ;
struct TYPE_9__ {int primary_path; } ;
struct TYPE_10__ {TYPE_4__ req_rcvd; } ;
struct ib_cm_event {struct cma_hdr* private_data; TYPE_5__ param; } ;
struct cma_hdr {scalar_t__ cma_version; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cma_hdr*) ;
 int FUNC_1 (struct rdma_cm_id*,struct rdma_cm_id*,int ) ;
 int FUNC_2 (struct rdma_cm_id*,struct rdma_cm_id*,struct cma_hdr*) ;
 int FUNC_3 (struct rdma_cm_id*,struct rdma_cm_id*,struct cma_hdr*) ;

__attribute__((used)) static int FUNC_4(struct rdma_cm_id *VAR_3, struct rdma_cm_id *VAR_4,
        struct ib_cm_event *VAR_5)
{
 struct cma_hdr *VAR_6;

 if (VAR_4->route.addr.src_addr.ss_family == VAR_0) {
  FUNC_1(VAR_3, VAR_4, VAR_5->param.req_rcvd.primary_path);
  return 0;
 }

 VAR_6 = VAR_5->private_data;
 if (VAR_6->cma_version != VAR_1)
  return -VAR_2;

 switch (FUNC_0(VAR_6)) {
 case 4:
  FUNC_2(VAR_3, VAR_4, VAR_6);
  break;
 case 6:
  FUNC_3(VAR_3, VAR_4, VAR_6);
  break;
 default:
  return -VAR_2;
 }
 return 0;
}
