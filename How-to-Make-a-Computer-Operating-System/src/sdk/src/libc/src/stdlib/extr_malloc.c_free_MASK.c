
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct malloc_header {int size; scalar_t__ used; } ;


 scalar_t__ VAR_0 ;

void FUNC_0(void *VAR_1)
{
 struct malloc_header *VAR_2, *VAR_3;


 VAR_2 = (struct malloc_header *) (VAR_1 - sizeof(struct malloc_header));





 while ((VAR_3 = (struct malloc_header *) ((char *) VAR_2 + VAR_2->size))
             && VAR_3 < (struct malloc_header *) VAR_0
      && VAR_3->used == 0)
   VAR_2->size += VAR_3->size;


 VAR_2->used = 0;
}
