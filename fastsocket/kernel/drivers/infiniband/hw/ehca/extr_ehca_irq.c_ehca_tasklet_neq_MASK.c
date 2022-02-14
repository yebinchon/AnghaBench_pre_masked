
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {int ipz_eq_handle; } ;
struct ehca_shca {int ib_device; TYPE_1__ neq; int ipz_hca_handle; } ;
struct ehca_eqe {int entry; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 struct ehca_eqe* FUNC_2 (struct ehca_shca*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct ehca_shca*,int ) ;

void FUNC_5(unsigned long VAR_2)
{
 struct ehca_shca *VAR_3 = (struct ehca_shca*)VAR_2;
 struct ehca_eqe *VAR_4;
 u64 VAR_5;

 VAR_4 = FUNC_2(VAR_3, &VAR_3->neq);

 while (VAR_4) {
  if (!FUNC_0(VAR_1, VAR_4->entry))
   FUNC_4(VAR_3, VAR_4->entry);

  VAR_4 = FUNC_2(VAR_3, &VAR_3->neq);
 }

 VAR_5 = FUNC_3(VAR_3->ipz_hca_handle,
     VAR_3->neq.ipz_eq_handle, 0xFFFFFFFFFFFFFFFFL);

 if (VAR_5 != VAR_0)
  FUNC_1(&VAR_3->ib_device, "Can't clear notification events.");

 return;
}
