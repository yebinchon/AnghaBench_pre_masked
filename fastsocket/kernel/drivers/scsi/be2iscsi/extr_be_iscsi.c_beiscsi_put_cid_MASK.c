
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cxns_per_ctrl; } ;
struct beiscsi_hba {unsigned short* cid_array; scalar_t__ cid_free; TYPE_1__ params; int avlbl_cids; } ;



__attribute__((used)) static void FUNC_0(struct beiscsi_hba *VAR_0, unsigned short VAR_1)
{
 VAR_0->avlbl_cids++;
 VAR_0->cid_array[VAR_0->cid_free++] = VAR_1;
 if (VAR_0->cid_free == VAR_0->params.cxns_per_ctrl)
  VAR_0->cid_free = 0;
}
