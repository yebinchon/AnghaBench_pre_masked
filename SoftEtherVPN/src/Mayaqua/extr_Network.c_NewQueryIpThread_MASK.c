
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef void* UINT ;
struct TYPE_5__ {int Thread; void* IntervalLastNg; void* IntervalLastOk; int Hostname; int Lock; int HaltEvent; } ;
typedef TYPE_1__ QUERYIPTHREAD ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int,char*) ;
 TYPE_1__* FUNC_4 (int) ;

QUERYIPTHREAD *FUNC_5(char *VAR_1, UINT VAR_2, UINT VAR_3)
{
 QUERYIPTHREAD *VAR_4;

 VAR_4 = FUNC_4(sizeof(QUERYIPTHREAD));

 VAR_4->HaltEvent = FUNC_0();
 VAR_4->Lock = FUNC_1();
 FUNC_3(VAR_4->Hostname, sizeof(VAR_4->Hostname), VAR_1);
 VAR_4->IntervalLastOk = VAR_2;
 VAR_4->IntervalLastNg = VAR_3;

 VAR_4->Thread = FUNC_2(VAR_0, VAR_4);

 return VAR_4;
}
