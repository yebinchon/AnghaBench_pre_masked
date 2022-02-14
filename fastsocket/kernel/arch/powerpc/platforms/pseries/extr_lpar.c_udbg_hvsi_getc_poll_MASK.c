
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int*,int*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(void)
{
 unsigned char VAR_4;
 int VAR_5, VAR_6;

 if (VAR_2 == 0) {
  VAR_5 = FUNC_0(VAR_3, &VAR_2, VAR_1);
  if (VAR_5 != VAR_0 || VAR_1[0] != 0xff) {

   VAR_2 = 0;
  } else {

   for (VAR_6 = 4; VAR_6 < VAR_2; VAR_6++)
    VAR_1[VAR_6-4] = VAR_1[VAR_6];
   VAR_2 -= 4;
  }
 }

 if (VAR_2 <= 0 || VAR_2 > 256) {

  VAR_2 = 0;
  return -1;
 }

 VAR_4 = VAR_1[0];

 for (VAR_6 = 1; VAR_6 < VAR_2; VAR_6++) {
  VAR_1[VAR_6-1] = VAR_1[VAR_6];
 }
 VAR_2--;

 return VAR_4;
}
