
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64 ;
typedef int uint32 ;
struct TYPE_6__ {char* workerName; int workerPort; } ;
typedef TYPE_1__ WorkerNode ;
struct TYPE_7__ {char* data; } ;
typedef TYPE_2__* StringInfo ;
typedef int PGresult ;
typedef int Oid ;
typedef int MultiConnection ;
typedef int List ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int **) ;
 TYPE_2__* FUNC_2 (int ,int *,char*) ;
 int * FUNC_3 (int ,char*,int ) ;
 int * VAR_2 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int *) ;

__attribute__((used)) static uint64
FUNC_12(WorkerNode *VAR_3, Oid VAR_4, char *VAR_5)
{
 StringInfo VAR_6 = ((void*)0);
 StringInfo VAR_7 = ((void*)0);
 char *VAR_8 = VAR_3->workerName;
 uint32 VAR_9 = VAR_3->workerPort;
 char *VAR_10;
 uint64 VAR_11 = 0;
 MultiConnection *VAR_12 = ((void*)0);
 uint32 VAR_13 = 0;
 PGresult *VAR_14 = ((void*)0);
 int VAR_15 = 0;
 List *VAR_16 = VAR_2;
 bool VAR_17 = 1;

 List *VAR_18 = FUNC_6(VAR_3, VAR_4);

 VAR_6 = FUNC_2(VAR_4,
                 VAR_18,
                 VAR_5);

 VAR_12 = FUNC_3(VAR_13, VAR_8, VAR_9);
 VAR_15 = FUNC_1(VAR_12, VAR_6->data, &VAR_14);

 if (VAR_15 != 0)
 {
  FUNC_8(VAR_1, (FUNC_9(VAR_0),
      FUNC_10("cannot get the size because of a connection error")));
 }

 VAR_16 = FUNC_5(VAR_14);
 VAR_7 = (StringInfo) FUNC_11(VAR_16);
 VAR_10 = VAR_7->data;
 VAR_11 = FUNC_7(VAR_10);

 FUNC_4(VAR_14);
 FUNC_0(VAR_12, VAR_17);

 return VAR_11;
}
