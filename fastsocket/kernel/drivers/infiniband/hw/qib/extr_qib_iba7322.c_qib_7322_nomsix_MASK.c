
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct qib_devdata {TYPE_3__* cspec; } ;
struct TYPE_6__ {unsigned long long main_int_mask; int num_msix_entries; TYPE_2__* msix_entries; } ;
struct TYPE_4__ {int vector; } ;
struct TYPE_5__ {int arg; TYPE_1__ msix; int mask; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;
 int FUNC_3 (struct qib_devdata*) ;
 scalar_t__ FUNC_4 (struct qib_devdata*,int ) ;
 int FUNC_5 (struct qib_devdata*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct qib_devdata *VAR_1)
{
 u64 VAR_2;
 int VAR_3;

 VAR_1->cspec->main_int_mask = ~0ULL;
 VAR_3 = VAR_1->cspec->num_msix_entries;
 if (VAR_3) {
  int VAR_4;

  VAR_1->cspec->num_msix_entries = 0;
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
   FUNC_2(
     VAR_1->cspec->msix_entries[VAR_4].msix.vector, ((void*)0));
   FUNC_0(VAR_1->cspec->msix_entries[VAR_4].mask);
   FUNC_1(VAR_1->cspec->msix_entries[VAR_4].msix.vector,
      VAR_1->cspec->msix_entries[VAR_4].arg);
  }
  FUNC_3(VAR_1);
 }

 VAR_2 = FUNC_4(VAR_1, VAR_0);
 if (VAR_2)
  FUNC_5(VAR_1, VAR_0, VAR_2);
}
