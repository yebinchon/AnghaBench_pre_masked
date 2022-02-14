
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsxx_cardinfo {scalar_t__ ier_mask; scalar_t__ isr_mask; } ;



__attribute__((used)) static void FUNC_0(struct rsxx_cardinfo *VAR_0)
{
 VAR_0->isr_mask = 0;
 VAR_0->ier_mask = 0;
}
