
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TimestampTz ;
struct TYPE_10__ {scalar_t__ bgw_extra; } ;
struct TYPE_9__ {int tupdesc; int * vals; } ;
struct TYPE_8__ {int DatabaseId; int lock_cooldown; } ;
struct TYPE_7__ {int * data; } ;
typedef TYPE_1__ StringInfoData ;
typedef int Oid ;
typedef TYPE_2__ LockAcquireHelperArgs ;
typedef int Datum ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 long FUNC_5 (int const) ;
 int VAR_0 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_6__* VAR_5 ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 () ;
 int FUNC_12 (int *,int const,int *,int *,int *,int,int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int ,int,int*) ;
 int VAR_8 ;
 TYPE_5__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 () ;
 int FUNC_18 (int const,int ) ;
 int VAR_12 ;
 int FUNC_19 (TYPE_1__*,char*) ;
 int FUNC_20 (int ,char*,int,...) ;
 int FUNC_21 (TYPE_1__*) ;
 int VAR_13 ;
 int FUNC_22 (int ,int *) ;
 int FUNC_23 (int) ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (int ) ;

void
FUNC_26(Datum VAR_14)
{
 int VAR_15 = FUNC_4(VAR_14);
 StringInfoData VAR_16;
 LockAcquireHelperArgs *VAR_17 = (LockAcquireHelperArgs *) VAR_5->bgw_extra;
 long VAR_18 = 0;
 const TimestampTz VAR_19 = FUNC_6();
 const TimestampTz VAR_20 = FUNC_18(VAR_19,
                VAR_17->lock_cooldown);


 const int VAR_21 = 1;
 Oid VAR_22[1] = { VAR_2 };
 Datum VAR_23[1];

 FUNC_24(VAR_6, VAR_13);

 FUNC_1();

 FUNC_20(VAR_4, "lock acquiring backend started for backend %d (cooldown %dms)", VAR_15,
   VAR_17->lock_cooldown);







 do {
  VAR_18 = FUNC_5(VAR_20);
 } while (VAR_18 > 0 && FUNC_16(VAR_18));


 FUNC_0(VAR_17->DatabaseId, VAR_3, 0);
 FUNC_21(&VAR_16);
 FUNC_19(&VAR_16,
      "SELECT \n"
      "    DISTINCT conflicting.pid,\n"
      "    pg_terminate_backend(conflicting.pid)\n"
      "  FROM pg_locks AS blocked\n"
      "       JOIN pg_locks AS conflicting\n"
      "         ON (conflicting.database = blocked.database\n"
      "             AND conflicting.objid = blocked.objid)\n"
      " WHERE conflicting.granted = true\n"
      "   AND blocked.granted = false\n"
      "   AND blocked.pid = $1;");
 VAR_23[0] = FUNC_8(VAR_15);

 while (FUNC_16(100))
 {
  int VAR_24 = 0;
  int VAR_25 = 0;

  FUNC_20(VAR_4, "canceling competing backends for backend %d", VAR_15);




  FUNC_15();
  FUNC_17();
  FUNC_11();
  FUNC_10(FUNC_7());
  FUNC_22(VAR_11, VAR_16.data);

  VAR_25 = FUNC_12(VAR_16.data, VAR_21, VAR_22, VAR_23,
            ((void*)0), 0, 0);

  if (VAR_25 == VAR_7)
  {
   for (VAR_24 = 0; VAR_24 < VAR_8; VAR_24++)
   {
    int VAR_26 = 0;
    bool VAR_27 = 0;
    bool VAR_28 = 0;

    VAR_26 = FUNC_4(FUNC_14(VAR_9->vals[0],
               VAR_9->tupdesc,
               1, &VAR_28));

    VAR_27 = FUNC_3(FUNC_14(VAR_9->vals[0],
                VAR_9->tupdesc,
                2, &VAR_28));

    if (VAR_27)
    {
     FUNC_20(VAR_12, "terminated conflicting backend %d", VAR_26);
    }
    else
    {
     FUNC_20(VAR_1,
       "attempt to terminate conflicting backend %d was unsuccessful",
       VAR_26);
    }
   }
  }
  else
  {
   FUNC_20(VAR_0, "cannot cancel competing backends for backend %d", VAR_15);
  }




  FUNC_13();
  FUNC_9();
  FUNC_2();
  FUNC_23(0);
  FUNC_22(VAR_10, ((void*)0));
 }


 FUNC_20(VAR_4, "lock acquiring backend finished for backend %d", VAR_15);


 FUNC_25(0);
}
