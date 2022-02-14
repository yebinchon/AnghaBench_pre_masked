
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int size; } ;
typedef TYPE_2__ block_struct ;
struct TYPE_5__ {int HIRQ; } ;
struct TYPE_7__ {TYPE_1__ reg; scalar_t__ isbufferfull; int blockfreespace; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;

void FUNC_0(block_struct * VAR_2) {
  if (VAR_2 == ((void*)0)) return;
  VAR_2->size = -1;
  VAR_1->blockfreespace++;
  VAR_1->isbufferfull = 0;
  VAR_1->reg.HIRQ &= ~VAR_0;
}
