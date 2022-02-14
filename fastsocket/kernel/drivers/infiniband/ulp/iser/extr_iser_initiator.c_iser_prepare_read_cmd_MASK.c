
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ va; int rkey; } ;
struct iser_regd_buf {TYPE_2__ reg; } ;
struct iser_hdr {int read_va; int read_stag; int flags; } ;
struct iser_data_buf {unsigned int data_len; } ;
struct iscsi_task {int itt; struct iscsi_iser_task* dd_data; } ;
struct TYPE_3__ {struct iser_hdr iser_header; } ;
struct iscsi_iser_task {struct iser_regd_buf* rdma_regd; int iser_conn; struct iser_data_buf* data; TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int ,int ,unsigned long long) ;
 int FUNC_3 (struct iscsi_iser_task*,struct iser_data_buf*,size_t,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct iscsi_iser_task*,size_t) ;

__attribute__((used)) static int FUNC_6(struct iscsi_task *VAR_4,
     unsigned int VAR_5)

{
 struct iscsi_iser_task *VAR_6 = VAR_4->dd_data;
 struct iser_regd_buf *VAR_7;
 int VAR_8;
 struct iser_hdr *VAR_9 = &VAR_6->desc.iser_header;
 struct iser_data_buf *VAR_10 = &VAR_6->data[VAR_2];

 VAR_8 = FUNC_3(VAR_6,
         VAR_10,
         VAR_2,
         VAR_0);
 if (VAR_8)
  return VAR_8;

 if (VAR_5 > VAR_6->data[VAR_2].data_len) {
  FUNC_4("Total data length: %ld, less than EDTL: "
    "%d, in READ cmd BHS itt: %d, conn: 0x%p\n",
    VAR_6->data[VAR_2].data_len, VAR_5,
    VAR_4->itt, VAR_6->iser_conn);
  return -VAR_1;
 }

 VAR_8 = FUNC_5(VAR_6,VAR_2);
 if (VAR_8) {
  FUNC_4("Failed to set up Data-IN RDMA\n");
  return VAR_8;
 }
 VAR_7 = &VAR_6->rdma_regd[VAR_2];

 VAR_9->flags |= VAR_3;
 VAR_9->read_stag = FUNC_0(VAR_7->reg.rkey);
 VAR_9->read_va = FUNC_1(VAR_7->reg.va);

 FUNC_2("Cmd itt:%d READ tags RKEY:%#.4X VA:%#llX\n",
   VAR_4->itt, VAR_7->reg.rkey,
   (unsigned long long)VAR_7->reg.va);

 return 0;
}
