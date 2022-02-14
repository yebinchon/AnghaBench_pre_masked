
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef long long s64 ;
typedef int s32 ;
struct TYPE_4__ {int state; } ;
typedef TYPE_1__ dvdcmdblk ;


 int FUNC_0 (TYPE_1__*,long long,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

s32 FUNC_4(dvdcmdblk *VAR_2,s64 VAR_3,s32 VAR_4)
{
 u32 VAR_5;
 s32 VAR_6,VAR_7;
 if(VAR_3>0 && VAR_3<8511160320LL) {
  VAR_7 = FUNC_0(VAR_2,VAR_3,VAR_0,VAR_4);
  if(!VAR_7) return -1;

  FUNC_2(VAR_5);
  do {
   VAR_6 = VAR_2->state;
   if(VAR_6==0) VAR_7 = 0;
   else if(VAR_6==-1) VAR_7 = -1;
   else if(VAR_6==10) VAR_7 = -3;
   else FUNC_1(VAR_1);
  } while(VAR_6!=0 && VAR_6!=-1 && VAR_6!=10);
  FUNC_3(VAR_5);

  return VAR_7;
 }
 return -1;
}
