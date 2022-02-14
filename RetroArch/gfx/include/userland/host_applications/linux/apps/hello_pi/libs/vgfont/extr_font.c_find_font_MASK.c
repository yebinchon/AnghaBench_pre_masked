
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int ptsize; int font; struct TYPE_6__* next; } ;
typedef TYPE_1__ gx_font_cache_entry_t ;
typedef int VGFT_FONT_T ;
typedef scalar_t__ VCOS_STATUS_T ;
struct TYPE_7__ {int len; int mem; } ;


 int FUNC_0 (char*,scalar_t__,...) ;
 scalar_t__ VAR_0 ;
 TYPE_5__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (int *,int,int,int) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static VGFT_FONT_T *FUNC_7(const char *VAR_4, uint32_t VAR_5)
{
   int VAR_6, VAR_7 = 0, VAR_8 = 0;
   VCOS_STATUS_T VAR_9;
   gx_font_cache_entry_t *VAR_10;

   VAR_6 = VAR_5 << 6;

   for (VAR_10 = VAR_3; VAR_10; VAR_10 = VAR_10->next)
   {
      if (VAR_10->ptsize == VAR_6)
         return &VAR_10->font;
   }

   VAR_10 = FUNC_2(sizeof(*VAR_10), "font");
   if (!VAR_10)
      return ((void*)0);

   VAR_10->ptsize = VAR_6;

   VAR_9 = FUNC_4(&VAR_10->font);
   if (VAR_9 != VAR_0)
   {
      FUNC_1(VAR_10);
      return ((void*)0);
   }


   VAR_9 = FUNC_5(&VAR_10->font, VAR_1.mem, VAR_1.len);
   if (VAR_9 != VAR_0)
   {
      FUNC_0("Could not load font from memory: %d", VAR_9);
      FUNC_6(&VAR_10->font);
      FUNC_1(VAR_10);
      return ((void*)0);
   }

   VAR_9 = FUNC_3(&VAR_10->font, VAR_6, VAR_7, VAR_8);
   if (VAR_9 != VAR_0)
   {
      FUNC_0("Could not convert font '%s' at size %d", VAR_2, VAR_6);
      FUNC_6(&VAR_10->font);
      FUNC_1(VAR_10);
      return ((void*)0);
   }

   VAR_10->next = VAR_3;
   VAR_3 = VAR_10;

   return &VAR_10->font;
}
