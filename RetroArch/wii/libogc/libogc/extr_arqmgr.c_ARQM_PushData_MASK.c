
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ s32 ;
struct TYPE_3__ {scalar_t__ polled; int aram_start; int arqhandle; } ;
typedef TYPE_1__ ARQM_Info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int ,int ,int,int,int,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int* VAR_8 ;

u32 FUNC_4(void *VAR_9,s32 VAR_10)
{
 u32 VAR_11,VAR_12;
 ARQM_Info *VAR_13;

 if(((u32)VAR_9)&0x1f || VAR_10<=0) return 0;

 VAR_11 = FUNC_1(VAR_10);
 if(VAR_4>=VAR_11 && VAR_7<(VAR_0-1)) {
  VAR_13 = &VAR_5[VAR_7];

  FUNC_2(VAR_12);
  VAR_13->polled = VAR_3;
  VAR_13->aram_start = VAR_8[VAR_7++];
  VAR_8[VAR_7] = VAR_13->aram_start+VAR_11;
  VAR_4 -= VAR_11;

  FUNC_0(&VAR_13->arqhandle,VAR_7-1,VAR_1,VAR_2,VAR_13->aram_start,(u32)VAR_9,VAR_11,VAR_6);
  FUNC_3(VAR_12);

  while(VAR_13->polled==VAR_3);
  return (VAR_13->aram_start);
 }
 return 0;
}
