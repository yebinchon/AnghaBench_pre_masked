
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static u64 FUNC_3(u64 *VAR_4, int VAR_5)
{
 u64 VAR_6, VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_6 = FUNC_1();
  if (VAR_5)
   *VAR_4 = FUNC_2(VAR_0) & 0xFFFFFFFF;
  else
   *VAR_4 = FUNC_0();
  VAR_7 = FUNC_1();
  if ((VAR_7 - VAR_6) < VAR_2)
   return VAR_7;
 }
 return VAR_3;
}
