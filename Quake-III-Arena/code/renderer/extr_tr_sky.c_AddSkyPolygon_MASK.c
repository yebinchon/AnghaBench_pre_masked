
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* vec3_t ;


 int FUNC_0 (float*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 float** VAR_0 ;
 float** VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3 (int VAR_3, vec3_t VAR_4)
{
 int VAR_5,VAR_6;
 vec3_t VAR_7, VAR_8;
 float VAR_9, VAR_10, VAR_11;
 int VAR_12;
 float *VAR_13;

 static int VAR_14[6][3] =
 {
  {-2,3,1},
  {2,3,-1},

  {1,3,2},
  {-1,3,-2},

  {-2,-1,3},
  {-2,1,-3}



 };


 FUNC_1 (VAR_2, VAR_7);
 for (VAR_5=0, VAR_13=VAR_4 ; VAR_5<VAR_3 ; VAR_5++, VAR_13+=3)
 {
  FUNC_0 (VAR_13, VAR_7, VAR_7);
 }
 VAR_8[0] = FUNC_2(VAR_7[0]);
 VAR_8[1] = FUNC_2(VAR_7[1]);
 VAR_8[2] = FUNC_2(VAR_7[2]);
 if (VAR_8[0] > VAR_8[1] && VAR_8[0] > VAR_8[2])
 {
  if (VAR_7[0] < 0)
   VAR_12 = 1;
  else
   VAR_12 = 0;
 }
 else if (VAR_8[1] > VAR_8[2] && VAR_8[1] > VAR_8[0])
 {
  if (VAR_7[1] < 0)
   VAR_12 = 3;
  else
   VAR_12 = 2;
 }
 else
 {
  if (VAR_7[2] < 0)
   VAR_12 = 5;
  else
   VAR_12 = 4;
 }


 for (VAR_5=0 ; VAR_5<VAR_3 ; VAR_5++, VAR_4+=3)
 {
  VAR_6 = VAR_14[VAR_12][2];
  if (VAR_6 > 0)
   VAR_11 = VAR_4[VAR_6 - 1];
  else
   VAR_11 = -VAR_4[-VAR_6 - 1];
  if (VAR_11 < 0.001)
   continue;
  VAR_6 = VAR_14[VAR_12][0];
  if (VAR_6 < 0)
   VAR_9 = -VAR_4[-VAR_6 -1] / VAR_11;
  else
   VAR_9 = VAR_4[VAR_6-1] / VAR_11;
  VAR_6 = VAR_14[VAR_12][1];
  if (VAR_6 < 0)
   VAR_10 = -VAR_4[-VAR_6 -1] / VAR_11;
  else
   VAR_10 = VAR_4[VAR_6-1] / VAR_11;

  if (VAR_9 < VAR_1[0][VAR_12])
   VAR_1[0][VAR_12] = VAR_9;
  if (VAR_10 < VAR_1[1][VAR_12])
   VAR_1[1][VAR_12] = VAR_10;
  if (VAR_9 > VAR_0[0][VAR_12])
   VAR_0[0][VAR_12] = VAR_9;
  if (VAR_10 > VAR_0[1][VAR_12])
   VAR_0[1][VAR_12] = VAR_10;
 }
}
