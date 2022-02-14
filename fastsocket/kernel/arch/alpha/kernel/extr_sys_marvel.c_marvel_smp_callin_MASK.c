
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct io7 {TYPE_6__* csrs; } ;
struct TYPE_11__ {int csr; } ;
struct TYPE_10__ {int csr; } ;
struct TYPE_9__ {int csr; } ;
struct TYPE_8__ {int csr; } ;
struct TYPE_7__ {int csr; } ;
struct TYPE_12__ {TYPE_5__ HEI_CTL; TYPE_4__ STV_CTL; TYPE_3__ CRD_CTL; TYPE_2__ HPI_CTL; TYPE_1__ HLT_CTL; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct io7*,int *,int) ;
 int FUNC_2 (struct io7*,int,int) ;
 int FUNC_3 (struct io7*,unsigned int,int) ;
 struct io7* FUNC_4 (int) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static void
FUNC_6(void)
{
 int VAR_0 = FUNC_0();
 struct io7 *VAR_1 = FUNC_4(VAR_0);
 unsigned int VAR_2;

 if (!VAR_1)
  return;




 FUNC_5("Redirecting IO7 interrupts to local CPU at PE %u\n", VAR_0);


 FUNC_1(VAR_1, &VAR_1->csrs->HLT_CTL.csr, VAR_0);
 FUNC_1(VAR_1, &VAR_1->csrs->HPI_CTL.csr, VAR_0);
 FUNC_1(VAR_1, &VAR_1->csrs->CRD_CTL.csr, VAR_0);
 FUNC_1(VAR_1, &VAR_1->csrs->STV_CTL.csr, VAR_0);
 FUNC_1(VAR_1, &VAR_1->csrs->HEI_CTL.csr, VAR_0);


 for (VAR_2 = 0; VAR_2 < 0x60; ++VAR_2)
  FUNC_2(VAR_1, VAR_2, VAR_0);

 FUNC_2(VAR_1, 0x74, VAR_0);
 FUNC_2(VAR_1, 0x75, VAR_0);


 for (VAR_2 = 0; VAR_2 < 16; ++VAR_2)
  FUNC_3(VAR_1, VAR_2, VAR_0);
}
