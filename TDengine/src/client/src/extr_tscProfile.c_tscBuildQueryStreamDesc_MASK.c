
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_19__ {int useconds; int queryId; int stime; scalar_t__* sql; } ;
struct TYPE_18__ {scalar_t__ numOfQueries; TYPE_9__* qdesc; } ;
struct TYPE_17__ {scalar_t__ interval; int slidingTime; int ctime; scalar_t__ stime; int useconds; int num; int streamId; scalar_t__* sql; } ;
struct TYPE_16__ {scalar_t__ numOfStreams; TYPE_7__* sdesc; } ;
struct TYPE_11__ {int useconds; } ;
struct TYPE_15__ {struct TYPE_15__* next; TYPE_1__ res; int queryId; int stime; int * sqlstr; } ;
struct TYPE_14__ {struct TYPE_14__* next; scalar_t__ interval; int slidingTime; int ctime; scalar_t__ stime; int useconds; int num; int streamId; TYPE_2__* pSql; } ;
struct TYPE_13__ {TYPE_4__* streamList; TYPE_5__* sqlList; } ;
struct TYPE_12__ {int * sqlstr; } ;
typedef TYPE_3__ STscObj ;
typedef TYPE_4__ SSqlStream ;
typedef TYPE_5__ SSqlObj ;
typedef TYPE_6__ SSList ;
typedef TYPE_7__ SSDesc ;
typedef TYPE_8__ SQList ;
typedef TYPE_9__ SQDesc ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,int *,int) ;

char *FUNC_1(char *VAR_2, STscObj *VAR_3) {
  SQList *VAR_4 = (SQList *)VAR_2;
  char * VAR_5 = VAR_2 + VAR_0 - 256;

  SQDesc *VAR_6 = VAR_4->qdesc;
  VAR_4->numOfQueries = 0;




  VAR_2 += sizeof(SQList);
  SSqlObj *VAR_7 = VAR_3->sqlList;
  while (VAR_7) {




    if (VAR_7->sqlstr == ((void*)0)) {
      VAR_7 = VAR_7->next;
      continue;
    }

    FUNC_0(VAR_6->sql, VAR_7->sqlstr, VAR_1 - 1);
    VAR_6->sql[VAR_1 - 1] = 0;
    VAR_6->stime = VAR_7->stime;
    VAR_6->queryId = VAR_7->queryId;
    VAR_6->useconds = VAR_7->res.useconds;

    VAR_4->numOfQueries++;
    VAR_6++;
    VAR_7 = VAR_7->next;
    VAR_2 += sizeof(SQDesc);
    if (VAR_2 > VAR_5) break;
  }

  SSList *VAR_8 = (SSList *)VAR_2;
  SSDesc *VAR_9 = VAR_8->sdesc;
  VAR_8->numOfStreams = 0;

  VAR_2 += sizeof(SSList);
  SSqlStream *VAR_10 = VAR_3->streamList;
  while (VAR_10) {
    FUNC_0(VAR_9->sql, VAR_10->pSql->sqlstr, VAR_1 - 1);
    VAR_9->sql[VAR_1 - 1] = 0;
    VAR_9->streamId = VAR_10->streamId;
    VAR_9->num = VAR_10->num;

    VAR_9->useconds = VAR_10->useconds;
    VAR_9->stime = VAR_10->stime - VAR_10->interval;
    VAR_9->ctime = VAR_10->ctime;

    VAR_9->slidingTime = VAR_10->slidingTime;
    VAR_9->interval = VAR_10->interval;

    VAR_8->numOfStreams++;
    VAR_9++;
    VAR_10 = VAR_10->next;
    VAR_2 += sizeof(SSDesc);
    if (VAR_2 > VAR_5) break;
  }



  return VAR_2;
}
