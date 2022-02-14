
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint16_t ;
typedef scalar_t__ int32_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(uint64_t *VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{
 uint64_t VAR_3 = *VAR_0++;
 int32_t VAR_4 = FUNC_1(VAR_3);
 uint16_t VAR_5 = FUNC_3(VAR_3);
 uint16_t VAR_6 = FUNC_2(VAR_3);
 int32_t VAR_7 = (int32_t)VAR_1, VAR_8;

 FUNC_0(VAR_5 != 0);
 FUNC_0(VAR_6 != 0);

 if (VAR_7 < VAR_4) {



  VAR_0[0] += VAR_2;
  return;
 }

 VAR_8 = (VAR_7 - VAR_4) / VAR_5;

 if (VAR_8 < VAR_6) {
  VAR_0[VAR_8 + 1] += VAR_2;
  return;
 }




 VAR_0[VAR_6 + 1] += VAR_2;
}
