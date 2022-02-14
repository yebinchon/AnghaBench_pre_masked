
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vec_t ;
typedef int vec3_t ;
struct TYPE_2__ {int point; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_8 ;
 size_t VAR_9 ;
 int* VAR_10 ;

void FUNC_7 (vec_t VAR_11, vec_t VAR_12, int VAR_13, int VAR_14, int VAR_15)
{
 int VAR_16, VAR_17;
 vec_t VAR_18;
 vec3_t VAR_19;
 vec3_t VAR_20;
 vec3_t VAR_21;
 vec_t VAR_22;
 vec3_t VAR_23;

 if (VAR_13 == VAR_14)
 {
  VAR_2++;
  return;
 }

 for (VAR_17=VAR_15 ; VAR_17<VAR_8 ; VAR_17++)
 {
  VAR_16 = VAR_7[VAR_17];
  if (VAR_16==VAR_13 || VAR_16 == VAR_14)
   continue;

  FUNC_2 (VAR_4[VAR_16].point, VAR_23);

  FUNC_5 (VAR_23, VAR_6, VAR_19);
  VAR_18 = FUNC_0 (VAR_19, VAR_5);
  if (VAR_18 <=VAR_11 || VAR_18 >= VAR_12)
   continue;
  FUNC_4 (VAR_6, VAR_18, VAR_5, VAR_20);
  FUNC_5 (VAR_23, VAR_20, VAR_21);
  VAR_22 = FUNC_3 (VAR_21);

  if (FUNC_6(VAR_22) > VAR_1)
   continue;


  VAR_3++;
  FUNC_7 (VAR_11, VAR_18, VAR_13, VAR_16, VAR_17+1);
  FUNC_7 (VAR_18, VAR_12, VAR_16, VAR_14, VAR_17+1);
  return;
 }


 if (VAR_9 >= VAR_0)
  FUNC_1 ("MAX_SUPERVERTS");
 VAR_10[VAR_9] = VAR_13;
 VAR_9++;
}
