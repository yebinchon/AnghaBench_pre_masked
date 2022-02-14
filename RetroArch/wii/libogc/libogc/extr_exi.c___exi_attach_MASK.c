
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t s32 ;
struct TYPE_3__ {int flags; int CallbackEXT; } ;
typedef TYPE_1__ exibus_priv ;
typedef int EXICallback ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (size_t,int,int ,int ) ;
 int FUNC_5 (size_t) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static s32 FUNC_6(s32 VAR_3,EXICallback VAR_4)
{
 s32 VAR_5;
 u32 VAR_6;
 exibus_priv *VAR_7 = &VAR_2[VAR_3];
 FUNC_1(VAR_6);
 VAR_5 = 0;
 if(!(VAR_7->flags&VAR_0)) {
  if(FUNC_5(VAR_3)==1) {
   FUNC_4(VAR_3,1,0,0);
   VAR_7->CallbackEXT = VAR_4;
   FUNC_3(((FUNC_0(VAR_1))>>(VAR_3*3)));
   VAR_7->flags |= VAR_0;
   VAR_5 = 1;
  }
 }
 FUNC_2(VAR_6);
 return VAR_5;
}
