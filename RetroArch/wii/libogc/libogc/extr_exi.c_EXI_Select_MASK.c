
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t s32 ;
struct TYPE_3__ {int flags; size_t lockeddev; } ;
typedef TYPE_1__ exibus_priv ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (size_t) ;
 int* VAR_9 ;
 TYPE_1__* VAR_10 ;

s32 FUNC_5(s32 VAR_11,s32 VAR_12,s32 VAR_13)
{
 u32 VAR_14;
 u32 VAR_15;
 exibus_priv *VAR_16 = &VAR_10[VAR_11];
 FUNC_1(VAR_15);

 if(VAR_16->flags&VAR_6) {
  FUNC_2(VAR_15);
  return 0;
 }

 if(VAR_11!=VAR_2) {
  if(VAR_12==VAR_3 && !(VAR_16->flags&VAR_4)) {
   if(FUNC_4(VAR_11)==0) {
    FUNC_2(VAR_15);
    return 0;
   }
  }
  if(!(VAR_16->flags&VAR_5) || VAR_16->lockeddev!=VAR_12) {
   FUNC_2(VAR_15);
   return 0;
  }
 }

 VAR_16->flags |= VAR_6;
 VAR_14 = VAR_9[VAR_11*5];
 VAR_14 = (VAR_14&0x405)|(0x80<<VAR_12)|(VAR_13<<4);
 VAR_9[VAR_11*5] = VAR_14;

 if(VAR_16->flags&VAR_4) {
  if(VAR_11==VAR_0) FUNC_3(FUNC_0(VAR_7));
  else if(VAR_11==VAR_1) FUNC_3(FUNC_0(VAR_8));
 }

 FUNC_2(VAR_15);
 return 1;
}
