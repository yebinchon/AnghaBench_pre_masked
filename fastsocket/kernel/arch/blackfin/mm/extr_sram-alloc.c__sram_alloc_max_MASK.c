
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sram_piece {unsigned long size; struct sram_piece* next; } ;


 void* FUNC_0 (unsigned long,struct sram_piece*,struct sram_piece*) ;

__attribute__((used)) static void *FUNC_1(struct sram_piece *VAR_0,
    struct sram_piece *VAR_1,
    unsigned long *VAR_2)
{
 struct sram_piece *VAR_3, *VAR_4;

 if (!VAR_0 || !VAR_1)
  return ((void*)0);

 VAR_4 = VAR_3 = VAR_0->next;


 while (VAR_3 != ((void*)0)) {
  if (VAR_3->size > VAR_4->size)
   VAR_4 = VAR_3;
  VAR_3 = VAR_3->next;
 }

 if (!VAR_4)
  return ((void*)0);

 *VAR_2 = VAR_4->size;

 return FUNC_0(*VAR_2, VAR_0, VAR_1);
}
