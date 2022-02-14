
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ s32 ;
struct TYPE_4__ {int blocks; } ;
typedef TYPE_1__ card_block ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,TYPE_1__**) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;

s32 FUNC_2(s32 VAR_4,u32 *VAR_5)
{
 s32 VAR_6;
 card_block *VAR_7 = ((void*)0);

 if(VAR_4<VAR_2 || VAR_4>=VAR_3) return VAR_0;
 if((VAR_6=FUNC_0(VAR_4,&VAR_7))<0) return VAR_6;

 *VAR_5 = VAR_7->blocks;
 VAR_6 = FUNC_1(VAR_7,VAR_1);

 return VAR_6;
}
