
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {int sq_mem_size; int rq_mem_size; int cq_mem_size; scalar_t__ cq_pgtbl_virt; scalar_t__ cq_phys; int cq_pgtbl_size; scalar_t__ rq_pgtbl_virt; scalar_t__ rq_phys; int rq_pgtbl_size; scalar_t__ sq_pgtbl_virt; scalar_t__ sq_phys; int sq_pgtbl_size; } ;
struct bnx2i_endpoint {TYPE_2__ qp; TYPE_1__* hba; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_3__ {int cnic_dev_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct bnx2i_endpoint *VAR_5)
{
 int VAR_6;
 u32 *VAR_7;
 dma_addr_t VAR_8;
 int VAR_9;

 if (FUNC_1(VAR_0, &VAR_5->hba->cnic_dev_type))
  VAR_9 = 1;
 else
  VAR_9 = 0;


 FUNC_0(VAR_5->qp.sq_pgtbl_virt, 0, VAR_5->qp.sq_pgtbl_size);
 VAR_6 = VAR_5->qp.sq_mem_size / VAR_4;
 VAR_8 = VAR_5->qp.sq_phys;

 if (VAR_9)
  VAR_7 = (u32 *)((u8 *)VAR_5->qp.sq_pgtbl_virt + VAR_3);
 else
  VAR_7 = (u32 *) VAR_5->qp.sq_pgtbl_virt;
 while (VAR_6--) {
  if (VAR_9) {

   *VAR_7 = (u32) VAR_8;
   VAR_7++;
   *VAR_7 = (u32) ((u64) VAR_8 >> 32);
   VAR_7++;
   VAR_8 += VAR_4;
  } else {


   *VAR_7 = (u32) ((u64) VAR_8 >> 32);
   VAR_7++;
   *VAR_7 = (u32) VAR_8;
   VAR_7++;
   VAR_8 += VAR_4;
  }
 }


 FUNC_0(VAR_5->qp.rq_pgtbl_virt, 0, VAR_5->qp.rq_pgtbl_size);
 VAR_6 = VAR_5->qp.rq_mem_size / VAR_4;
 VAR_8 = VAR_5->qp.rq_phys;

 if (VAR_9)
  VAR_7 = (u32 *)((u8 *)VAR_5->qp.rq_pgtbl_virt + VAR_2);
 else
  VAR_7 = (u32 *) VAR_5->qp.rq_pgtbl_virt;
 while (VAR_6--) {
  if (VAR_9) {

   *VAR_7 = (u32) VAR_8;
   VAR_7++;
   *VAR_7 = (u32) ((u64) VAR_8 >> 32);
   VAR_7++;
   VAR_8 += VAR_4;
  } else {


   *VAR_7 = (u32) ((u64) VAR_8 >> 32);
   VAR_7++;
   *VAR_7 = (u32) VAR_8;
   VAR_7++;
   VAR_8 += VAR_4;
  }
 }


 FUNC_0(VAR_5->qp.cq_pgtbl_virt, 0, VAR_5->qp.cq_pgtbl_size);
 VAR_6 = VAR_5->qp.cq_mem_size / VAR_4;
 VAR_8 = VAR_5->qp.cq_phys;

 if (VAR_9)
  VAR_7 = (u32 *)((u8 *)VAR_5->qp.cq_pgtbl_virt + VAR_1);
 else
  VAR_7 = (u32 *) VAR_5->qp.cq_pgtbl_virt;
 while (VAR_6--) {
  if (VAR_9) {

   *VAR_7 = (u32) VAR_8;
   VAR_7++;
   *VAR_7 = (u32) ((u64) VAR_8 >> 32);
   VAR_7++;
   VAR_8 += VAR_4;
  } else {


   *VAR_7 = (u32) ((u64) VAR_8 >> 32);
   VAR_7++;
   *VAR_7 = (u32) VAR_8;
   VAR_7++;
   VAR_8 += VAR_4;
  }
 }
}
