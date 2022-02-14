
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sql ;
typedef int pthread_t ;
struct TYPE_5__ {char* server_ip; char* db_name; char* tbl_name; } ;
typedef TYPE_1__ param ;
typedef int TAOS_STREAM ;
typedef int TAOS ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int *,int *,void* (*) (void*),TYPE_1__*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int) ;
 int VAR_2 ;
 int FUNC_10 (char*,char*) ;
 int VAR_3 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (char*,char*,char*,char*,int ) ;
 int FUNC_14 () ;
 int * FUNC_15 (int *,char*,int ,int ,int *,int *) ;

int FUNC_16(int VAR_4, char *VAR_5[])
{
  TAOS *VAR_6;
  char VAR_7[64];
  char VAR_8[64];
  char VAR_9[1024] = { 0 };

  if (VAR_4 != 4) {
    FUNC_6("usage: %s server-ip dbname tblname\n", VAR_5[0]);
    FUNC_0(0);
  }


  FUNC_14();

  FUNC_10(VAR_7, VAR_5[2]);
  FUNC_10(VAR_8, VAR_5[3]);


  param *VAR_10 = (param *)FUNC_4(sizeof(param));
  if (((void*)0) == VAR_10)
  {
    FUNC_6("failed to malloc\n");
    FUNC_0(1);
  }
  FUNC_5(VAR_10, 0, sizeof(param));
  FUNC_10(VAR_10->server_ip, VAR_5[1]);
  FUNC_10(VAR_10->db_name, VAR_7);
  FUNC_10(VAR_10->tbl_name, VAR_8);

  pthread_t VAR_11;
  FUNC_7(&VAR_11, ((void*)0), (void * (*)(void *))VAR_1, VAR_10);

  FUNC_9(3);

  VAR_6 = FUNC_13(VAR_5[1], "root", "taosdata", VAR_7, 0);
  if (VAR_6 == ((void*)0)) {
    FUNC_6("failed to connet to server:%s\n", VAR_5[1]);
   FUNC_2(VAR_10);
    FUNC_0(1);
  }


  FUNC_6("please input stream SQL:[e.g., select count(*) from tblname interval(5s) sliding(2s);]\n");
  FUNC_1(VAR_9, sizeof(VAR_9), VAR_2);
  if (VAR_9[0] == 0) {
    FUNC_6("input NULL stream SQL, so exit!\n");
    FUNC_2(VAR_10);
    FUNC_0(1);
  }


  TAOS_STREAM *VAR_12 = FUNC_15(VAR_6, VAR_9, VAR_3, 0, ((void*)0), ((void*)0));
  if (((void*)0) == VAR_12) {
    FUNC_6("failed to create stream\n");
    FUNC_2(VAR_10);
    FUNC_0(1);
  }

  FUNC_6("presss any key to exit\n");
  FUNC_3();

  FUNC_12(VAR_12);

  VAR_0 = 1;
  FUNC_8(VAR_11, ((void*)0));

  FUNC_11(VAR_6);
  FUNC_2(VAR_10);

  return 0;
}
