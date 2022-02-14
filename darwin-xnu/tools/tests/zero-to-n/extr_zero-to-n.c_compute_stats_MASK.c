
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;
typedef size_t uint32_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (float,int) ;
 float FUNC_1 (float) ;

__attribute__((used)) static void
FUNC_2(uint64_t *VAR_1, uint64_t VAR_2, float *VAR_3, uint64_t *VAR_4, uint64_t *VAR_5, float *VAR_6)
{
 uint32_t VAR_7;
 uint64_t VAR_8 = 0;
 uint64_t VAR_9 = 0;
 uint64_t VAR_10 = VAR_0;
 float VAR_11 = 0;
 float VAR_12 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_8 += VAR_1[VAR_7];
  VAR_9 = VAR_1[VAR_7] > VAR_9 ? VAR_1[VAR_7] : VAR_9;
  VAR_10 = VAR_1[VAR_7] < VAR_10 ? VAR_1[VAR_7] : VAR_10;
 }

 VAR_11 = ((float)VAR_8) / ((float)VAR_2);

 VAR_12 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_12 += FUNC_0((((float)VAR_1[VAR_7]) - VAR_11), 2);
 }

 VAR_12 /= VAR_2;
 VAR_12 = FUNC_1(VAR_12);

 *VAR_3 = VAR_11;
 *VAR_4 = VAR_9;
 *VAR_5 = VAR_10;
 *VAR_6 = VAR_12;
}
