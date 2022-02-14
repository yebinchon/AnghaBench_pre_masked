
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_3__ {size_t* Addr; size_t TClasProc; size_t TClasNum; int * TClass; int TSpec; } ;
typedef int TSPEC_BODY ;
typedef int QOS_TCLAS ;
typedef TYPE_1__* PTS_COMMON_INFO ;
typedef int * PTSPEC_BODY ;
typedef scalar_t__ PQOS_TCLAS ;


 int FUNC_0 (size_t*,size_t*,int) ;

void FUNC_1(
  PTS_COMMON_INFO VAR_0,
  u8* VAR_1,
  PTSPEC_BODY VAR_2,
  PQOS_TCLAS VAR_3,
  u8 VAR_4,
  u8 VAR_5
 )
{
 u8 VAR_6;

 if(VAR_0 == ((void*)0))
  return;

 FUNC_0(VAR_0->Addr, VAR_1, 6);

 if(VAR_2 != ((void*)0))
  FUNC_0((u8*)(&(VAR_0->TSpec)), (u8*)VAR_2, sizeof(TSPEC_BODY));

 for(VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  FUNC_0((u8*)(&(VAR_0->TClass[VAR_6])), (u8*)VAR_3, sizeof(QOS_TCLAS));

 VAR_0->TClasProc = VAR_5;
 VAR_0->TClasNum = VAR_4;
}
