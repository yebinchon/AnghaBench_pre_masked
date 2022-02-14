
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

__attribute__((used)) static void FUNC_0(float* VAR_5, float* VAR_6, enum aspect_t VAR_7, unsigned int VAR_8, unsigned int VAR_9) {
 int VAR_10, VAR_11;

 if (VAR_7 == VAR_0) {
  VAR_10 = VAR_1;
  VAR_11 = VAR_2;
 } else {
  VAR_10 = VAR_3;
  VAR_11 = VAR_4;
 }

 *VAR_5 -= ((1024-VAR_10)/2);
 *VAR_6 -= ((768-VAR_11)/2);

 *VAR_5 = (*VAR_5 / (float)VAR_10) * VAR_8;
 *VAR_6 = (*VAR_6 / (float)VAR_11) * VAR_9;
}
