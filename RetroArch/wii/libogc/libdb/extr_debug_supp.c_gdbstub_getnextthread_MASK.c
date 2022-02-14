
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int s32 ;
struct TYPE_2__ {int min_id; int max_id; int ** local_table; } ;


 TYPE_1__ VAR_0 ;

s32 FUNC_0(s32 VAR_1)
{
 s32 VAR_2,VAR_3;
 s32 VAR_4,VAR_5,VAR_6,VAR_7;

 if(VAR_1<1) return 1;

 VAR_4 = 1;
 VAR_5 = VAR_0.min_id;
 VAR_6 = VAR_0.max_id;
 VAR_7 = VAR_4 + VAR_6 - VAR_5;
 if(VAR_1<VAR_7) {
  if(VAR_1<VAR_4)
   VAR_3 = VAR_4;
  else
   VAR_3 = VAR_1+1;

  for(VAR_2=VAR_3;VAR_2<VAR_7;VAR_2++)
   if(VAR_0.local_table[VAR_2 - VAR_4]!=((void*)0)) return VAR_2;
 }

 return 0;
}
