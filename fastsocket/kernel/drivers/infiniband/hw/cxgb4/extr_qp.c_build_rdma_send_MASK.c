
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_4__* immd_src; int isgl_src; } ;
struct TYPE_7__ {void* plen; TYPE_2__ u; void* stag_inv; void* sendop_pkd; } ;
union t4_wr {TYPE_3__ send; } ;
typedef int u8 ;
typedef int u32 ;
struct t4_sq {size_t size; int * queue; } ;
struct TYPE_5__ {int invalidate_rkey; } ;
struct ib_send_wr {int num_sge; int opcode; int send_flags; int sg_list; TYPE_1__ ex; } ;
struct fw_ri_sge {int dummy; } ;
struct fw_ri_isgl {int dummy; } ;
struct fw_ri_immd {int dummy; } ;
typedef int __be64 ;
struct TYPE_8__ {scalar_t__ immdlen; scalar_t__ r2; scalar_t__ r1; int op; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct t4_sq*,TYPE_4__*,struct ib_send_wr*,int ,int*) ;
 int FUNC_3 (int *,int *,int ,int ,int,int*) ;
 void* FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct t4_sq *VAR_10, union t4_wr *VAR_11,
      struct ib_send_wr *VAR_12, u8 *VAR_13)
{
 u32 VAR_14;
 int VAR_15;
 int VAR_16;

 if (VAR_12->num_sge > VAR_9)
  return -VAR_0;
 switch (VAR_12->opcode) {
 case 129:
  if (VAR_12->send_flags & VAR_7)
   VAR_11->send.sendop_pkd = FUNC_4(
    FUNC_1(VAR_4));
  else
   VAR_11->send.sendop_pkd = FUNC_4(
    FUNC_1(VAR_2));
  VAR_11->send.stag_inv = 0;
  break;
 case 128:
  if (VAR_12->send_flags & VAR_7)
   VAR_11->send.sendop_pkd = FUNC_4(
    FUNC_1(VAR_5));
  else
   VAR_11->send.sendop_pkd = FUNC_4(
    FUNC_1(VAR_3));
  VAR_11->send.stag_inv = FUNC_4(VAR_12->ex.invalidate_rkey);
  break;

 default:
  return -VAR_0;
 }

 VAR_14 = 0;
 if (VAR_12->num_sge) {
  if (VAR_12->send_flags & VAR_6) {
   VAR_16 = FUNC_2(VAR_10, VAR_11->send.u.immd_src, VAR_12,
      VAR_8, &VAR_14);
   if (VAR_16)
    return VAR_16;
   VAR_15 = sizeof VAR_11->send + sizeof(struct fw_ri_immd) +
          VAR_14;
  } else {
   VAR_16 = FUNC_3((__be64 *)VAR_10->queue,
      (__be64 *)&VAR_10->queue[VAR_10->size],
      VAR_11->send.u.isgl_src,
      VAR_12->sg_list, VAR_12->num_sge, &VAR_14);
   if (VAR_16)
    return VAR_16;
   VAR_15 = sizeof VAR_11->send + sizeof(struct fw_ri_isgl) +
          VAR_12->num_sge * sizeof(struct fw_ri_sge);
  }
 } else {
  VAR_11->send.u.immd_src[0].op = VAR_1;
  VAR_11->send.u.immd_src[0].r1 = 0;
  VAR_11->send.u.immd_src[0].r2 = 0;
  VAR_11->send.u.immd_src[0].immdlen = 0;
  VAR_15 = sizeof VAR_11->send + sizeof(struct fw_ri_immd);
  VAR_14 = 0;
 }
 *VAR_13 = FUNC_0(VAR_15, 16);
 VAR_11->send.plen = FUNC_4(VAR_14);
 return 0;
}
