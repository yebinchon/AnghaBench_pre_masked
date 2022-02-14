
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int s32 ;
struct TYPE_2__ {int min_id; int max_id; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

s32 FUNC_0(s32 VAR_3)
{
 s32 VAR_4,VAR_5;
 s32 VAR_6;

 if(VAR_1==VAR_2) return 1;

 VAR_6 = 1;
 VAR_4 = VAR_0.min_id;
 VAR_5 = VAR_0.max_id;
 if(VAR_3>=VAR_4 && VAR_3<VAR_5) return VAR_6 + (VAR_3 - VAR_4);

 return 1;
}
