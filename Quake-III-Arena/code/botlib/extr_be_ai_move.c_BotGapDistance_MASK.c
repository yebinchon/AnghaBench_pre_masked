
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_5__ {int fraction; int* endpos; int startsolid; } ;
typedef TYPE_1__ aas_trace_t ;
struct TYPE_7__ {scalar_t__ value; } ;
struct TYPE_6__ {float value; } ;


 int FUNC_0 (int*) ;
 TYPE_1__ FUNC_1 (int*,int*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int*,int*) ;
 int FUNC_3 (int*,float,int*,int*) ;
 TYPE_3__* VAR_2 ;
 TYPE_2__* VAR_3 ;

float FUNC_4(vec3_t VAR_4, vec3_t VAR_5, int VAR_6)
{
 float VAR_7, VAR_8;
 vec3_t VAR_9, VAR_10;
 aas_trace_t VAR_11;


 VAR_8 = VAR_4[2];

 {
  FUNC_2(VAR_4, VAR_9);
  FUNC_2(VAR_4, VAR_10);
  VAR_10[2] -= 60;
  VAR_11 = FUNC_1(VAR_9, VAR_10, VAR_1, VAR_6);
  if (VAR_11.fraction >= 1) return 1;
  VAR_8 = VAR_11.endpos[2] + 1;
 }

 for (VAR_7 = 8; VAR_7 <= 100; VAR_7 += 8)
 {
  FUNC_3(VAR_4, VAR_7, VAR_5, VAR_9);
  VAR_9[2] = VAR_8 + 24;
  FUNC_2(VAR_9, VAR_10);
  VAR_10[2] -= 48 + VAR_2->value;
  VAR_11 = FUNC_1(VAR_9, VAR_10, VAR_1, VAR_6);

  if (!VAR_11.startsolid)
  {

   if (VAR_11.endpos[2] < VAR_8 - VAR_3->value - 8)
   {
    FUNC_2(VAR_11.endpos, VAR_10);
    VAR_10[2] -= 20;
    if (FUNC_0(VAR_10) & VAR_0) break;


    return VAR_7;
   }
   VAR_8 = VAR_11.endpos[2];
  }
 }
 return 0;
}
