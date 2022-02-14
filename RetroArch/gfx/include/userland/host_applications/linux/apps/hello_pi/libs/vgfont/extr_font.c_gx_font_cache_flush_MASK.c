
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gx_font_cache_entry_t {int font; struct gx_font_cache_entry_t* next; } ;


 struct gx_font_cache_entry_t* VAR_0 ;
 int FUNC_0 (struct gx_font_cache_entry_t*) ;
 int FUNC_1 (int *) ;

void FUNC_2(void)
{
   while (VAR_0 != ((void*)0))
   {
      struct gx_font_cache_entry_t *VAR_1 = VAR_0->next;
      FUNC_1(&VAR_0->font);
      FUNC_0(VAR_0);
      VAR_0 = VAR_1;
   }
}
