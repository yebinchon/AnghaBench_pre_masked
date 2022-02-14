
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ lengths_alloc_size; scalar_t__ types_alloc_size; scalar_t__ lengths; scalar_t__ types; scalar_t__ num_blocks; scalar_t__ num_types; } ;
typedef TYPE_1__ BlockSplit ;



void FUNC_0(BlockSplit* VAR_0) {
  VAR_0->num_types = 0;
  VAR_0->num_blocks = 0;
  VAR_0->types = 0;
  VAR_0->lengths = 0;
  VAR_0->types_alloc_size = 0;
  VAR_0->lengths_alloc_size = 0;
}
