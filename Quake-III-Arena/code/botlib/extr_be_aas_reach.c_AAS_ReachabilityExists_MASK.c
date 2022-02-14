
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_3__ {int areanum; struct TYPE_3__* next; } ;
typedef TYPE_1__ aas_lreachability_t ;


 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

qboolean FUNC_0(int VAR_3, int VAR_4)
{
 aas_lreachability_t *VAR_5;

 for (VAR_5 = VAR_0[VAR_3]; VAR_5; VAR_5 = VAR_5->next)
 {
  if (VAR_5->areanum == VAR_4) return VAR_2;
 }
 return VAR_1;
}
