
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {int color; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(int VAR_1)
{
   uint32_t VAR_2;
   for (VAR_2 = 0; VAR_2 != FUNC_0(VAR_0); ++VAR_2) {
      VAR_0[VAR_2].color = (VAR_1 == 0) ?
         FUNC_1(VAR_0[VAR_2].color) :
         FUNC_2(VAR_0[VAR_2].color);
   }
}
