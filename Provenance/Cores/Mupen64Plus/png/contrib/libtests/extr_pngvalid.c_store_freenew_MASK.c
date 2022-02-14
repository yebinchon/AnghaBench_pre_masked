
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int chunkpos; int chunklen; scalar_t__ npalette; int * palette; scalar_t__ IDAT_bits; scalar_t__ IDAT_size; scalar_t__ chunktype; scalar_t__ writepos; int new; } ;
typedef TYPE_1__ png_store ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(png_store *VAR_0)
{
   FUNC_1(&VAR_0->new);
   VAR_0->writepos = 0;
   VAR_0->chunkpos = 8;
   VAR_0->chunktype = 0;
   VAR_0->chunklen = 16;
   VAR_0->IDAT_size = 0;
   VAR_0->IDAT_bits = 0;
   if (VAR_0->palette != ((void*)0))
   {
      FUNC_0(VAR_0->palette);
      VAR_0->palette = ((void*)0);
      VAR_0->npalette = 0;
   }
}
