
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lkey; scalar_t__ va; int rkey; } ;
struct iser_regd_buf {TYPE_1__ reg; } ;
struct iser_hdr {int write_va; int write_stag; int flags; } ;
struct iser_data_buf {unsigned int data_len; } ;
struct iscsi_task {int itt; int conn; struct iscsi_iser_task* dd_data; } ;
struct TYPE_4__ {int num_sge; struct ib_sge* tx_sg; struct iser_hdr iser_header; } ;
struct iscsi_iser_task {TYPE_2__ desc; struct iser_regd_buf* rdma_regd; struct iser_data_buf* data; } ;
struct ib_sge {unsigned int length; int lkey; scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int ,unsigned int,...) ;
 int FUNC_3 (struct iscsi_iser_task*,struct iser_data_buf*,size_t,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct iscsi_iser_task*,size_t) ;

__attribute__((used)) static int
FUNC_6(struct iscsi_task *VAR_4,
         unsigned int VAR_5,
         unsigned int VAR_6,
         unsigned int VAR_7)
{
 struct iscsi_iser_task *VAR_8 = VAR_4->dd_data;
 struct iser_regd_buf *VAR_9;
 int VAR_10;
 struct iser_hdr *VAR_11 = &VAR_8->desc.iser_header;
 struct iser_data_buf *VAR_12 = &VAR_8->data[VAR_2];
 struct ib_sge *VAR_13 = &VAR_8->desc.tx_sg[1];

 VAR_10 = FUNC_3(VAR_8,
         VAR_12,
         VAR_2,
         VAR_0);
 if (VAR_10)
  return VAR_10;

 if (VAR_7 > VAR_8->data[VAR_2].data_len) {
  FUNC_4("Total data length: %ld, less than EDTL: %d, "
    "in WRITE cmd BHS itt: %d, conn: 0x%p\n",
    VAR_8->data[VAR_2].data_len,
    VAR_7, VAR_4->itt, VAR_4->conn);
  return -VAR_1;
 }

 VAR_10 = FUNC_5(VAR_8,VAR_2);
 if (VAR_10 != 0) {
  FUNC_4("Failed to register write cmd RDMA mem\n");
  return VAR_10;
 }

 VAR_9 = &VAR_8->rdma_regd[VAR_2];

 if (VAR_6 < VAR_7) {
  VAR_11->flags |= VAR_3;
  VAR_11->write_stag = FUNC_0(VAR_9->reg.rkey);
  VAR_11->write_va = FUNC_1(VAR_9->reg.va + VAR_6);

  FUNC_2("Cmd itt:%d, WRITE tags, RKEY:%#.4X "
    "VA:%#llX + unsol:%d\n",
    VAR_4->itt, VAR_9->reg.rkey,
    (unsigned long long)VAR_9->reg.va, VAR_6);
 }

 if (VAR_5 > 0) {
  FUNC_2("Cmd itt:%d, WRITE, adding imm.data sz: %d\n",
    VAR_4->itt, VAR_5);
  VAR_13->addr = VAR_9->reg.va;
  VAR_13->length = VAR_5;
  VAR_13->lkey = VAR_9->reg.lkey;
  VAR_8->desc.num_sge = 2;
 }

 return 0;
}
