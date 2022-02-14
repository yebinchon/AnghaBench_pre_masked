
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32 ;
typedef int int32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (double) ;

__attribute__((used)) static void FUNC_2(void) {
 int32 VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1 / 4; VAR_5++) {
  VAR_3[VAR_5] = (uint32)FUNC_0(FUNC_1(2.0 * VAR_2 * VAR_5 / VAR_1));
 }

 for (VAR_5 = 0; VAR_5 < VAR_1 / 4; VAR_5++) {
  VAR_3[VAR_1 / 2 - 1 - VAR_5] = VAR_3[VAR_5];
 }

 for (VAR_5 = 0; VAR_5 < VAR_1 / 2; VAR_5++) {
  VAR_3[VAR_1 / 2 + VAR_5] = (uint32)(VAR_0 + VAR_0 + VAR_3[VAR_5]);
 }

 for (VAR_5 = 0; VAR_5 < VAR_1 / 2; VAR_5++)
  VAR_4[VAR_5] = VAR_3[VAR_5];
 for (VAR_5 = VAR_1 / 2; VAR_5 < VAR_1; VAR_5++)
  VAR_4[VAR_5] = VAR_3[0];
}
