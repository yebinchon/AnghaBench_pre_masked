
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t s32 ;
struct TYPE_3__ {scalar_t__ exi_idtime; } ;
typedef TYPE_1__ exibus_priv ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (size_t,int ,int *) ;
 size_t FUNC_1 (size_t) ;
 TYPE_1__* VAR_1 ;

s32 FUNC_2(s32 VAR_2)
{
 s32 VAR_3;
 u32 VAR_4;
 exibus_priv *VAR_5 = &VAR_1[VAR_2];
 if((VAR_3=FUNC_1(VAR_2))==1) {
  if(VAR_5->exi_idtime==0) {
   if(FUNC_0(VAR_2,VAR_0,&VAR_4)==0) VAR_3 = 0;
  }
 }
 return VAR_3;
}
