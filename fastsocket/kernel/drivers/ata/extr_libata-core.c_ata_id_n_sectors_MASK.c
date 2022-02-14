
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u64 ;
typedef int u16 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int const FUNC_3 (int const*,int ) ;
 int const FUNC_4 (int const*,int ) ;

__attribute__((used)) static u64 FUNC_5(const u16 *VAR_8)
{
 if (FUNC_1(VAR_8)) {
  if (FUNC_2(VAR_8))
   return FUNC_4(VAR_8, VAR_6);
  else
   return FUNC_3(VAR_8, VAR_5);
 } else {
  if (FUNC_0(VAR_8))
   return VAR_8[VAR_0] * VAR_8[VAR_1] *
          VAR_8[VAR_2];
  else
   return VAR_8[VAR_3] * VAR_8[VAR_4] *
          VAR_8[VAR_7];
 }
}
