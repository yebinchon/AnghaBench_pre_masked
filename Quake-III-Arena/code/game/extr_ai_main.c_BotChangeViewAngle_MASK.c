
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float) ;

float FUNC_1(float VAR_0, float VAR_1, float VAR_2) {
 float VAR_3;

 VAR_0 = FUNC_0(VAR_0);
 VAR_1 = FUNC_0(VAR_1);
 if (VAR_0 == VAR_1) return VAR_0;
 VAR_3 = VAR_1 - VAR_0;
 if (VAR_1 > VAR_0) {
  if (VAR_3 > 180.0) VAR_3 -= 360.0;
 }
 else {
  if (VAR_3 < -180.0) VAR_3 += 360.0;
 }
 if (VAR_3 > 0) {
  if (VAR_3 > VAR_2) VAR_3 = VAR_2;
 }
 else {
  if (VAR_3 < -VAR_2) VAR_3 = -VAR_2;
 }
 return FUNC_0(VAR_0 + VAR_3);
}
