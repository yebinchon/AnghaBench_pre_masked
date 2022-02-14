
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int serverMutex; int processData; int numOfThreads; int sessionExpire; int cacheContext; int serverPort; int serverIp; int label; } ;
typedef TYPE_1__ HttpServer ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_11() {
  FUNC_9();

  VAR_1 = (HttpServer *)FUNC_2(sizeof(HttpServer));
  FUNC_3(VAR_1, 0, sizeof(HttpServer));

  FUNC_7(VAR_1->label, "rest");
  FUNC_7(VAR_1->serverIp, VAR_4);
  VAR_1->serverPort = VAR_6;
  VAR_1->cacheContext = VAR_2;
  VAR_1->sessionExpire = VAR_7;
  VAR_1->numOfThreads = VAR_5;
  VAR_1->processData = VAR_0;

  FUNC_5(&VAR_1->serverMutex, ((void*)0));

  if (VAR_3 != 0) {
    FUNC_8(VAR_8 / 10, 1);
  }
  FUNC_6(VAR_1);
  FUNC_0(VAR_1);
  FUNC_1(VAR_1);
  FUNC_10(VAR_1);
  FUNC_4(VAR_1);

  return 0;
}
