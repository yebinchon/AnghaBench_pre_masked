
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef size_t s32 ;
struct TYPE_4__ {int * CallbackEXI; } ;
typedef TYPE_1__ exibus_priv ;
typedef int * EXICallback ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (size_t,TYPE_1__*) ;
 TYPE_1__* VAR_2 ;

EXICallback FUNC_3(s32 VAR_3,EXICallback VAR_4)
{
 u32 VAR_5;
 EXICallback VAR_6 = ((void*)0);
 exibus_priv *VAR_7 = &VAR_2[VAR_3];
 FUNC_0(VAR_5);
 VAR_6 = VAR_7->CallbackEXI;
 VAR_7->CallbackEXI = VAR_4;
 if(VAR_3==VAR_1) FUNC_2(VAR_0,&VAR_2[VAR_0]);
 else FUNC_2(VAR_3,VAR_7);
 FUNC_1(VAR_5);
 return VAR_6;
}
