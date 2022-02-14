
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_4__ {int size; } ;
typedef TYPE_1__ block_struct ;
struct TYPE_5__ {scalar_t__ blockfreespace; int isbufferfull; int getsectsize; TYPE_1__* block; } ;


 TYPE_2__* VAR_0 ;

block_struct * FUNC_0(u8 * VAR_1) {
  u32 VAR_2;

  for(VAR_2 = 0; VAR_2 < 200; VAR_2++)
  {
     if (VAR_0->block[VAR_2].size == -1)
     {
        VAR_0->blockfreespace--;

        if (VAR_0->blockfreespace <= 0) VAR_0->isbufferfull = 1;

        VAR_0->block[VAR_2].size = VAR_0->getsectsize;

        *VAR_1 = (u8)VAR_2;
        return (VAR_0->block + VAR_2);
     }
  }

  VAR_0->isbufferfull = 1;

  return ((void*)0);
}
