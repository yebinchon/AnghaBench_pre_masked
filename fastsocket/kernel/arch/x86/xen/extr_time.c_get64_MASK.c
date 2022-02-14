
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;


 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static u64 FUNC_1(const u64 *VAR_1)
{
 u64 VAR_2;

 if (VAR_0 < 64) {
  u32 *VAR_3 = (u32 *)VAR_1;
  u32 VAR_4, VAR_5;







  do {
   VAR_4 = VAR_3[1];
   FUNC_0();
   VAR_5 = VAR_3[0];
   FUNC_0();
  } while (VAR_3[1] != VAR_4);

  VAR_2 = (((u64)VAR_4) << 32) | VAR_5;
 } else
  VAR_2 = *VAR_1;

 return VAR_2;
}
