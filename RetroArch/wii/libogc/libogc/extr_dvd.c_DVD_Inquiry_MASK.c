
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int s32 ;
typedef int dvddrvinfo ;
struct TYPE_4__ {int state; int txdsize; } ;
typedef TYPE_1__ dvdcmdblk ;


 int FUNC_0 (TYPE_1__*,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

s32 FUNC_4(dvdcmdblk *VAR_2,dvddrvinfo *VAR_3)
{
 u32 VAR_4;
 s32 VAR_5,VAR_6;
 VAR_6 = FUNC_0(VAR_2,VAR_3,VAR_0);
 if(!VAR_6) return -1;

 FUNC_2(VAR_4);
 do {
  VAR_5 = VAR_2->state;
  if(VAR_5==0) VAR_6 = VAR_2->txdsize;
  else if(VAR_5==-1) VAR_6 = -1;
  else if(VAR_5==10) VAR_6 = -3;
  else FUNC_1(VAR_1);
 } while(VAR_5!=0 && VAR_5!=-1 && VAR_5!=10);
 FUNC_3(VAR_4);
 return VAR_6;
}
