
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv_user_dma {int ** map; int * SGlist; int ** bouncemap; } ;
struct ivtv_dma_page_info {int offset; int page_count; int tail; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 void* FUNC_2 (int *,int ) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (scalar_t__,void*,unsigned int) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,unsigned int,int) ;

int FUNC_9 (struct ivtv_user_dma *VAR_3, struct ivtv_dma_page_info *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 unsigned long VAR_8;

 if (VAR_5 < 0)
  return VAR_5;

 VAR_7 = VAR_4->offset;


 for (VAR_6 = 0; VAR_6 < VAR_4->page_count; VAR_6++) {
  unsigned int VAR_9 = (VAR_6 == VAR_4->page_count - 1) ?
   VAR_4->tail : VAR_2 - VAR_7;

  if (FUNC_0(VAR_3->map[VAR_5])) {
   void *VAR_10;

   if (VAR_3->bouncemap[VAR_5] == ((void*)0))
    VAR_3->bouncemap[VAR_5] = FUNC_1(VAR_0);
   if (VAR_3->bouncemap[VAR_5] == ((void*)0))
    return -1;
   FUNC_5(VAR_8);
   VAR_10 = FUNC_2(VAR_3->map[VAR_5], VAR_1) + VAR_7;
   FUNC_6(FUNC_7(VAR_3->bouncemap[VAR_5]) + VAR_7, VAR_10, VAR_9);
   FUNC_3(VAR_10, VAR_1);
   FUNC_4(VAR_8);
   FUNC_8(&VAR_3->SGlist[VAR_5], VAR_3->bouncemap[VAR_5], VAR_9, VAR_7);
  }
  else {
   FUNC_8(&VAR_3->SGlist[VAR_5], VAR_3->map[VAR_5], VAR_9, VAR_7);
  }
  VAR_7 = 0;
  VAR_5++;
 }
 return VAR_5;
}
