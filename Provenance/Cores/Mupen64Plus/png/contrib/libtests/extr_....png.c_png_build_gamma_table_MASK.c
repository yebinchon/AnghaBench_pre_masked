
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_3__* png_structrp ;
typedef unsigned int png_byte ;
struct TYPE_11__ {scalar_t__ gamma; } ;
struct TYPE_10__ {unsigned int red; unsigned int green; unsigned int blue; unsigned int gray; } ;
struct TYPE_12__ {scalar_t__ screen_gamma; int transformations; int color_type; unsigned int gamma_shift; TYPE_2__ colorspace; int * gamma_16_from_1; int * gamma_16_to_1; int * gamma_16_table; TYPE_1__ sig_bit; int * gamma_from_1; int * gamma_to_1; int * gamma_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*,int **,unsigned int,scalar_t__) ;
 int FUNC_1 (TYPE_3__*,int **,unsigned int,scalar_t__) ;
 int FUNC_2 (TYPE_3__*,int **,scalar_t__) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (TYPE_3__*,char*) ;

void
FUNC_9(png_structrp VAR_7, int VAR_8)
{
   FUNC_3(1, "in png_build_gamma_table");







   if (VAR_7->gamma_table != ((void*)0) || VAR_7->gamma_16_table != ((void*)0))
   {
      FUNC_8(VAR_7, "gamma table being rebuilt");
      FUNC_4(VAR_7);
   }

   if (VAR_8 <= 8)
   {
      FUNC_2(VAR_7, &VAR_7->gamma_table,
          VAR_7->screen_gamma > 0 ?
          FUNC_7(VAR_7->colorspace.gamma,
          VAR_7->screen_gamma) : VAR_3);
   }
}
