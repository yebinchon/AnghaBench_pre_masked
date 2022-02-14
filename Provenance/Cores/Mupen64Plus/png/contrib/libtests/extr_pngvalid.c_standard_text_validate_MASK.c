
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* ps; } ;
typedef TYPE_3__ standard_display ;
typedef int png_uint_32 ;
typedef int * png_textp ;
typedef int png_infop ;
typedef int png_const_structp ;
struct TYPE_6__ {TYPE_1__* current; } ;
struct TYPE_5__ {char* name; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int **,int *) ;
 int FUNC_2 (char*,char*,unsigned long) ;
 int FUNC_3 (int ,int *,char*,char*) ;

__attribute__((used)) static void
FUNC_4(standard_display *VAR_0, png_const_structp VAR_1,
   png_infop VAR_2, int VAR_3)
{
   png_textp VAR_4 = ((void*)0);
   png_uint_32 VAR_5 = FUNC_1(VAR_1, VAR_2, &VAR_4, ((void*)0));

   if (VAR_5 == 2 && VAR_4 != ((void*)0))
   {
      FUNC_3(VAR_1, VAR_4, "image name", VAR_0->ps->current->name);





      if (VAR_3)
         FUNC_3(VAR_1, VAR_4+1, "end marker", "end");
   }

   else
   {
      char VAR_6[64];

      FUNC_2(VAR_6, "expected two text items, got %lu",
         (unsigned long)VAR_5);
      FUNC_0(VAR_1, VAR_6);
   }
}
