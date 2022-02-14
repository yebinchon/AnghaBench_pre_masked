
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef long int64 ;
struct TYPE_3__ {int (* rDestroy ) (int *) ;} ;
struct TYPE_4__ {long tuplesSent; TYPE_1__ pub; } ;
typedef TYPE_2__ TaskFileDestReceiver ;
typedef int Query ;
typedef int * ParamListInfo ;
typedef int EState ;
typedef int DestReceiver ;


 int * FUNC_0 () ;
 scalar_t__ FUNC_1 (char*,int *,int) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int64
FUNC_5(Query *VAR_0, char *VAR_1, bool VAR_2)
{
 EState *VAR_3 = ((void*)0);
 TaskFileDestReceiver *VAR_4 = ((void*)0);
 ParamListInfo VAR_5 = ((void*)0);
 int64 VAR_6 = 0L;

 VAR_3 = FUNC_0();
 VAR_4 =
  (TaskFileDestReceiver *) FUNC_1(VAR_1, VAR_3,
               VAR_2);

 FUNC_2(VAR_0, VAR_5, (DestReceiver *) VAR_4);

 VAR_6 = VAR_4->tuplesSent;

 VAR_4->pub.rDestroy((DestReceiver *) VAR_4);
 FUNC_3(VAR_3);

 return VAR_6;
}
