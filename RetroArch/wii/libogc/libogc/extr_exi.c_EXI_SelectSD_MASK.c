
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t s32 ;
struct TYPE_3__ {int flags; size_t lockeddev; int exi_idtime; } ;
typedef TYPE_1__ exibus_priv ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t FUNC_0 (size_t,size_t,int*) ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 size_t FUNC_5 (size_t) ;
 int* VAR_9 ;
 TYPE_1__* VAR_10 ;

s32 FUNC_6(s32 VAR_11,s32 VAR_12,s32 VAR_13)
{
 u32 VAR_14,VAR_15;
 s32 VAR_16;
 u32 VAR_17;
 exibus_priv *VAR_18 = &VAR_10[VAR_11];
 FUNC_2(VAR_17);

 if(VAR_18->flags&VAR_6) {
  FUNC_3(VAR_17);
  return 0;
 }

 if(VAR_11!=VAR_2) {
  if(VAR_12==VAR_3 && !(VAR_18->flags&VAR_4)) {
   if((VAR_16=FUNC_5(VAR_11))==1) {
    if(!VAR_18->exi_idtime) VAR_16 = FUNC_0(VAR_11,VAR_3,&VAR_15);
   }
   if(VAR_16==0) {
    FUNC_3(VAR_17);
    return 0;
   }
  }
  if(!(VAR_18->flags&VAR_5) || VAR_18->lockeddev!=VAR_12) {
   FUNC_3(VAR_17);
   return 0;
  }
 }

 VAR_18->flags |= VAR_6;
 VAR_14 = VAR_9[VAR_11*5];
 VAR_14 = (VAR_14&0x405)|(VAR_13<<4);
 VAR_9[VAR_11*5] = VAR_14;

 if(VAR_18->flags&VAR_4) {
  if(VAR_11==VAR_0) FUNC_4(FUNC_1(VAR_7));
  else if(VAR_11==VAR_1) FUNC_4(FUNC_1(VAR_8));
 }

 FUNC_3(VAR_17);
 return 1;
}
