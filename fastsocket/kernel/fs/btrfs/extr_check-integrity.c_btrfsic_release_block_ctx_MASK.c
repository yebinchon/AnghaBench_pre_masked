
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct btrfsic_block_data_ctx {unsigned int len; int ** datav; int ** pagev; int * mem_to_free; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct btrfsic_block_data_ctx *VAR_2)
{
 if (VAR_2->mem_to_free) {
  unsigned int VAR_3;

  FUNC_0(!VAR_2->datav);
  FUNC_0(!VAR_2->pagev);
  VAR_3 = (VAR_2->len + (u64)VAR_1 - 1) >>
       VAR_0;
  while (VAR_3 > 0) {
   VAR_3--;
   if (VAR_2->datav[VAR_3]) {
    FUNC_3(VAR_2->pagev[VAR_3]);
    VAR_2->datav[VAR_3] = ((void*)0);
   }
   if (VAR_2->pagev[VAR_3]) {
    FUNC_1(VAR_2->pagev[VAR_3]);
    VAR_2->pagev[VAR_3] = ((void*)0);
   }
  }

  FUNC_2(VAR_2->mem_to_free);
  VAR_2->mem_to_free = ((void*)0);
  VAR_2->pagev = ((void*)0);
  VAR_2->datav = ((void*)0);
 }
}
