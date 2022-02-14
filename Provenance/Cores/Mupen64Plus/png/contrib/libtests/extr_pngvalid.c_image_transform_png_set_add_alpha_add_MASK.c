
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int png_byte ;
struct TYPE_4__ {struct TYPE_4__ const* next; } ;
typedef TYPE_1__ image_transform ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(image_transform *VAR_2,
    const image_transform **VAR_3, png_byte VAR_4, png_byte VAR_5)
{
   VAR_2->next = *VAR_3;
   *VAR_3 = VAR_2;

   return VAR_5 >= 8 && (VAR_4 == VAR_1 ||
           VAR_4 == VAR_0);
}
