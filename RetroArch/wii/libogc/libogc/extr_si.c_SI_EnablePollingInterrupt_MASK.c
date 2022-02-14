
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int rdstintmsk; } ;
struct TYPE_4__ {int val; TYPE_1__ csrmap; } ;
typedef TYPE_2__ sicomcsr ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int* VAR_0 ;
 scalar_t__* VAR_1 ;

u32 FUNC_2(s32 VAR_2)
{
 sicomcsr VAR_3;
 u32 VAR_4,VAR_5,VAR_6;

 FUNC_0(VAR_4);

 VAR_5 = 0;
 VAR_3.val = VAR_0[13];
 if(VAR_3.csrmap.rdstintmsk) VAR_5 = 1;

 if(VAR_2) {
  VAR_3.csrmap.rdstintmsk = 1;
  for(VAR_6=0;VAR_6<4;VAR_6++) VAR_1[VAR_6] = 0;
 } else
  VAR_3.csrmap.rdstintmsk = 0;

 VAR_3.val &= 0x7ffffffe;
 VAR_0[13] = VAR_3.val;

 FUNC_1(VAR_4);
 return VAR_5;
}
