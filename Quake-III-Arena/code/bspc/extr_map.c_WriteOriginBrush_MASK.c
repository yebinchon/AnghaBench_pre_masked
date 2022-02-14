
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__** p; } ;
typedef TYPE_1__ winding_t ;
typedef int* vec3_t ;
typedef int qboolean ;
typedef int FILE ;


 TYPE_1__* FUNC_0 (int*,float) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int *,char*,...) ;
 scalar_t__ VAR_4 ;

qboolean FUNC_4(FILE *VAR_5, vec3_t VAR_6)
{
 vec3_t VAR_7;
 float VAR_8;
 int VAR_9, VAR_10;
 winding_t *VAR_11;

 if (FUNC_3(VAR_5, " {\n") < 0) return 0;

 for (VAR_9 = 0; VAR_9 < 3; VAR_9++)
 {
  for (VAR_10 = -1; VAR_10 <= 1; VAR_10 += 2)
  {

   FUNC_2(VAR_7);
   VAR_7[VAR_9] = VAR_10;
   VAR_8 = VAR_6[VAR_9] * VAR_10 + 16;

   VAR_11 = FUNC_0(VAR_7, VAR_8);

   if (FUNC_3(VAR_5,"  ( %5i %5i %5i ) ", (int)VAR_11->p[0][0], (int)VAR_11->p[0][1], (int)VAR_11->p[0][2]) < 0) return 0;
   if (FUNC_3(VAR_5,"( %5i %5i %5i ) ", (int)VAR_11->p[1][0], (int)VAR_11->p[1][1], (int)VAR_11->p[1][2]) < 0) return 0;
   if (FUNC_3(VAR_5,"( %5i %5i %5i ) ", (int)VAR_11->p[2][0], (int)VAR_11->p[2][1], (int)VAR_11->p[2][2]) < 0) return 0;

   FUNC_1(VAR_11);



   if (VAR_4 == VAR_2)
   {
    if (FUNC_3(VAR_5, "generic/misc/origin 0 0 0 1 1") < 0) return 0;
   }
   else if (VAR_4 == VAR_0)
   {
    if (FUNC_3(VAR_5, "origin 0 0 0 1 1") < 0) return 0;
   }
   else
   {
    if (FUNC_3(VAR_5, "e1u1/origin 0 0 0 1 1") < 0) return 0;
   }

   if (VAR_4 == VAR_1)
   {

   }
   if (FUNC_3(VAR_5, "\n") < 0) return 0;
  }
 }
 if (FUNC_3(VAR_5, " }\n") < 0) return 0;
 VAR_3++;
 return 1;
}
