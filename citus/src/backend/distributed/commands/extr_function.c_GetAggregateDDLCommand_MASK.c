
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ aggkind; int aggnumdirectargs; scalar_t__ aggtransfn; char* aggtransspace; scalar_t__ aggfinalfn; int aggfinalmodify; char* aggmtransspace; scalar_t__ aggmfinalfn; scalar_t__ aggmtransfn; scalar_t__ aggminvtransfn; scalar_t__ aggcombinefn; scalar_t__ aggserialfn; scalar_t__ aggdeserialfn; scalar_t__ aggsortop; scalar_t__ aggmtranstype; scalar_t__ aggmfinalextra; scalar_t__ aggfinalextra; scalar_t__ aggtranstype; } ;
struct TYPE_9__ {scalar_t__ prokind; int proparallel; int pronamespace; int proname; } ;
struct TYPE_8__ {char* data; int member_0; } ;
typedef TYPE_1__ StringInfoData ;
typedef char RegProcedure ;
typedef scalar_t__ Oid ;
typedef int * HeapTuple ;
typedef TYPE_2__* Form_pg_proc ;
typedef TYPE_3__* Form_pg_aggregate ;
typedef int Datum ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_5 ;
 char* FUNC_4 (int ) ;


 int VAR_6 ;
 scalar_t__ VAR_7 ;



 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,char const) ;
 int FUNC_7 (int ,int *,int ,int*) ;
 char* FUNC_8 (int ) ;
 int VAR_8 ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (TYPE_1__*,char*,char const*,...) ;
 int FUNC_11 (TYPE_1__*,char) ;
 int FUNC_12 (TYPE_1__*,char const*) ;
 int FUNC_13 (int ,char*,char const) ;
 char* FUNC_14 (scalar_t__) ;
 char* FUNC_15 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_16 (int *,scalar_t__**,char***,char**) ;
 char* FUNC_17 (int ) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (char*) ;
 char* FUNC_20 (char*) ;
 char* FUNC_21 (char*) ;
 char* FUNC_22 (scalar_t__) ;
 char* FUNC_23 (char const*,char const*) ;

