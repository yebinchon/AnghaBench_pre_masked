
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum aspect_t { ____Placeholder_aspect_t } aspect_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(float* VAR_5, float* VAR_6, enum aspect_t VAR_7, int VAR_8, int VAR_9) {
 float VAR_10, VAR_11;
 int VAR_12, VAR_13;

 if (VAR_7 == VAR_0) {
  VAR_12 = VAR_1;
  VAR_13 = VAR_2;
 } else {
  VAR_12 = VAR_3;
  VAR_13 = VAR_4;
 }

 VAR_10 = ((1024 - VAR_12) / 2) + VAR_8;
 VAR_11 = ((768 - VAR_13) / 2) + VAR_9;

 if ((*VAR_5 >= VAR_10)
  && (*VAR_5 <= (VAR_10 + VAR_12))
  && (*VAR_6 >= VAR_11)
  && (*VAR_6 <= (VAR_11 + VAR_13)))
 {
  *VAR_5 -= VAR_8;
  *VAR_6 -= VAR_9;

  return 1;
 }

 return 0;
}
