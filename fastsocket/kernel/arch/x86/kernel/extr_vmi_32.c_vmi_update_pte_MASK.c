
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int dummy; } ;
typedef int pte_t ;
struct TYPE_2__ {int (* update_pte ) (int *,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct mm_struct*,unsigned long,int ,int ) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_2(struct mm_struct *VAR_2, unsigned long VAR_3, pte_t *VAR_4)
{
 VAR_1.update_pte(VAR_4, FUNC_1(VAR_2, VAR_3, VAR_0, 0));
}
