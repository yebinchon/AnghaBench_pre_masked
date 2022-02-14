
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int s32 ;
struct TYPE_5__ {scalar_t__ curr_fat; scalar_t__ curr_dir; } ;
typedef TYPE_1__ card_block ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static s32 FUNC_2(card_block *VAR_2)
{
 u32 VAR_3 = 0;

 VAR_3 += FUNC_0(VAR_2,((void*)0));
 VAR_3 += FUNC_1(VAR_2,((void*)0));
 if(VAR_3<=2) {
  if(VAR_2->curr_dir && VAR_2->curr_fat) return VAR_1;
 }
 return VAR_0;
}
