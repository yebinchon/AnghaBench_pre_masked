
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* atom_card_info; TYPE_2__* atom_context; } ;
struct radeon_device {TYPE_1__ mode_info; } ;
struct TYPE_4__ {struct TYPE_4__* scratch; } ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(struct radeon_device *VAR_0)
{
 if (VAR_0->mode_info.atom_context) {
  FUNC_0(VAR_0->mode_info.atom_context->scratch);
 }
 FUNC_0(VAR_0->mode_info.atom_context);
 VAR_0->mode_info.atom_context = ((void*)0);
 FUNC_0(VAR_0->mode_info.atom_card_info);
 VAR_0->mode_info.atom_card_info = ((void*)0);
}
