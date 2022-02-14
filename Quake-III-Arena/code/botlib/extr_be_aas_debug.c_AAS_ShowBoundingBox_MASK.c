
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_2__ {int (* DebugLineCreate ) () ;int (* DebugLineShow ) (int,scalar_t__*,scalar_t__*,int ) ;} ;


 int FUNC_0 (scalar_t__*,scalar_t__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int* VAR_3 ;
 scalar_t__* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (int,scalar_t__*,scalar_t__*,int ) ;
 int FUNC_3 (int,scalar_t__*,scalar_t__*,int ) ;
 int FUNC_4 (int,scalar_t__*,scalar_t__*,int ) ;

void FUNC_5(vec3_t VAR_7, vec3_t VAR_8, vec3_t VAR_9)
{
 vec3_t VAR_10[8];
 int VAR_11[3];
 int VAR_12, VAR_13, VAR_14;


 VAR_10[0][0] = VAR_7[0] + VAR_9[0];
 VAR_10[0][1] = VAR_7[1] + VAR_9[1];
 VAR_10[0][2] = VAR_7[2] + VAR_9[2];

 VAR_10[1][0] = VAR_7[0] + VAR_8[0];
 VAR_10[1][1] = VAR_7[1] + VAR_9[1];
 VAR_10[1][2] = VAR_7[2] + VAR_9[2];

 VAR_10[2][0] = VAR_7[0] + VAR_8[0];
 VAR_10[2][1] = VAR_7[1] + VAR_8[1];
 VAR_10[2][2] = VAR_7[2] + VAR_9[2];

 VAR_10[3][0] = VAR_7[0] + VAR_9[0];
 VAR_10[3][1] = VAR_7[1] + VAR_8[1];
 VAR_10[3][2] = VAR_7[2] + VAR_9[2];

 FUNC_0(VAR_10[4], VAR_10[0], sizeof(vec3_t) * 4);
 for (VAR_12 = 0; VAR_12 < 4; VAR_12++) VAR_10[4 + VAR_12][2] = VAR_7[2] + VAR_8[2];

 for (VAR_12 = 0; VAR_12 < 4; VAR_12++)
 {
  for (VAR_13 = 0, VAR_14 = 0; VAR_13 < 3 && VAR_14 < VAR_1; VAR_14++)
  {
   if (!VAR_3[VAR_14])
   {
    VAR_3[VAR_14] = VAR_2.DebugLineCreate();
    VAR_11[VAR_13++] = VAR_3[VAR_14];
    VAR_4[VAR_14] = VAR_6;
    VAR_5++;
   }
   else if (!VAR_4[VAR_14])
   {
    VAR_11[VAR_13++] = VAR_3[VAR_14];
    VAR_4[VAR_14] = VAR_6;
   }
  }

  VAR_2.DebugLineShow(VAR_11[0], VAR_10[VAR_12],
         VAR_10[(VAR_12+1)&3], VAR_0);

  VAR_2.DebugLineShow(VAR_11[1], VAR_10[4+VAR_12],
         VAR_10[4+((VAR_12+1)&3)], VAR_0);

  VAR_2.DebugLineShow(VAR_11[2], VAR_10[VAR_12],
         VAR_10[4+VAR_12], VAR_0);
 }
}
