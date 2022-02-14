
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_5__* immd_src; int isgl_src; } ;
struct TYPE_9__ {void* plen; TYPE_3__ u; int to_sink; void* stag_sink; scalar_t__ r2; } ;
union t4_wr {TYPE_4__ write; } ;
typedef int u8 ;
typedef int u32 ;
struct t4_sq {size_t size; int * queue; } ;
struct TYPE_6__ {int rkey; int remote_addr; } ;
struct TYPE_7__ {TYPE_1__ rdma; } ;
struct ib_send_wr {int num_sge; int send_flags; int sg_list; TYPE_2__ wr; } ;
struct fw_ri_sge {int dummy; } ;
struct fw_ri_isgl {int dummy; } ;
struct fw_ri_immd {int dummy; } ;
typedef int __be64 ;
struct TYPE_10__ {scalar_t__ immdlen; scalar_t__ r2; scalar_t__ r1; int op; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct t4_sq*,TYPE_5__*,struct ib_send_wr*,int ,int*) ;
 int FUNC_2 (int *,int *,int ,int ,int,int*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct t4_sq *VAR_5, union t4_wr *VAR_6,
       struct ib_send_wr *VAR_7, u8 *VAR_8)
{
 u32 VAR_9;
 int VAR_10;
 int VAR_11;

 if (VAR_7->num_sge > VAR_3)
  return -VAR_0;
 VAR_6->write.r2 = 0;
 VAR_6->write.stag_sink = FUNC_3(VAR_7->wr.rdma.rkey);
 VAR_6->write.to_sink = FUNC_4(VAR_7->wr.rdma.remote_addr);
 if (VAR_7->num_sge) {
  if (VAR_7->send_flags & VAR_2) {
   VAR_11 = FUNC_1(VAR_5, VAR_6->write.u.immd_src, VAR_7,
      VAR_4, &VAR_9);
   if (VAR_11)
    return VAR_11;
   VAR_10 = sizeof VAR_6->write + sizeof(struct fw_ri_immd) +
          VAR_9;
  } else {
   VAR_11 = FUNC_2((__be64 *)VAR_5->queue,
      (__be64 *)&VAR_5->queue[VAR_5->size],
      VAR_6->write.u.isgl_src,
      VAR_7->sg_list, VAR_7->num_sge, &VAR_9);
   if (VAR_11)
    return VAR_11;
   VAR_10 = sizeof VAR_6->write + sizeof(struct fw_ri_isgl) +
          VAR_7->num_sge * sizeof(struct fw_ri_sge);
  }
 } else {
  VAR_6->write.u.immd_src[0].op = VAR_1;
  VAR_6->write.u.immd_src[0].r1 = 0;
  VAR_6->write.u.immd_src[0].r2 = 0;
  VAR_6->write.u.immd_src[0].immdlen = 0;
  VAR_10 = sizeof VAR_6->write + sizeof(struct fw_ri_immd);
  VAR_9 = 0;
 }
 *VAR_8 = FUNC_0(VAR_10, 16);
 VAR_6->write.plen = FUNC_3(VAR_9);
 return 0;
}
