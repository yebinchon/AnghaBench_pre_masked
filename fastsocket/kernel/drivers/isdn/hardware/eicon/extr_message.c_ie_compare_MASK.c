
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t word ;
typedef int byte ;



__attribute__((used)) static byte FUNC_0(byte *VAR_0, byte *VAR_1)
{
  word VAR_2;
  if(!VAR_0 || ! VAR_1) return 0;
  if(!VAR_0[0]) return 0;
  for(VAR_2=0;VAR_2<(word)(VAR_0[0]+1);VAR_2++) if(VAR_0[VAR_2]!=VAR_1[VAR_2]) return 0;
  return 1;
}
