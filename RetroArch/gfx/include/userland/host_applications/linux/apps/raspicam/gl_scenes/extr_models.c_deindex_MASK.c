
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLsizei ;



__attribute__((used)) static void FUNC_0(float *VAR_0, const float *VAR_1, const unsigned short *VAR_2, GLsizei VAR_3, GLsizei VAR_4)
{
   int VAR_5;
   for (VAR_5=0; VAR_5<VAR_4; VAR_5++) {
      int VAR_6 = VAR_3 * (VAR_2[0]-1);
      *VAR_0++ = VAR_1[VAR_6 + 0];
      *VAR_0++ = VAR_1[VAR_6 + 1];

      if (VAR_3 >= 3) *VAR_0++ = VAR_1[VAR_6 + 2];
      VAR_2 += 3;
   }
}
