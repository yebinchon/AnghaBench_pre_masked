
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64 ;
typedef int uint32 ;
typedef int int64 ;
struct TYPE_5__ {char* workerName; int workerPort; int groupId; } ;
typedef TYPE_1__ WorkerNode ;
struct TYPE_6__ {int pgConn; } ;
typedef int RelayFileState ;
typedef int Oid ;
typedef TYPE_2__ MultiConnection ;
typedef int List ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (int ,char*,int ,char*,int *) ;
 int * FUNC_2 (int ,int) ;
 int * FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,int const,int const,int ) ;
 int * VAR_5 ;
 scalar_t__ FUNC_5 (int ) ;
 char* FUNC_6 (int ) ;
 int VAR_6 ;
 int * FUNC_7 (int ,int,int ,int *,int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int) ;

void
FUNC_12(Oid VAR_7, int64 VAR_8,
            List *VAR_9, int VAR_10)
{
 int VAR_11 = VAR_10;
 int VAR_12 = FUNC_10(VAR_9);
 int VAR_13 = 0;
 int VAR_14 = 0;
 List *VAR_15 = FUNC_3(VAR_7);
 bool VAR_16 = 0;
 List *VAR_17 = FUNC_2(VAR_7, VAR_16);
 uint32 VAR_18 = VAR_3;
 char *VAR_19 = FUNC_6(VAR_7);


 if (VAR_12 > VAR_10)
 {
  VAR_11++;
 }

 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++)
 {
  int VAR_20 = VAR_14 % VAR_12;
  WorkerNode *VAR_21 = (WorkerNode *) FUNC_11(VAR_9, VAR_20);
  uint32 VAR_22 = VAR_21->groupId;
  char *VAR_23 = VAR_21->workerName;
  uint32 VAR_24 = VAR_21->workerPort;
  int VAR_25 = -1;
  const RelayFileState VAR_26 = VAR_2;
  const uint64 VAR_27 = 0;
  MultiConnection *VAR_28 =
   FUNC_1(VAR_18, VAR_23, VAR_24,
            VAR_19, ((void*)0));
  List *VAR_29 = VAR_5;

  if (FUNC_5(VAR_28->pgConn) != VAR_0)
  {
   FUNC_8(VAR_6, (FUNC_9("could not connect to node \"%s:%u\"", VAR_23,
          VAR_24)));

   continue;
  }

  VAR_29 = FUNC_7(VAR_7, VAR_25, VAR_8,
               VAR_17,
               VAR_15);

  FUNC_0(VAR_28, VAR_29);

  FUNC_4(VAR_8, VAR_4, VAR_26, VAR_27,
        VAR_22);
  VAR_13++;

  if (VAR_13 >= VAR_10)
  {
   break;
  }
 }


 if (VAR_13 < VAR_10)
 {
  FUNC_8(VAR_1, (FUNC_9("could only create %u of %u of required shard replicas",
          VAR_13, VAR_10)));
 }
}
