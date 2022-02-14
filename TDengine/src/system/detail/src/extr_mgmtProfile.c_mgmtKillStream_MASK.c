
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_9__ {int mutex; TYPE_3__* pConn; } ;
struct TYPE_8__ {scalar_t__ ip; short port; TYPE_1__* pSList; scalar_t__ streamId; struct TYPE_8__* next; TYPE_4__* pAcct; } ;
struct TYPE_7__ {scalar_t__ streamId; } ;
struct TYPE_6__ {int numOfStreams; TYPE_2__* sdesc; } ;
typedef TYPE_2__ SSDesc ;
typedef TYPE_3__ SConnObj ;
typedef TYPE_4__ SAcctObj ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 short FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*,char*) ;

int FUNC_8(char *VAR_1, SConnObj *VAR_2) {
  char *VAR_3, *VAR_4, VAR_5[64];
  FUNC_7(VAR_5, VAR_1);

  VAR_3 = VAR_5;
  VAR_4 = FUNC_6(VAR_3, ':');
  if (VAR_4 == ((void*)0)) goto _error;
  *VAR_4 = 0;
  uint32_t VAR_6 = FUNC_2(VAR_3);

  VAR_3 = VAR_4 + 1;
  VAR_4 = FUNC_6(VAR_3, ':');
  if (VAR_4 == ((void*)0)) goto _error;
  *VAR_4 = 0;
  short VAR_7 = FUNC_1(FUNC_0(VAR_3));

  VAR_3 = VAR_4 + 1;
  uint32_t VAR_8 = FUNC_0(VAR_3);

  SAcctObj *VAR_9 = VAR_2->pAcct;

  FUNC_4(&VAR_9->mutex);

  VAR_2 = VAR_9->pConn;
  while (VAR_2) {
    if (VAR_2->ip == VAR_6 && VAR_2->port == VAR_7 && VAR_2->pSList) {
      int VAR_10;
      SSDesc *VAR_11 = VAR_2->pSList->sdesc;
      for (VAR_10 = 0; VAR_10 < VAR_2->pSList->numOfStreams; ++VAR_10, ++VAR_11) {
        if (VAR_11->streamId == VAR_8) break;
      }

      if (VAR_10 < VAR_2->pSList->numOfStreams) break;
    }

    VAR_2 = VAR_2->next;
  }

  if (VAR_2) VAR_2->streamId = VAR_8;

  FUNC_5(&VAR_9->mutex);

  if (VAR_2 == ((void*)0) || VAR_2->pSList == ((void*)0) || VAR_2->pSList->numOfStreams == 0) goto _error;

  FUNC_3("stream:%s is there, kill it", VAR_1);
  return 0;

_error:
  FUNC_3("stream:%s is not there", VAR_1);

  return VAR_0;
}
