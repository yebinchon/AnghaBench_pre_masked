
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t s32 ;
struct TYPE_3__ {size_t result; } ;
typedef TYPE_1__ card_block ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_1__* VAR_3 ;

s32 FUNC_0(s32 VAR_4)
{
 card_block *VAR_5 = ((void*)0);

 if(VAR_4<VAR_1 || VAR_4>=VAR_2) return VAR_0;
 VAR_5 = &VAR_3[VAR_4];
 return VAR_5->result;
}
