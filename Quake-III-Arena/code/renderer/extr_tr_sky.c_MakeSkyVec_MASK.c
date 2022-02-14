
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_3__ {double zFar; } ;
struct TYPE_4__ {TYPE_1__ viewParms; } ;


 TYPE_2__ VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;

__attribute__((used)) static void FUNC_0( float VAR_3, float VAR_4, int VAR_5, float VAR_6[2], vec3_t VAR_7 )
{

 static int VAR_8[6][3] =
 {
  {3,-1,2},
  {-3,1,2},

  {1,3,2},
  {-1,-3,2},

  {-2,-1,3},
  {2,-1,-3}
 };

 vec3_t VAR_9;
 int VAR_10, VAR_11;
 float VAR_12;

 VAR_12 = VAR_0.viewParms.zFar / 1.75;
 VAR_9[0] = VAR_3*VAR_12;
 VAR_9[1] = VAR_4*VAR_12;
 VAR_9[2] = VAR_12;

 for (VAR_10=0 ; VAR_10<3 ; VAR_10++)
 {
  VAR_11 = VAR_8[VAR_5][VAR_10];
  if (VAR_11 < 0)
  {
   VAR_7[VAR_10] = -VAR_9[-VAR_11 - 1];
  }
  else
  {
   VAR_7[VAR_10] = VAR_9[VAR_11 - 1];
  }
 }


 VAR_3 = (VAR_3+1)*0.5;
 VAR_4 = (VAR_4+1)*0.5;
 if (VAR_3 < VAR_2)
 {
  VAR_3 = VAR_2;
 }
 else if (VAR_3 > VAR_1)
 {
  VAR_3 = VAR_1;
 }

 if (VAR_4 < VAR_2)
 {
  VAR_4 = VAR_2;
 }
 else if (VAR_4 > VAR_1)
 {
  VAR_4 = VAR_1;
 }

 VAR_4 = 1.0 - VAR_4;


 if ( VAR_6 )
 {
  VAR_6[0] = VAR_3;
  VAR_6[1] = VAR_4;
 }
}
