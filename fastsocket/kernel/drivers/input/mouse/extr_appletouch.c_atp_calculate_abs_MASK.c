
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0(int *VAR_1, int VAR_2, int VAR_3,
        int *VAR_4, int *VAR_5)
{
 int VAR_6;

 int VAR_7 = 0, VAR_8 = 0;
 int VAR_9 = 0;

 *VAR_5 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (VAR_1[VAR_6] < VAR_0) {
   if (VAR_9)
    VAR_9 = 0;

   continue;
  }
  if (VAR_6 < 1 ||
      (!VAR_9 && VAR_1[VAR_6 - 1] < VAR_1[VAR_6])) {
   (*VAR_5)++;
   VAR_9 = 1;
  } else if (VAR_6 > 0 && (VAR_1[VAR_6 - 1] - VAR_1[VAR_6] > VAR_0)) {
   VAR_9 = 0;
  }
  VAR_7 += (VAR_1[VAR_6] - VAR_0) * VAR_6;
  VAR_8 += (VAR_1[VAR_6] - VAR_0);
 }

 if (VAR_8 > 0) {
  *VAR_4 = VAR_8;
  return VAR_7 * VAR_3 / VAR_8;
 }

 return 0;
}
