
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int interrupts_enabled; scalar_t__ vaddr; } ;
typedef TYPE_1__ ctlr_info_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(ctlr_info_t *VAR_2, unsigned long VAR_3)
{
 if (VAR_3) {
  VAR_2->interrupts_enabled = 1;
  FUNC_0(0, VAR_2->vaddr + VAR_1);
 } else {
  VAR_2->interrupts_enabled = 0;
  FUNC_0(VAR_0,
    VAR_2->vaddr + VAR_1);
 }
}
