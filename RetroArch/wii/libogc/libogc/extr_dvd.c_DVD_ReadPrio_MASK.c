
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef long long s64 ;
typedef int s32 ;
struct TYPE_4__ {int state; int txdsize; } ;
typedef TYPE_1__ dvdcmdblk ;


 int FUNC_0 (TYPE_1__*,void*,int ,long long,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

s32 FUNC_4(dvdcmdblk *VAR_2,void *VAR_3,u32 VAR_4,s64 VAR_5,s32 VAR_6)
{
 u32 VAR_7;
 s32 VAR_8,VAR_9;
 if(VAR_5>=0 && VAR_5<8511160320LL) {
  VAR_9 = FUNC_0(VAR_2,VAR_3,VAR_4,VAR_5,VAR_0,VAR_6);
  if(!VAR_9) return -1;

  FUNC_2(VAR_7);
  do {
   VAR_8 = VAR_2->state;
   if(VAR_8==0) VAR_9 = VAR_2->txdsize;
   else if(VAR_8==-1) VAR_9 = -1;
   else if(VAR_8==10) VAR_9 = -3;
   else FUNC_1(VAR_1);
  } while(VAR_8!=0 && VAR_8!=-1 && VAR_8!=10);
  FUNC_3(VAR_7);
  return VAR_9;
 }
 return -1;
}
