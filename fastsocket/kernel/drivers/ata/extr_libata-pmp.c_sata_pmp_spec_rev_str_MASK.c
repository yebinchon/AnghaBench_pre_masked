
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 size_t VAR_0 ;

__attribute__((used)) static const char *FUNC_0(const u32 *VAR_1)
{
 u32 VAR_2 = VAR_1[VAR_0];

 if (VAR_2 & (1 << 3))
  return "1.2";
 if (VAR_2 & (1 << 2))
  return "1.1";
 if (VAR_2 & (1 << 1))
  return "1.0";
 return "<unknown>";
}
