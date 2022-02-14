
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {unsigned long long u64; } ;
struct TYPE_11__ {unsigned long long mca_mcg_ctl; void* mca_is_saved; void* mca_is_valid; int * mca_error_bank; TYPE_1__ mca_mcg_status; } ;
typedef TYPE_4__ mca_state_t ;
struct TYPE_9__ {scalar_t__ addrv; scalar_t__ miscv; int val; } ;
struct TYPE_10__ {unsigned long long u64; TYPE_2__ bits; } ;
struct TYPE_12__ {unsigned long long mca_mci_ctl; unsigned long long mca_mci_misc; unsigned long long mca_mci_addr; TYPE_3__ mca_mci_status; } ;
typedef TYPE_5__ mca_mci_bank_t ;
struct TYPE_13__ {TYPE_4__* mca_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 void* VAR_2 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_6 () ;
 unsigned long long FUNC_7 (int ) ;
 TYPE_6__* FUNC_8 () ;

__attribute__((used)) static void
FUNC_9(mca_state_t *VAR_5)
{
 mca_mci_bank_t *VAR_6;
 unsigned int VAR_7;

 FUNC_4(!FUNC_6() || FUNC_5() > 0);

 if (VAR_5 == ((void*)0))
  return;

 VAR_5->mca_mcg_ctl = VAR_3 ?
     FUNC_7(VAR_0) : 0ULL;
 VAR_5->mca_mcg_status.u64 = FUNC_7(VAR_1);

  VAR_6 = (mca_mci_bank_t *) &VAR_5->mca_error_bank[0];
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++, VAR_6++) {
  VAR_6->mca_mci_ctl = FUNC_7(FUNC_1(VAR_7));
  VAR_6->mca_mci_status.u64 = FUNC_7(FUNC_3(VAR_7));
  if (!VAR_6->mca_mci_status.bits.val)
   continue;
  VAR_6->mca_mci_misc = (VAR_6->mca_mci_status.bits.miscv)?
     FUNC_7(FUNC_2(VAR_7)) : 0ULL;
  VAR_6->mca_mci_addr = (VAR_6->mca_mci_status.bits.addrv)?
     FUNC_7(FUNC_0(VAR_7)) : 0ULL;
  VAR_5->mca_is_valid = VAR_2;
 }





 if (FUNC_8()->mca_state == ((void*)0))
  FUNC_8()->mca_state = VAR_5;

 VAR_5->mca_is_saved = VAR_2;
}
