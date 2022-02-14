
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cmeimask0; int imask0; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_0(unsigned int VAR_4)
{
 VAR_3->cmeimask0 &= ~(1 << (VAR_4 - VAR_1));
 if (!VAR_3->cmeimask0)
  VAR_3->imask0 &= ~(1 << (VAR_2 - VAR_0));
}
