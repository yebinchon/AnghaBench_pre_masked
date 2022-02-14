
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int boolean_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 () ;
 int** VAR_1 ;

__attribute__((used)) static boolean_t
FUNC_5(uint32_t VAR_2)
{
 uint64_t VAR_3;
 boolean_t VAR_4;
 int VAR_5 = FUNC_4();

 if (VAR_2 < 2) {
  return 1;
 }

 VAR_3 = FUNC_2(VAR_0) | 0x3;
 VAR_4 = (VAR_3 & FUNC_1(VAR_2)) != 0;

 if (VAR_4) {
  VAR_3 &= FUNC_0(VAR_2);
  FUNC_3(VAR_0, VAR_3);
 }

 VAR_1[VAR_5][0] = VAR_3;
 return VAR_4;
}
