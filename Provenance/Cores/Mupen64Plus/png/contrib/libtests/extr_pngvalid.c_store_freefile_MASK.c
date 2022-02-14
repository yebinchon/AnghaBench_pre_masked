
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ npalette; struct TYPE_4__* palette; scalar_t__ datacount; int data; struct TYPE_4__* next; } ;
typedef TYPE_1__ png_store_file ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(png_store_file **VAR_0)
{
   if (*VAR_0 != ((void*)0))
   {
      FUNC_2(&(*VAR_0)->next);

      FUNC_1(&(*VAR_0)->data);
      (*VAR_0)->datacount = 0;
      if ((*VAR_0)->palette != ((void*)0))
      {
         FUNC_0((*VAR_0)->palette);
         (*VAR_0)->palette = ((void*)0);
         (*VAR_0)->npalette = 0;
      }
      FUNC_0(*VAR_0);
      *VAR_0 = ((void*)0);
   }
}
