
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* next; scalar_t__ add; scalar_t__ modify_fn; int chunk; } ;
struct TYPE_6__ {int intent; TYPE_5__ this; } ;
typedef TYPE_1__ srgb_modification ;
struct TYPE_7__ {TYPE_5__* modifications; } ;
typedef TYPE_2__ png_modifier ;
typedef int png_byte ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_1(srgb_modification *VAR_3, png_modifier *VAR_4, png_byte VAR_5)
{
   FUNC_0(&VAR_3->this);
   VAR_3->this.chunk = VAR_1;

   if (VAR_5 <= 3)
   {
      VAR_3->this.modify_fn = VAR_2;
      VAR_3->this.add = VAR_0;
      VAR_3->intent = VAR_5;
   }

   else
   {
      VAR_3->this.modify_fn = 0;
      VAR_3->this.add = 0;
      VAR_3->intent = 0;
   }

   VAR_3->this.next = VAR_4->modifications;
   VAR_4->modifications = &VAR_3->this;
}
