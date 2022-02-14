
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ s8 ;
typedef scalar_t__ s32 ;



__attribute__((used)) static s8 FUNC_0(s8 VAR_0,s8 VAR_1)
{
 s32 VAR_2 = (s32)VAR_1;
 if(VAR_2>0) {
  VAR_2 -= 128;
  if((s32)VAR_0<VAR_2) VAR_0 = VAR_2;
 } else if(VAR_2<0) {
  VAR_2 += 127;
  if(VAR_2<(s32)VAR_0) VAR_0 = VAR_2;
 }
 return (VAR_0-VAR_1);
}
