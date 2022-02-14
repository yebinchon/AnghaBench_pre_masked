
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ TClasNum; scalar_t__ TClasProc; int TClass; int TSpec; int * Addr; } ;
typedef int TSPEC_BODY ;
typedef int QOS_TCLAS ;
typedef TYPE_1__* PTS_COMMON_INFO ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;

void FUNC_1(PTS_COMMON_INFO VAR_1)
{
 FUNC_0(VAR_1->Addr, 0, 6);
 FUNC_0(&VAR_1->TSpec, 0, sizeof(TSPEC_BODY));
 FUNC_0(&VAR_1->TClass, 0, sizeof(QOS_TCLAS)*VAR_0);
 VAR_1->TClasProc = 0;
 VAR_1->TClasNum = 0;
}
