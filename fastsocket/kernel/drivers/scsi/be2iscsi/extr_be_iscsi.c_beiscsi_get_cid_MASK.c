
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cxns_per_ctrl; } ;
struct beiscsi_hba {unsigned short* cid_array; scalar_t__ cid_alloc; int avlbl_cids; TYPE_1__ params; } ;



__attribute__((used)) static int FUNC_0(struct beiscsi_hba *VAR_0)
{
 unsigned short VAR_1 = 0xFFFF;

 if (!VAR_0->avlbl_cids)
  return VAR_1;

 VAR_1 = VAR_0->cid_array[VAR_0->cid_alloc++];
 if (VAR_0->cid_alloc == VAR_0->params.cxns_per_ctrl)
  VAR_0->cid_alloc = 0;
 VAR_0->avlbl_cids--;
 return VAR_1;
}
