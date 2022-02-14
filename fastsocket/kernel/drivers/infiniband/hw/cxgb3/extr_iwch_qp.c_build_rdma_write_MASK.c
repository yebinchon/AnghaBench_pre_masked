
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


struct TYPE_12__ {void* plen; void* num_sgle; TYPE_4__* sgl; void* to_sink; void* stag_sink; scalar_t__* reserved; int rdmaop; } ;
union t3_wr {TYPE_6__ write; } ;
typedef int u8 ;
typedef int u32 ;
struct TYPE_9__ {void* imm_data; } ;
struct TYPE_7__ {int rkey; int remote_addr; } ;
struct TYPE_8__ {TYPE_1__ rdma; } ;
struct ib_send_wr {int num_sge; scalar_t__ opcode; TYPE_5__* sg_list; TYPE_3__ ex; TYPE_2__ wr; } ;
struct TYPE_11__ {int length; int lkey; int addr; } ;
struct TYPE_10__ {void* to; void* len; void* stag; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(union t3_wr *VAR_5, struct ib_send_wr *VAR_6,
     u8 *VAR_7)
{
 int VAR_8;
 u32 VAR_9;
 if (VAR_6->num_sge > VAR_3)
  return -VAR_0;
 VAR_5->write.rdmaop = VAR_4;
 VAR_5->write.reserved[0] = 0;
 VAR_5->write.reserved[1] = 0;
 VAR_5->write.reserved[2] = 0;
 VAR_5->write.stag_sink = FUNC_0(VAR_6->wr.rdma.rkey);
 VAR_5->write.to_sink = FUNC_1(VAR_6->wr.rdma.remote_addr);

 if (VAR_6->opcode == VAR_2) {
  VAR_9 = 4;
  VAR_5->write.sgl[0].stag = VAR_6->ex.imm_data;
  VAR_5->write.sgl[0].len = FUNC_0(0);
  VAR_5->write.num_sgle = FUNC_0(0);
  *VAR_7 = 6;
 } else {
  VAR_9 = 0;
  for (VAR_8 = 0; VAR_8 < VAR_6->num_sge; VAR_8++) {
   if ((VAR_9 + VAR_6->sg_list[VAR_8].length) < VAR_9) {
    return -VAR_1;
   }
   VAR_9 += VAR_6->sg_list[VAR_8].length;
   VAR_5->write.sgl[VAR_8].stag =
       FUNC_0(VAR_6->sg_list[VAR_8].lkey);
   VAR_5->write.sgl[VAR_8].len =
       FUNC_0(VAR_6->sg_list[VAR_8].length);
   VAR_5->write.sgl[VAR_8].to =
       FUNC_1(VAR_6->sg_list[VAR_8].addr);
  }
  VAR_5->write.num_sgle = FUNC_0(VAR_6->num_sge);
  *VAR_7 = 5 + ((VAR_6->num_sge) << 1);
 }
 VAR_5->write.plen = FUNC_0(VAR_9);
 return 0;
}
