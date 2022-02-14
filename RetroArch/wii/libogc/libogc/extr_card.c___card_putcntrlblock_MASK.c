
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef void* s32 ;
struct TYPE_3__ {scalar_t__ result; scalar_t__ attached; } ;
typedef TYPE_1__ card_block ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static s32 FUNC_2(card_block *VAR_1,s32 VAR_2)
{
 u32 VAR_3;

 FUNC_0(VAR_3);
 if(VAR_1->attached) VAR_1->result = VAR_2;
 else if(VAR_1->result==VAR_0) VAR_1->result = VAR_2;
 FUNC_1(VAR_3);
 return VAR_2;
}
