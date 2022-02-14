
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct atmel_private {scalar_t__ reg_domain; } ;
struct TYPE_3__ {scalar_t__ reg_domain; int min; int max; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_1(struct atmel_private *VAR_1, int VAR_2)
{


 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
  if (VAR_1->reg_domain == VAR_0[VAR_3].reg_domain) {
   if (VAR_2 >= VAR_0[VAR_3].min &&
       VAR_2 <= VAR_0[VAR_3].max)
    return 0;
   else
    return VAR_0[VAR_3].min;
  }
 return 0;
}
