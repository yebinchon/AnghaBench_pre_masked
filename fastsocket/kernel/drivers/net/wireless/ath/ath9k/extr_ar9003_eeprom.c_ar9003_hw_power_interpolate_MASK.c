
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
typedef int int32_t ;


 int FUNC_0 (int,int,int,int,int) ;

__attribute__((used)) static int FUNC_1(int32_t VAR_0,
           int32_t *VAR_1, int32_t *VAR_2, u_int16_t VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = 0, VAR_6 = 0, VAR_7 = 0;
 int VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12 = 0;

 VAR_7 = 0;
 VAR_10 = 0;


 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_11 = VAR_0 - VAR_1[VAR_4];


  if (VAR_11 <= 0) {
   if (!VAR_10 || VAR_11 > (VAR_0 - VAR_8)) {

    VAR_8 = VAR_1[VAR_4];
    VAR_9 = VAR_2[VAR_4];
    VAR_10 = 1;
   }
  }

  if (VAR_11 >= 0) {
   if (!VAR_7 || VAR_11 < (VAR_0 - VAR_5)) {

    VAR_5 = VAR_1[VAR_4];
    VAR_6 = VAR_2[VAR_4];
    VAR_7 = 1;
   }
  }
 }


 if (VAR_7) {

  if (VAR_10) {

   if (VAR_8 == VAR_5)
    VAR_12 = VAR_6;
   else
    VAR_12 = FUNC_0(VAR_0, VAR_5, VAR_8, VAR_6, VAR_9);
  } else
   VAR_12 = VAR_6;
 } else if (VAR_10)
  VAR_12 = VAR_9;
 else
  VAR_12 = -(1 << 30);
 return VAR_12;
}
