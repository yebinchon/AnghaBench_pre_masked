
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int pthread_attr_t ;
typedef scalar_t__ int64_t ;
struct TYPE_6__ {int threadId; int sID; int eID; int pid; } ;
typedef TYPE_1__ ThreadObj ;
struct TYPE_8__ {int writeClients; char* dataDir; int filesNum; int rowsPerRequest; } ;
struct TYPE_7__ {scalar_t__ totalRows; } ;


 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 TYPE_1__* FUNC_0 (size_t,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *,void* (*) (void*),TYPE_1__*) ;
 int FUNC_6 (int ,int *) ;
 TYPE_2__ VAR_2 ;
 void* FUNC_7 (char*,char*,char*,int *,int ) ;
 int FUNC_8 (void*) ;
 int FUNC_9 () ;
 int FUNC_10 (void*,char*) ;
 scalar_t__ VAR_3 ;

void FUNC_11() {
  FUNC_2("write data\n");
  FUNC_2("---- writeClients: %d\n", VAR_1.writeClients);
  FUNC_2("---- dataDir: %s\n", VAR_1.dataDir);
  FUNC_2("---- numOfFiles: %d\n", VAR_1.filesNum);
  FUNC_2("---- rowsPerRequest: %d\n", VAR_1.rowsPerRequest);

  FUNC_9();

  void *VAR_4 = FUNC_7("127.0.0.1", "root", "taosdata", ((void*)0), 0);
  if (VAR_4 == ((void*)0))
    FUNC_8(VAR_4);

  int VAR_5 = FUNC_10(VAR_4, "create database if not exists db");
  if (VAR_5 != 0) {
    FUNC_8(VAR_4);
  }

  VAR_5 = FUNC_10(VAR_4, "create table if not exists db.devices(ts timestamp, temperature int, humidity float) "
    "tags(devid int, devname binary(16), devgroup int)");
  if (VAR_5 != 0) {
    FUNC_8(VAR_4);
  }

  int64_t VAR_6 = FUNC_1();

  int VAR_7 = VAR_1.filesNum / VAR_1.writeClients;
  int VAR_8 = VAR_1.filesNum % VAR_1.writeClients;
  int VAR_9 = 0;

  ThreadObj *VAR_10 = FUNC_0((size_t)VAR_1.writeClients, sizeof(ThreadObj));
  for (int VAR_11 = 0; VAR_11 < VAR_1.writeClients; ++VAR_11) {
    ThreadObj *VAR_12 = VAR_10 + VAR_11;
    pthread_attr_t VAR_13;
    VAR_12->threadId = VAR_11 + 1;
    VAR_12->sID = VAR_9;
    if (VAR_11 < VAR_8) {
      VAR_12->eID = VAR_9 + VAR_7;
    } else {
      VAR_12->eID = VAR_9 + VAR_7 - 1;
    }
    VAR_9 = VAR_12->eID + 1;
    FUNC_3(&VAR_13);
    FUNC_4(&VAR_13, VAR_0);
    FUNC_5(&VAR_12->pid, &VAR_13, (void *(*)(void *))VAR_3, VAR_12);
  }

  for (int VAR_14 = 0; VAR_14 < VAR_1.writeClients; VAR_14++) {
    FUNC_6(VAR_10[VAR_14].pid, ((void*)0));
  }

  int64_t VAR_15 = FUNC_1() - VAR_6;
  float VAR_16 = (float)VAR_15 / 1000;
  float VAR_17 = (float)VAR_2.totalRows / VAR_16;

  FUNC_2("---- Spent %f seconds to insert %ld records, speed: %f Rows/Second\n", VAR_16, VAR_2.totalRows, VAR_17);
}
