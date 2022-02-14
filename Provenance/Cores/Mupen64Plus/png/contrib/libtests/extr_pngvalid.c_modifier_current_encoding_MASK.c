
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int current_gamma; TYPE_2__* current_encoding; } ;
typedef TYPE_1__ png_modifier ;
struct TYPE_7__ {int gamma; } ;
typedef TYPE_2__ color_encoding ;


 int FUNC_0 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void
FUNC_1(const png_modifier *VAR_0, color_encoding *VAR_1)
{
   if (VAR_0->current_encoding != 0)
      *VAR_1 = *VAR_0->current_encoding;

   else
      FUNC_0(VAR_1, 0, sizeof *VAR_1);

   VAR_1->gamma = VAR_0->current_gamma;
}
