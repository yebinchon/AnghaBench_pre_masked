
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct io7 {TYPE_2__* csrs; } ;
struct TYPE_4__ {TYPE_1__* PO7_MSI_CTL; } ;
struct TYPE_3__ {unsigned long csr; } ;


 int FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(struct io7 *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned long VAR_3;




 VAR_3 = VAR_0->csrs->PO7_MSI_CTL[VAR_1].csr;
 VAR_3 &= ~(0x1ffUL << 14);
 VAR_3 |= ((unsigned long)VAR_2 << 14);

 VAR_0->csrs->PO7_MSI_CTL[VAR_1].csr = VAR_3;
 FUNC_0();
 VAR_0->csrs->PO7_MSI_CTL[VAR_1].csr;
}
