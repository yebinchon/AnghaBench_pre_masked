
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int normal_color; } ;
struct TYPE_6__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_8__ {TYPE_2__ colors; TYPE_1__ pointer; } ;
typedef TYPE_3__ rgui_t ;
struct TYPE_9__ {scalar_t__ data; } ;


 int FUNC_0 (unsigned int*,unsigned int*,size_t*) ;
 int FUNC_1 (scalar_t__,unsigned int,unsigned int,scalar_t__,scalar_t__,int,int,int ) ;
 TYPE_4__ VAR_0 ;

__attribute__((used)) static void FUNC_2(rgui_t *VAR_1)
{
   size_t VAR_2;
   unsigned VAR_3, VAR_4;

   FUNC_0(&VAR_3, &VAR_4,
         &VAR_2);

   if (VAR_0.data)
   {
      FUNC_1(VAR_0.data, VAR_3, VAR_4, VAR_1->pointer.x, VAR_1->pointer.y - 5, 1, 11, VAR_1->colors.normal_color);
      FUNC_1(VAR_0.data, VAR_3, VAR_4, VAR_1->pointer.x - 5, VAR_1->pointer.y, 11, 1, VAR_1->colors.normal_color);
   }
}
