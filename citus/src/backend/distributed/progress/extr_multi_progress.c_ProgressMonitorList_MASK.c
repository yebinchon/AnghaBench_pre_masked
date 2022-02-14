
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef int text ;
typedef int dsm_segment ;
typedef void* dsm_handle ;
typedef int TupleTableSlot ;
struct TYPE_3__ {int setResult; int setDesc; } ;
typedef TYPE_1__ ReturnSetInfo ;
typedef int ProgressMonitorData ;
typedef int Oid ;
typedef int List ;
typedef int Datum ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (char*,char*,int) ;
 int VAR_0 ;
 int * FUNC_5 (int ,int *) ;
 int * FUNC_6 (void*,int **) ;
 int * VAR_1 ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int * FUNC_8 (char*) ;
 int * FUNC_9 (int *,int *) ;
 int VAR_3 ;
 int FUNC_10 (int *,int const,int*) ;
 int FUNC_11 (int ,int,int,int *) ;

List *
FUNC_12(uint64 VAR_4, List **VAR_5)
{






 const int VAR_6 = 0 + 1 + 3;
 const int VAR_7 = 1 + 1 + 3;







 text *VAR_8 = FUNC_8("VACUUM");
 Datum VAR_9 = FUNC_7(VAR_8);
 Oid VAR_10 = VAR_0;
 TupleTableSlot *VAR_11 = ((void*)0);
 ReturnSetInfo *VAR_12 = ((void*)0);
 List *VAR_13 = VAR_1;

 VAR_10 = FUNC_4("pg_catalog",
            "pg_stat_get_progress_info",
            1);

 VAR_12 = FUNC_3(VAR_3,
               VAR_10,
               VAR_9);

 VAR_11 = FUNC_5(VAR_12->setDesc,
             &VAR_2);


 for (;;)
 {
  bool VAR_14 = 0;
  bool VAR_15 = 0;
  Datum VAR_16 = 0;
  uint64 VAR_17 = 0;

  VAR_14 = FUNC_11(VAR_12->setResult,
           1,
           0,
           VAR_11);

  if (!VAR_14)
  {
   break;
  }

  VAR_16 = FUNC_10(VAR_11, VAR_6, &VAR_15);
  VAR_17 = FUNC_0(VAR_16);

  if (!VAR_15 && VAR_17 == VAR_4)
  {
   Datum VAR_18 = FUNC_10(VAR_11, VAR_7, &VAR_15);
   dsm_handle VAR_19 = FUNC_0(VAR_18);
   dsm_segment *VAR_20 = ((void*)0);
   ProgressMonitorData *VAR_21 = FUNC_6(VAR_19,
                 &VAR_20);

   if (VAR_21 != ((void*)0))
   {
    *VAR_5 = FUNC_9(*VAR_5, VAR_20);
    VAR_13 = FUNC_9(VAR_13, VAR_21);
   }
  }

  FUNC_1(VAR_11);
 }

 FUNC_2(VAR_11);

 return VAR_13;
}
