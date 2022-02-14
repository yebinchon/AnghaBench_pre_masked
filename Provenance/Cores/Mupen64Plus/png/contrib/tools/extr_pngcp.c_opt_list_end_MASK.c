
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct display {scalar_t__* value; } ;
typedef size_t png_byte ;
struct TYPE_4__ {size_t value_count; TYPE_1__* values; } ;
struct TYPE_3__ {scalar_t__ name; scalar_t__ value; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_0(struct display *VAR_4, png_byte VAR_5, png_byte VAR_6)
{
   if (VAR_1[VAR_5].values[VAR_6].name == VAR_3)
      return VAR_6+1U >= VAR_1[VAR_5].value_count ||
         VAR_1[VAR_5].values[VAR_6+1U].name != VAR_2 ||
         VAR_1[VAR_5].values[VAR_6+1U].value <= VAR_4->value[VAR_5] ;

   else
      return VAR_6+1U >= VAR_1[VAR_5].value_count ||
         VAR_1[VAR_5].values[VAR_6+1U].name == VAR_0 ;
}