__attribute__((used)) static char *
FUNC_24(const RegProcedure VAR_9, bool VAR_10)
{
 StringInfoData VAR_11 = { 0 };
 HeapTuple VAR_12 = ((void*)0);
 Form_pg_proc VAR_13 = ((void*)0);
 HeapTuple VAR_14 = ((void*)0);
 Form_pg_aggregate VAR_15 = ((void*)0);
 const char *VAR_16 = ((void*)0);
 const char *VAR_17 = ((void*)0);
 int VAR_18 = 0;
 int VAR_19 = 0;
 Oid *VAR_20 = ((void*)0);
 char **VAR_21 = ((void*)0);
 char *VAR_22 = ((void*)0);
 int VAR_23 = -1;
 int VAR_24 = 0;
 int VAR_25 = 0;

 VAR_12 = FUNC_6(VAR_6, VAR_9);
 if (!FUNC_3(VAR_12))
 {
  FUNC_13(VAR_4, "cache lookup failed for %d", VAR_9);
 }

 VAR_13 = (Form_pg_proc) FUNC_2(VAR_12);

 FUNC_1(VAR_13->prokind == VAR_7);

 FUNC_18(&VAR_11);

 VAR_16 = FUNC_4(VAR_13->proname);
 VAR_17 = FUNC_17(VAR_13->pronamespace);
 FUNC_10(&VAR_11, "CREATE AGGREGATE %s(",
      FUNC_23(VAR_17, VAR_16));



 VAR_18 = FUNC_16(VAR_12, &VAR_20, &VAR_21, &VAR_22);

 VAR_14 = FUNC_6(VAR_0, VAR_9);
 if (!FUNC_3(VAR_14))
 {
  FUNC_13(VAR_4, "cache lookup failed for %d", VAR_9);
 }
 VAR_15 = (Form_pg_aggregate) FUNC_2(VAR_14);

 if (FUNC_0(VAR_15->aggkind))
 {
  VAR_23 = VAR_15->aggnumdirectargs;
 }

 for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++)
 {
  Oid VAR_26 = VAR_20[VAR_19];
  char *VAR_27 = VAR_21 ? VAR_21[VAR_19] : ((void*)0);
  char VAR_28 = VAR_22 ? VAR_22[VAR_19] : 132;
  const char *VAR_29;

  switch (VAR_28)
  {
   case 132:
   {
    VAR_29 = "";
    break;
   }

   case 131:
   {
    VAR_29 = "VARIADIC ";
    break;
   }

   default:
   {
    FUNC_13(VAR_4, "unexpected parameter mode '%c'", VAR_28);
    VAR_29 = ((void*)0);
    break;
   }
  }

  VAR_25++;
  if (VAR_24 == VAR_23)
  {
   FUNC_12(&VAR_11, " ORDER BY ");
  }
  else if (VAR_24)
  {
   FUNC_12(&VAR_11, ", ");
  }

  FUNC_12(&VAR_11, VAR_29);

  if (VAR_27 && VAR_27[0])
  {
   FUNC_10(&VAR_11, "%s ", FUNC_20(VAR_27));
  }

  FUNC_12(&VAR_11, FUNC_14(VAR_26));

  VAR_24++;


  if (VAR_24 == VAR_23 && VAR_19 == VAR_18 - 1)
  {
   VAR_19--;
  }
 }

 FUNC_10(&VAR_11, ") (STYPE = %s,SFUNC = %s",
      FUNC_14(VAR_15->aggtranstype),
      FUNC_22(VAR_15->aggtransfn));

 if (VAR_15->aggtransspace != 0)
 {
  FUNC_10(&VAR_11, ", SSPACE = %d", VAR_15->aggtransspace);
 }

 if (VAR_15->aggfinalfn != VAR_5)
 {
  const char *VAR_30 = ((void*)0);
  switch (VAR_15->aggfinalmodify)
  {
   case 135:
   {
    VAR_30 = "READ_ONLY";
    break;
   }

   case 133:
   {
    VAR_30 = "SHAREABLE";
    break;
   }

   case 134:
   {
    VAR_30 = "READ_WRITE";
    break;
   }
  }

  FUNC_10(&VAR_11, ", FINALFUNC = %s",
       FUNC_22(VAR_15->aggfinalfn));

  if (VAR_30 != ((void*)0))
  {
   FUNC_10(&VAR_11, ", FINALFUNC_MODIFY = %s", VAR_30);
  }

  if (VAR_15->aggfinalextra)
  {
   FUNC_12(&VAR_11, ", FINALFUNC_EXTRA");
  }
 }

 if (VAR_15->aggmtransspace != 0)
 {
  FUNC_10(&VAR_11, ", MSSPACE = %d", VAR_15->aggmtransspace);
 }

 if (VAR_15->aggmfinalfn)
 {
  const char *VAR_31 = ((void*)0);
  switch (VAR_15->aggfinalmodify)
  {
   case 135:
   {
    VAR_31 = "READ_ONLY";
    break;
   }

   case 133:
   {
    VAR_31 = "SHAREABLE";
    break;
   }

   case 134:
   {
    VAR_31 = "READ_WRITE";
    break;
   }
  }

  FUNC_10(&VAR_11, ", MFINALFUNC = %s",
       FUNC_22(VAR_15->aggmfinalfn));

  if (VAR_31 != ((void*)0))
  {
   FUNC_10(&VAR_11, ", MFINALFUNC_MODIFY = %s", VAR_31);
  }

  if (VAR_15->aggmfinalextra)
  {
   FUNC_12(&VAR_11, ", MFINALFUNC_EXTRA");
  }
 }

 if (VAR_15->aggmtransfn)
 {
  FUNC_10(&VAR_11, ", MSFUNC = %s",
       FUNC_22(VAR_15->aggmtransfn));

  if (VAR_15->aggmtranstype)
  {
   FUNC_10(&VAR_11, ", MSTYPE = %s",
        FUNC_14(VAR_15->aggmtranstype));
  }
 }

 if (VAR_15->aggtransspace != 0)
 {
  FUNC_10(&VAR_11, ", SSPACE = %d", VAR_15->aggtransspace);
 }

 if (VAR_15->aggminvtransfn)
 {
  FUNC_10(&VAR_11, ", MINVFUNC = %s",
       FUNC_22(VAR_15->aggminvtransfn));
 }

 if (VAR_15->aggcombinefn)
 {
  FUNC_10(&VAR_11, ", COMBINEFUNC = %s",
       FUNC_22(VAR_15->aggcombinefn));
 }

 if (VAR_15->aggserialfn)
 {
  FUNC_10(&VAR_11, ", SERIALFUNC = %s",
       FUNC_22(VAR_15->aggserialfn));
 }

 if (VAR_15->aggdeserialfn)
 {
  FUNC_10(&VAR_11, ", DESERIALFUNC = %s",
       FUNC_22(VAR_15->aggdeserialfn));
 }

 if (VAR_15->aggsortop != VAR_5)
 {
  FUNC_10(&VAR_11, ", SORTOP = %s",
       FUNC_15(VAR_15->aggsortop, VAR_20[0],
            VAR_20[0]));
 }

 {
  const char *VAR_32 = ((void*)0);
  switch (VAR_13->proparallel)
  {
   case 129:
   {
    VAR_32 = "SAFE";
    break;
   }

   case 130:
   {
    VAR_32 = "RESTRICTED";
    break;
   }

   case 128:
   {
    break;
   }

   default:
   {
    FUNC_13(VAR_8, "Unknown parallel option, ignoring: %c", VAR_13->proparallel);
    break;
   }
  }

  if (VAR_32 != ((void*)0))
  {
   FUNC_10(&VAR_11, ", PARALLEL = %s", VAR_32);
  }
 }

 {
  bool VAR_33 = 0;
  Datum VAR_34 = FUNC_7(VAR_0, VAR_14,
           VAR_2,
           &VAR_33);
  if (!VAR_33)
  {
   char *VAR_35 = FUNC_8(VAR_34);
   char *VAR_36 = FUNC_21(VAR_35);

   FUNC_10(&VAR_11, ", INITCOND = %s", VAR_36);

   FUNC_19(VAR_36);
   FUNC_19(VAR_35);
  }
 }

 {
  bool VAR_37 = 0;
  Datum VAR_38 = FUNC_7(VAR_0, VAR_14,
           VAR_3,
           &VAR_37);
  if (!VAR_37)
  {
   char *VAR_39 = FUNC_8(VAR_38);
   char *VAR_40 = FUNC_21(VAR_39);

   FUNC_10(&VAR_11, ", MINITCOND = %s", VAR_40);

   FUNC_19(VAR_40);
   FUNC_19(VAR_39);
  }
 }

 if (VAR_15->aggkind == VAR_1)
 {
  FUNC_12(&VAR_11, ", HYPOTHETICAL");
 }

 FUNC_11(&VAR_11, ')');

 FUNC_5(VAR_14);
 FUNC_5(VAR_12);


 if (VAR_10)
 {
  return FUNC_9(VAR_11.data);
 }

 return VAR_11.data;
}
