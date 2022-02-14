
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef size_t uint32 ;
typedef int bytea ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_17__ {char* null_print_client; char* delim; scalar_t__ binary; int rowcontext; } ;
struct TYPE_16__ {scalar_t__ attgenerated; scalar_t__ attisdropped; } ;
struct TYPE_15__ {int natts; } ;
typedef int MemoryContext ;
typedef TYPE_2__* Form_pg_attribute ;
typedef int FmgrInfo ;
typedef int Datum ;
typedef TYPE_3__* CopyOutState ;
typedef int CopyCoercionData ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_3__*,char) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;
 int FUNC_5 (TYPE_3__*,size_t) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (TYPE_3__*,char*) ;
 int FUNC_8 (int ) ;
 char* FUNC_9 (int *,int ) ;
 int * FUNC_10 (int *,int ) ;
 TYPE_2__* FUNC_11 (TYPE_1__*,size_t) ;
 int FUNC_12 (int *) ;
 int VAR_1 ;
 int FUNC_13 (int *) ;

void
FUNC_14(Datum *VAR_2, bool *VAR_3, TupleDesc VAR_4,
      CopyOutState VAR_5, FmgrInfo *VAR_6,
      CopyCoercionData *VAR_7)
{
 uint32 VAR_8 = (uint32) VAR_4->natts;
 uint32 VAR_9 = FUNC_0(VAR_4);
 uint32 VAR_10 = 0;
 uint32 VAR_11 = 0;

 MemoryContext VAR_12 = FUNC_8(VAR_5->rowcontext);

 if (VAR_5->binary)
 {
  FUNC_5(VAR_5, VAR_9);
 }
 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
 {
  Form_pg_attribute VAR_13 = FUNC_11(VAR_4, VAR_11);
  Datum VAR_14 = VAR_2[VAR_11];
  bool VAR_15 = VAR_3[VAR_11];
  bool VAR_16 = 0;

  if (!VAR_15 && VAR_7 != ((void*)0))
  {
   VAR_14 = FUNC_1(VAR_14, &VAR_7[VAR_11]);
  }

  if (VAR_13->attisdropped



   )
  {
   continue;
  }
  else if (VAR_5->binary)
  {
   if (!VAR_15)
   {
    FmgrInfo *VAR_17 = &VAR_6[VAR_11];
    bytea *VAR_18 = FUNC_10(VAR_17, VAR_14);

    FUNC_6(VAR_5, FUNC_13(VAR_18) - VAR_1);
    FUNC_4(VAR_5, FUNC_12(VAR_18),
        FUNC_13(VAR_18) - VAR_1);
   }
   else
   {
    FUNC_6(VAR_5, -1);
   }
  }
  else
  {
   if (!VAR_15)
   {
    FmgrInfo *VAR_19 = &VAR_6[VAR_11];
    char *VAR_20 = FUNC_9(VAR_19, VAR_14);

    FUNC_2(VAR_5, VAR_20);
   }
   else
   {
    FUNC_7(VAR_5, VAR_5->null_print_client);
   }

   VAR_16 = ((VAR_10 + 1) == VAR_9);
   if (!VAR_16)
   {
    FUNC_3(VAR_5, VAR_5->delim[0]);
   }
  }

  VAR_10++;
 }

 if (!VAR_5->binary)
 {


  FUNC_3(VAR_5, '\n');



 }

 FUNC_8(VAR_12);
}
