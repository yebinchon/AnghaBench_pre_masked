
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct nes_vnic {struct nes_device* nesdev; } ;
struct TYPE_2__ {scalar_t__ paddr; int kva; } ;
struct ib_fast_reg_page_list {int max_page_list_len; int * page_list; } ;
struct nes_ib_fast_reg_page_list {TYPE_1__ nes_wqe_pbl; struct ib_fast_reg_page_list ibfrpl; int pbl; } ;
struct nes_device {int pcidev; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_fast_reg_page_list* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct nes_ib_fast_reg_page_list*) ;
 struct nes_ib_fast_reg_page_list* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,char*,struct nes_ib_fast_reg_page_list*,struct ib_fast_reg_page_list*,int *,int ,unsigned long long) ;
 int FUNC_4 (int ,int,scalar_t__*) ;
 struct nes_vnic* FUNC_5 (struct ib_device*) ;

__attribute__((used)) static struct ib_fast_reg_page_list *FUNC_6(
       struct ib_device *VAR_5,
       int VAR_6)
{
 struct nes_vnic *VAR_7 = FUNC_5(VAR_5);
 struct nes_device *VAR_8 = VAR_7->nesdev;
 struct ib_fast_reg_page_list *VAR_9;
 struct nes_ib_fast_reg_page_list *VAR_10;

 if (VAR_6 > (VAR_3 / sizeof(u64)))
  return FUNC_0(-VAR_0);




 VAR_10 = FUNC_2(sizeof(struct nes_ib_fast_reg_page_list) +
      VAR_6 * sizeof(u64), VAR_2);

 if (!VAR_10)
  return FUNC_0(-VAR_1);

 VAR_9 = &VAR_10->ibfrpl;
 VAR_9->page_list = &VAR_10->pbl;
 VAR_9->max_page_list_len = VAR_6;



 VAR_10->nes_wqe_pbl.kva = FUNC_4(VAR_8->pcidev,
        VAR_6 * sizeof(u64),
        &VAR_10->nes_wqe_pbl.paddr);

 if (!VAR_10->nes_wqe_pbl.kva) {
  FUNC_1(VAR_10);
  return FUNC_0(-VAR_1);
 }
 FUNC_3(VAR_4, "nes_alloc_fast_reg_pbl: nes_frpl = %p, "
    "ibfrpl = %p, ibfrpl.page_list = %p, pbl.kva = %p, "
    "pbl.paddr = %llx\n", VAR_10, &VAR_10->ibfrpl,
    VAR_10->ibfrpl.page_list, VAR_10->nes_wqe_pbl.kva,
    (unsigned long long) VAR_10->nes_wqe_pbl.paddr);

 return VAR_9;
}
