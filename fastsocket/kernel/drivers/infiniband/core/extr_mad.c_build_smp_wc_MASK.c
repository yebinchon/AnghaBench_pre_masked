
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef void* u16 ;
struct ib_wc {int byte_len; int port_num; scalar_t__ dlid_path_bits; scalar_t__ sl; void* slid; struct ib_qp* qp; int src_qp; void* pkey_index; int opcode; int status; int wr_id; } ;
struct ib_qp {int dummy; } ;
struct ib_mad {int dummy; } ;
struct ib_grh {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ib_wc*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ib_qp *VAR_3,
    u64 VAR_4, u16 VAR_5, u16 VAR_6, u8 VAR_7,
    struct ib_wc *VAR_8)
{
 FUNC_0(VAR_8, 0, sizeof *VAR_8);
 VAR_8->wr_id = VAR_4;
 VAR_8->status = VAR_2;
 VAR_8->opcode = VAR_1;
 VAR_8->pkey_index = VAR_6;
 VAR_8->byte_len = sizeof(struct ib_mad) + sizeof(struct ib_grh);
 VAR_8->src_qp = VAR_0;
 VAR_8->qp = VAR_3;
 VAR_8->slid = VAR_5;
 VAR_8->sl = 0;
 VAR_8->dlid_path_bits = 0;
 VAR_8->port_num = VAR_7;
}
