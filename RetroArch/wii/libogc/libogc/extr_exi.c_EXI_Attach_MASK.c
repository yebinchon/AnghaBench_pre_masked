
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t s32 ;
struct TYPE_3__ {scalar_t__ exi_idtime; } ;
typedef TYPE_1__ exibus_priv ;
typedef int EXICallback ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (size_t,int ) ;
 TYPE_1__* VAR_0 ;

s32 FUNC_4(s32 VAR_1,EXICallback VAR_2)
{
 s32 VAR_3;
 u32 VAR_4;
 exibus_priv *VAR_5 = &VAR_0[VAR_1];
 FUNC_0(VAR_1);

 FUNC_1(VAR_4);
 if(VAR_5->exi_idtime) {
  VAR_3 = FUNC_3(VAR_1,VAR_2);
 } else
  VAR_3 = 0;
 FUNC_2(VAR_4);
 return VAR_3;
}
