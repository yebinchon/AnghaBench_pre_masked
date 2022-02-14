
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int chrm_mod; int gama_mod; int srgb_mod; TYPE_2__* pm; } ;
typedef TYPE_1__ transform_display ;
struct TYPE_11__ {scalar_t__ current_encoding; int current_gamma; } ;
typedef TYPE_2__ png_modifier ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*,scalar_t__) ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_6(transform_display *VAR_1)
{



   png_modifier *VAR_2 = VAR_1->pm;

   FUNC_4(VAR_2);

   if (FUNC_3(VAR_2))
   {
      if (FUNC_2(VAR_2))
         FUNC_5(&VAR_1->srgb_mod, VAR_2, VAR_0);

      else
      {

         FUNC_1(&VAR_1->gama_mod, VAR_2, VAR_2->current_gamma);

         if (VAR_2->current_encoding != 0)
            FUNC_0(&VAR_1->chrm_mod, VAR_2, VAR_2->current_encoding);
      }
   }
}
