
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {unsigned long csr; } ;
struct TYPE_9__ {unsigned long csr; } ;
struct TYPE_8__ {unsigned long csr; } ;
struct TYPE_7__ {unsigned long csr; } ;
struct TYPE_11__ {TYPE_4__ dim3; TYPE_3__ dim2; TYPE_2__ dim1; TYPE_1__ dim0; } ;
typedef TYPE_5__ tsunami_cchip ;


 TYPE_5__* VAR_0 ;
 int VAR_1 ;
 unsigned long* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(unsigned long VAR_3)
{
 register tsunami_cchip *VAR_4 = VAR_0;
 unsigned long VAR_5 = 1UL << 55;
 register int VAR_6 = VAR_1;
 volatile unsigned long *VAR_7;
 if (VAR_6 == 0) VAR_7 = &VAR_4->dim0.csr;
 else if (VAR_6 == 1) VAR_7 = &VAR_4->dim1.csr;
 else if (VAR_6 == 2) VAR_7 = &VAR_4->dim2.csr;
 else VAR_7 = &VAR_4->dim3.csr;

 *VAR_7 = VAR_3 | VAR_5;
 FUNC_1();
 *VAR_7;

}
