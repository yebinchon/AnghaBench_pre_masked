
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int values ;
typedef int uint64 ;
typedef int isNulls ;
typedef int Tuplestorestate ;
typedef int TupleDesc ;
typedef int TimestampTz ;
struct TYPE_12__ {TYPE_1__* allProcs; } ;
struct TYPE_11__ {TYPE_4__* backends; } ;
struct TYPE_9__ {int timestamp; int transactionNumber; } ;
struct TYPE_8__ {int initiatorNodeIdentifier; int transactionOriginator; } ;
struct TYPE_10__ {scalar_t__ const userId; scalar_t__ databaseId; int mutex; TYPE_3__ transactionId; TYPE_2__ citusBackend; } ;
struct TYPE_7__ {int pid; } ;
typedef scalar_t__ Oid ;
typedef int Datum ;
typedef TYPE_4__ BackendData ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__) ;
 TYPE_6__* VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 TYPE_5__* VAR_6 ;
 scalar_t__ FUNC_9 (scalar_t__ const,int ) ;
 int FUNC_10 (int*,int,int) ;
 int FUNC_11 () ;
 int FUNC_12 (int *,int ,int*,int*) ;

__attribute__((used)) static void
FUNC_13(Tuplestorestate *VAR_7, TupleDesc VAR_8)
{
 int VAR_9 = 0;
 Datum VAR_10[VAR_0];
 bool VAR_11[VAR_0];
 bool VAR_12 = FUNC_11();
 const Oid VAR_13 = FUNC_0();






 FUNC_10(VAR_10, 0, sizeof(VAR_10));
 FUNC_10(VAR_11, 0, sizeof(VAR_11));

 if (FUNC_9(VAR_13, VAR_1))
 {
  VAR_12 = 1;
 }


 FUNC_2(VAR_3);

 for (VAR_9 = 0; VAR_9 < VAR_4; ++VAR_9)
 {
  BackendData *VAR_14 =
   &VAR_6->backends[VAR_9];
  bool VAR_15 = 0;


  Oid VAR_16 = VAR_2;
  int VAR_17 = -1;
  int VAR_18 = -1;
  uint64 VAR_19 = 0;
  TimestampTz VAR_20 = 0;

  FUNC_4(&VAR_14->mutex);


  if (VAR_14->citusBackend.initiatorNodeIdentifier < 0)
  {
   FUNC_5(&VAR_14->mutex);
   continue;
  }





  if (!VAR_12 && VAR_14->userId != VAR_13)
  {
   FUNC_5(&VAR_14->mutex);
   continue;
  }

  VAR_16 = VAR_14->databaseId;
  VAR_17 = VAR_5->allProcs[VAR_9].pid;
  VAR_18 = VAR_14->citusBackend.initiatorNodeIdentifier;
  VAR_15 = VAR_14->citusBackend.transactionOriginator;

  VAR_19 = VAR_14->transactionId.transactionNumber;
  VAR_20 = VAR_14->transactionId.timestamp;

  FUNC_5(&VAR_14->mutex);

  VAR_10[0] = FUNC_3(VAR_16);
  VAR_10[1] = FUNC_1(VAR_17);
  VAR_10[2] = FUNC_1(VAR_18);
  VAR_10[3] = !VAR_15;
  VAR_10[4] = FUNC_7(VAR_19);
  VAR_10[5] = FUNC_6(VAR_20);

  FUNC_12(VAR_7, VAR_8, VAR_10, VAR_11);






  FUNC_10(VAR_10, 0, sizeof(VAR_10));
  FUNC_10(VAR_11, 0, sizeof(VAR_11));
 }

 FUNC_8();
}
