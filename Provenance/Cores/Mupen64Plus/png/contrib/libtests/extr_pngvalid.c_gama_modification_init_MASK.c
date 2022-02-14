
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* modifications; } ;
typedef TYPE_1__ png_modifier ;
typedef scalar_t__ png_fixed_point ;
struct TYPE_8__ {struct TYPE_8__* next; int add; int modify_fn; int chunk; } ;
struct TYPE_7__ {TYPE_3__ this; scalar_t__ gamma; } ;
typedef TYPE_2__ gama_modification ;


 int VAR_0 ;
 int VAR_1 ;
 double FUNC_0 (double) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_2(gama_modification *VAR_3, png_modifier *VAR_4, double VAR_5)
{
   double VAR_6;

   FUNC_1(&VAR_3->this);
   VAR_3->this.chunk = VAR_1;
   VAR_3->this.modify_fn = VAR_2;
   VAR_3->this.add = VAR_0;
   VAR_6 = FUNC_0(VAR_5);
   VAR_3->gamma = (png_fixed_point)VAR_6;
   VAR_3->this.next = VAR_4->modifications;
   VAR_4->modifications = &VAR_3->this;
}
