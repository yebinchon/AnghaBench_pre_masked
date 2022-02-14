
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int member_0; int pte; } ;
typedef TYPE_3__ pte_t ;
struct TYPE_10__ {int pgd; } ;
struct TYPE_11__ {TYPE_1__ pgd; } ;
struct TYPE_13__ {TYPE_2__ pud; int pmd; } ;
typedef TYPE_4__ pmd_t ;
struct TYPE_14__ {int (* set_pte ) (TYPE_3__ const,TYPE_3__*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__ const,TYPE_3__*,int ) ;
 TYPE_7__ VAR_1 ;

__attribute__((used)) static void FUNC_1(pmd_t *VAR_2, pmd_t VAR_3)
{



 const pte_t VAR_4 = { VAR_3.pud.pgd.pgd };

 VAR_1.set_pte(VAR_4, (pte_t *)VAR_2, VAR_0);
}
