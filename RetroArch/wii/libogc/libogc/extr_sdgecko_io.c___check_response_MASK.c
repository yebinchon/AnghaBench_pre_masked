
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef size_t s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int* VAR_16 ;
 scalar_t__* VAR_17 ;

__attribute__((used)) static __inline__ u32 FUNC_0(s32 VAR_18,u8 VAR_19)
{
 if(VAR_18<0 || VAR_18>=VAR_10) return VAR_1;

 VAR_16[VAR_18] = 0;
 if(VAR_17[VAR_18]==VAR_9 && VAR_19&VAR_13) {
  VAR_16[VAR_18] |= VAR_6;
  return VAR_2;
 } else {
  if(VAR_19&VAR_15) VAR_16[VAR_18] |= VAR_8;
  if(VAR_19&VAR_11) VAR_16[VAR_18] |= VAR_3;
  if(VAR_19&VAR_12) VAR_16[VAR_18] |= VAR_4;
  if(VAR_19&VAR_14) VAR_16[VAR_18] |= VAR_7;
 }
 return ((VAR_16[VAR_18]&VAR_5)?VAR_0:VAR_2);
}
