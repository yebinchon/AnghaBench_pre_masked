
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* store_palette ;
struct TYPE_8__ {scalar_t__ is_transparent; int npalette; TYPE_1__* palette; } ;
typedef TYPE_3__ standard_display ;
typedef int png_infop ;
typedef int png_const_structp ;
struct TYPE_7__ {scalar_t__ red; scalar_t__ green; scalar_t__ blue; scalar_t__ alpha; } ;
struct TYPE_6__ {scalar_t__ red; scalar_t__ green; scalar_t__ blue; scalar_t__ alpha; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int*,int ,int ) ;
 size_t FUNC_2 (char*,int,size_t,char*) ;
 size_t FUNC_3 (char*,int,size_t,int) ;

__attribute__((used)) static void
FUNC_4(standard_display *VAR_0, png_const_structp VAR_1,
   png_infop VAR_2)
{
   int VAR_3;
   store_palette VAR_4;

   if (FUNC_1(VAR_4, &VAR_3, VAR_1, VAR_2) != VAR_0->is_transparent)
      FUNC_0(VAR_1, "validate: palette transparency changed");

   if (VAR_3 != VAR_0->npalette)
   {
      size_t VAR_5 = 0;
      char VAR_6[64];

      VAR_5 = FUNC_2(VAR_6, sizeof VAR_6, VAR_5, "validate: palette size changed: ");
      VAR_5 = FUNC_3(VAR_6, sizeof VAR_6, VAR_5, VAR_0->npalette);
      VAR_5 = FUNC_2(VAR_6, sizeof VAR_6, VAR_5, " -> ");
      VAR_5 = FUNC_3(VAR_6, sizeof VAR_6, VAR_5, VAR_3);
      FUNC_0(VAR_1, VAR_6);
   }

   {
      int VAR_7 = VAR_3;

      while (--VAR_7 >= 0)
         if (VAR_4[VAR_7].red != VAR_0->palette[VAR_7].red ||
            VAR_4[VAR_7].green != VAR_0->palette[VAR_7].green ||
            VAR_4[VAR_7].blue != VAR_0->palette[VAR_7].blue ||
            VAR_4[VAR_7].alpha != VAR_0->palette[VAR_7].alpha)
            FUNC_0(VAR_1, "validate: PLTE or tRNS chunk changed");
   }
}
