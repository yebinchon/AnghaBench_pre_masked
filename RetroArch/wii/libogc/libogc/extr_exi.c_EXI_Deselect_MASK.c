
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t s32 ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ exibus_priv ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (size_t) ;
 int* VAR_8 ;
 TYPE_1__* VAR_9 ;

s32 FUNC_5(s32 VAR_10)
{
 u32 VAR_11;
 u32 VAR_12;
 exibus_priv *VAR_13 = &VAR_9[VAR_10];
 FUNC_1(VAR_12);

 if(!(VAR_13->flags&VAR_5)) {
  FUNC_2(VAR_12);
  return 0;
 }

 VAR_13->flags &= ~VAR_5;
 VAR_11 = VAR_8[VAR_10*5];
 VAR_8[VAR_10*5] = (VAR_11&0x405);

 if(VAR_13->flags&VAR_4) {
  if(VAR_10==VAR_0) FUNC_3(FUNC_0(VAR_6));
  else if(VAR_10==VAR_1) FUNC_3(FUNC_0(VAR_7));
 }

 if(VAR_10!=VAR_2 && VAR_11&VAR_3) {
  if(FUNC_4(VAR_10)==0) {
   FUNC_2(VAR_12);
   return 0;
  }
 }
 FUNC_2(VAR_12);
 return 1;
}
