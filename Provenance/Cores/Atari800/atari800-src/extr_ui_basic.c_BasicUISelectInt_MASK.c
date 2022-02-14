
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int item_values ;


 int FUNC_0 (int,int,int,int,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int,char const**,int *,int *,int *,int *,int,int,int,int,int,int ,int *,int *) ;
 int FUNC_2 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_3(int VAR_1, int VAR_2, int VAR_3)
{
 static char VAR_4[100][4];
 static const char *VAR_5[100];
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;
 if (VAR_2 < 0 || VAR_3 > 99 || VAR_2 > VAR_3)
  return VAR_1;
 VAR_7 = 0;
 for (VAR_6 = VAR_2; VAR_6 <= VAR_3; VAR_6++) {
  VAR_5[VAR_7] = VAR_4[VAR_7];
  FUNC_2(VAR_4[VAR_7], sizeof(VAR_4[0]), "%2d", VAR_6);
  VAR_7++;
 }
 if (VAR_7 <= 10) {
  VAR_8 = VAR_7;
  VAR_9 = 1;
 }
 else {
  VAR_8 = 10;
  VAR_9 = (VAR_7 + 9) / 10;
 }
 VAR_10 = (39 - 3 * VAR_9) >> 1;
 VAR_11 = (22 - VAR_8) >> 1;
 VAR_12 = VAR_10 + 3 * VAR_9;
 VAR_13 = VAR_11 + VAR_8 + 1;
 FUNC_0(0x9a, 0x94, VAR_10, VAR_11, VAR_12, VAR_13);
 VAR_6 = FUNC_1((VAR_1 >= VAR_2 && VAR_1 <= VAR_3) ? VAR_1 - VAR_2 : 0,
  VAR_7, VAR_5, ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_8, VAR_9, VAR_10 + 1, VAR_11 + 1, 2, VAR_0, ((void*)0), ((void*)0));
 return VAR_6 >= 0 ? VAR_6 + VAR_2 : VAR_1;
}
