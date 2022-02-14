
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static long FUNC_1(const char *VAR_4)
{
  if(!VAR_4)
    return VAR_2;
  if(FUNC_0(VAR_4, "basic"))
    return VAR_0;
  if(FUNC_0(VAR_4, "digest"))
    return VAR_1;
  if(FUNC_0(VAR_4, "ntlm"))
    return VAR_3;
  return VAR_2;
}
