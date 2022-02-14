
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_2__ {int crb; int pprb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int ** VAR_3 ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_4, void *VAR_5)
{
 int VAR_6;

 for( VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  if (VAR_3[VAR_6] != ((void*)0))
   if (FUNC_1(VAR_3[VAR_6])->crb & 128) {
    VAR_2 = FUNC_1(VAR_3[VAR_6])->pprb;
    FUNC_0(VAR_3[VAR_6]);
   }
 return VAR_0;
}
