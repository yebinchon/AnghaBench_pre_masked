
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t int32 ;
typedef scalar_t__ int16 ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 size_t VAR_2 ;
 double VAR_3 ;
 double FUNC_0 (int,double) ;

__attribute__((used)) static void FUNC_1(void) {
 int32 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2 + VAR_2; VAR_4++) {
  VAR_1[VAR_4] = (int16)((double)((1 << VAR_0) - 1) * FUNC_0(10, -(double)VAR_4 * VAR_3 / 20));
  if (VAR_4 >= VAR_2) VAR_1[VAR_4] = 0;
  VAR_1[VAR_4 + VAR_2 + VAR_2] = (int16)(-VAR_1[VAR_4]);
 }
}
