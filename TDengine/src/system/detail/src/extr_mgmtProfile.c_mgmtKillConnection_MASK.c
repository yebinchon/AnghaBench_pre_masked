
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int mutex; TYPE_1__* pConn; } ;
struct TYPE_4__ {scalar_t__ ip; short port; int killConnection; struct TYPE_4__* next; TYPE_2__* pAcct; } ;
typedef TYPE_1__ SConnObj ;
typedef TYPE_2__ SAcctObj ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 short FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*,char*) ;

int FUNC_8(char *VAR_1, SConnObj *VAR_2) {
  SConnObj *VAR_3 = ((void*)0);
  char * VAR_4, *VAR_5, VAR_6[64];
  FUNC_7(VAR_6, VAR_1);

  VAR_4 = VAR_6;
  VAR_5 = FUNC_6(VAR_4, ':');
  if (VAR_5 == ((void*)0)) goto _error;
  *VAR_5 = 0;
  uint32_t VAR_7 = FUNC_2(VAR_4);

  VAR_4 = VAR_5 + 1;
  short VAR_8 = FUNC_1(FUNC_0(VAR_4));

  SAcctObj *VAR_9 = VAR_2->pAcct;

  FUNC_4(&VAR_9->mutex);

  VAR_2 = VAR_9->pConn;
  while (VAR_2) {
    if (VAR_2->ip == VAR_7 && VAR_2->port == VAR_8) {

      if (VAR_3 == ((void*)0))
        VAR_3 = VAR_2;
      else
        break;
    }

    VAR_2 = VAR_2->next;
  }

  if (VAR_3) VAR_3->killConnection = 1;
  if (VAR_2) VAR_2->killConnection = 1;

  FUNC_5(&VAR_9->mutex);

  if (VAR_3 == ((void*)0)) goto _error;

  FUNC_3("connection:%s is there, kill it", VAR_1);
  return 0;

_error:
  FUNC_3("connection:%s is not there", VAR_1);

  return VAR_0;
}
