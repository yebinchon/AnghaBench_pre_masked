
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_wrbq_create_resp {int cid; } ;
struct be_wrbq_create_req {int pages; int num_pages; int hdr; } ;
struct be_queue_info {int created; int id; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_dma_mem {int size; int va; } ;
struct be_ctrl_info {int mbox_lock; int mbox_mem; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ,int ,int) ;
 int FUNC_3 (int ,int ,struct be_dma_mem*) ;
 int FUNC_4 (struct be_ctrl_info*) ;
 int FUNC_5 (struct be_mcc_wrb*,int,int,int ) ;
 void* FUNC_6 (struct be_mcc_wrb*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct be_mcc_wrb*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct be_mcc_wrb* FUNC_11 (int *) ;

int FUNC_12(struct be_ctrl_info *VAR_2, struct be_dma_mem *VAR_3,
         struct be_queue_info *VAR_4)
{
 struct be_mcc_wrb *VAR_5 = FUNC_11(&VAR_2->mbox_mem);
 struct be_wrbq_create_req *VAR_6 = FUNC_6(VAR_5);
 struct be_wrbq_create_resp *VAR_7 = FUNC_6(VAR_5);
 int VAR_8;

 FUNC_9(&VAR_2->mbox_lock);
 FUNC_8(VAR_5, 0, sizeof(*VAR_5));

 FUNC_5(VAR_5, sizeof(*VAR_6), 1, 0);

 FUNC_2(&VAR_6->hdr, VAR_0,
  VAR_1, sizeof(*VAR_6));
 VAR_6->num_pages = FUNC_1(VAR_3->va, VAR_3->size);
 FUNC_3(VAR_6->pages, FUNC_0(VAR_6->pages), VAR_3);

 VAR_8 = FUNC_4(VAR_2);
 if (!VAR_8) {
  VAR_4->id = FUNC_7(VAR_7->cid);
  VAR_4->created = 1;
 }
 FUNC_10(&VAR_2->mbox_lock);
 return VAR_8;
}
