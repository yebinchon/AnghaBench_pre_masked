
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int dummy; } ;
typedef scalar_t__ pgoff_t ;
typedef int pgd_t ;
typedef int mm ;
struct TYPE_2__ {scalar_t__ index; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(pgd_t *VAR_0, struct mm_struct *VAR_1)
{
 FUNC_0(sizeof(FUNC_1(VAR_0)->index) < sizeof(VAR_1));
 FUNC_1(VAR_0)->index = (pgoff_t)VAR_1;
}
