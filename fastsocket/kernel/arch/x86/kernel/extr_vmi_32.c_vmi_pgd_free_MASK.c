
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int dummy; } ;
typedef int pgd_t ;
struct TYPE_2__ {int (* release_page ) (unsigned long,int ) ;} ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int *) ;
 int FUNC_1 (unsigned long,int ) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_2(struct mm_struct *VAR_3, pgd_t *VAR_4)
{
 unsigned long VAR_5 = FUNC_0(VAR_4) >> VAR_0;

 VAR_2.release_page(VAR_5, VAR_1);
}
