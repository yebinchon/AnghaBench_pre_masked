
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
typedef TYPE_5__ titan_cchip ;
typedef int cpumask_t ;


 TYPE_5__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 () ;
 unsigned long* VAR_3 ;

__attribute__((used)) static void
FUNC_2(unsigned long VAR_4)
{
 register titan_cchip *VAR_5 = VAR_0;
 unsigned long VAR_6 = 1UL << 55;
 register int VAR_7 = VAR_1;
 volatile unsigned long *VAR_8;
 VAR_8 = &VAR_5->dim0.csr;
 if (VAR_7 == 1) VAR_8 = &VAR_5->dim1.csr;
 else if (VAR_7 == 2) VAR_8 = &VAR_5->dim2.csr;
 else if (VAR_7 == 3) VAR_8 = &VAR_5->dim3.csr;

 *VAR_8 = VAR_4 | VAR_6;
 FUNC_1();
 *VAR_8;

}
