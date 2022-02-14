
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int store_palette_entry ;
struct TYPE_6__ {TYPE_1__* current; int pread; } ;
typedef TYPE_2__ png_store ;
struct TYPE_5__ {int npalette; int * palette; } ;


 int FUNC_0 (TYPE_2__*,int ,char*,int) ;

__attribute__((used)) static store_palette_entry *
FUNC_1(png_store *VAR_0, int *VAR_1)
{



   if (VAR_0->current == ((void*)0))
   {
      FUNC_0(VAR_0, VAR_0->pread, "no current stream for palette", 1);
      return ((void*)0);
   }


   *VAR_1 = VAR_0->current->npalette;
   return VAR_0->current->palette;
}
