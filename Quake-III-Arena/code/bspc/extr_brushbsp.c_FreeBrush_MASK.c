
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int numsides; TYPE_1__* sides; } ;
typedef TYPE_2__ bspbrush_t ;
struct TYPE_6__ {scalar_t__ winding; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

void FUNC_3 (bspbrush_t *VAR_3)
{
 int VAR_4;

 for (VAR_4=0 ; VAR_4<VAR_3->numsides ; VAR_4++)
  if (VAR_3->sides[VAR_4].winding)
   FUNC_1(VAR_3->sides[VAR_4].winding);
 if (VAR_2 == 1)
 {
  VAR_0--;
  VAR_1 -= FUNC_2(VAR_3);
  if (VAR_1 < 0) VAR_1 = 0;
 }
 FUNC_0(VAR_3);
}
