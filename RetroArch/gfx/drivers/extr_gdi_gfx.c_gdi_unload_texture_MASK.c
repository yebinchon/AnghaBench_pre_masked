
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdi_texture {int * bmp; struct gdi_texture* data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct gdi_texture*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, uintptr_t VAR_1)
{
   struct gdi_texture *VAR_2 = (struct gdi_texture*)VAR_1;

   if (!VAR_2)
      return;

   if (VAR_2->data)
      FUNC_1(VAR_2->data);

   if (VAR_2->bmp)
   {
      FUNC_0(VAR_2->bmp);
      VAR_2->bmp = ((void*)0);
   }

   FUNC_1(VAR_2);
}
