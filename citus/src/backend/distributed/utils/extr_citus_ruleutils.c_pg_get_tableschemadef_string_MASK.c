
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_10__ ;


typedef TYPE_2__* TupleDesc ;
struct TYPE_26__ {size_t num_defval; size_t num_check; TYPE_9__* check; TYPE_10__* defval; } ;
typedef TYPE_3__ TupleConstr ;
struct TYPE_32__ {char* ccname; int ccbin; } ;
struct TYPE_31__ {char* servername; } ;
struct TYPE_30__ {int options; int serverid; } ;
struct TYPE_29__ {scalar_t__ attgenerated; scalar_t__ attcollation; scalar_t__ attnotnull; scalar_t__ atthasdef; int atttypmod; int atttypid; int attname; int attisdropped; } ;
struct TYPE_28__ {TYPE_1__* rd_rel; } ;
struct TYPE_27__ {char* data; int member_3; int member_2; int member_1; int * member_0; } ;
struct TYPE_25__ {int natts; TYPE_3__* constr; } ;
struct TYPE_24__ {scalar_t__ relpersistence; char relkind; } ;
struct TYPE_23__ {int adnum; int adbin; } ;
typedef TYPE_4__ StringInfoData ;
typedef TYPE_5__* Relation ;
typedef int Oid ;
typedef int Node ;
typedef int List ;
typedef TYPE_6__* Form_pg_attribute ;
typedef TYPE_7__ ForeignTable ;
typedef TYPE_8__ ForeignServer ;
typedef TYPE_9__ ConstrCheck ;
typedef size_t AttrNumber ;
typedef TYPE_10__ AttrDefault ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 TYPE_8__* FUNC_4 (int ) ;
 TYPE_7__* FUNC_5 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 char* FUNC_6 (int ) ;
 char VAR_5 ;
 char VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_7 (int ) ;
 TYPE_2__* FUNC_8 (TYPE_5__*) ;
 TYPE_6__* FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (TYPE_4__*,char*,char*) ;
 int FUNC_11 (TYPE_4__*,char const*) ;
 int FUNC_12 (int *,int *) ;
 int * FUNC_13 (char*,int ) ;
 char* FUNC_14 (int *,int *,int,int) ;
 char* FUNC_15 (int ) ;
 char* FUNC_16 (int ,int ) ;
 char* FUNC_17 (scalar_t__) ;
 char* FUNC_18 (int ,int ) ;
 int FUNC_19 (TYPE_4__*) ;
 int FUNC_20 (char*) ;
 char* FUNC_21 (char const*) ;
 int FUNC_22 (TYPE_5__*,int ) ;
 TYPE_5__* FUNC_23 (int ,int ) ;
 scalar_t__ FUNC_24 (int ) ;

char *
FUNC_25(Oid VAR_8, bool VAR_9)
{
 Relation VAR_10 = ((void*)0);
 char *VAR_11 = ((void*)0);
 char VAR_12 = 0;
 TupleDesc VAR_13 = ((void*)0);
 TupleConstr *VAR_14 = ((void*)0);
 int VAR_15 = 0;
 bool VAR_16 = 0;
 AttrNumber VAR_17 = 0;
 AttrNumber VAR_18 = 0;
 AttrNumber VAR_19 = 0;
 StringInfoData VAR_20 = { ((void*)0), 0, 0, 0 };
 VAR_10 = FUNC_23(VAR_8, VAR_1);
 VAR_11 = FUNC_18(VAR_8, VAR_4);

 FUNC_2(VAR_8);

 FUNC_19(&VAR_20);

 if (FUNC_7(VAR_8))
 {
  FUNC_11(&VAR_20, "CREATE ");

  if (VAR_10->rd_rel->relpersistence == VAR_7)
  {
   FUNC_11(&VAR_20, "UNLOGGED ");
  }

  FUNC_10(&VAR_20, "TABLE %s (", VAR_11);
 }
 else
 {
  FUNC_10(&VAR_20, "CREATE FOREIGN TABLE %s (", VAR_11);
 }






 VAR_13 = FUNC_8(VAR_10);
 VAR_14 = VAR_13->constr;

 for (VAR_15 = 0; VAR_15 < VAR_13->natts; VAR_15++)
 {
  Form_pg_attribute VAR_21 = FUNC_9(VAR_13, VAR_15);
  if (!VAR_21->attisdropped)
  {
   const char *VAR_22 = ((void*)0);
   const char *VAR_23 = ((void*)0);

   if (VAR_16)
   {
    FUNC_11(&VAR_20, ", ");
   }
   VAR_16 = 1;

   VAR_22 = FUNC_6(VAR_21->attname);
   FUNC_10(&VAR_20, "%s ", FUNC_21(VAR_22));

   VAR_23 = FUNC_16(VAR_21->atttypid,
               VAR_21->atttypmod);
   FUNC_11(&VAR_20, VAR_23);


   if (VAR_21->atthasdef)
   {
    AttrDefault *VAR_24 = ((void*)0);
    AttrDefault *VAR_25 = ((void*)0);

    Node *VAR_26 = ((void*)0);
    List *VAR_27 = ((void*)0);
    char *VAR_28 = ((void*)0);

    FUNC_1(VAR_14 != ((void*)0));

    VAR_24 = VAR_14->defval;
    FUNC_1(VAR_24 != ((void*)0));

    VAR_25 = &(VAR_24[VAR_17]);
    VAR_17++;

    FUNC_1(VAR_25->adnum == (VAR_15 + 1));
    FUNC_1(VAR_17 <= VAR_14->num_defval);


    VAR_26 = (Node *) FUNC_24(VAR_25->adbin);






    if (VAR_9 ||
     !FUNC_12(VAR_26, ((void*)0)))
    {
     VAR_27 = FUNC_13(VAR_11, VAR_8);


     VAR_28 = FUNC_14(VAR_26, VAR_27,
                0, 0);
     FUNC_10(&VAR_20, " DEFAULT %s", VAR_28);

    }
   }


   if (VAR_21->attnotnull)
   {
    FUNC_11(&VAR_20, " NOT NULL");
   }

   if (VAR_21->attcollation != VAR_3 &&
    VAR_21->attcollation != VAR_2)
   {
    FUNC_10(&VAR_20, " COLLATE %s", FUNC_17(
          VAR_21->attcollation));
   }
  }
 }






 if (VAR_14 != ((void*)0))
 {
  VAR_19 = VAR_14->num_check;
 }

 for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++)
 {
  ConstrCheck *VAR_29 = VAR_14->check;
  ConstrCheck *VAR_30 = &(VAR_29[VAR_18]);

  Node *VAR_31 = ((void*)0);
  List *VAR_32 = ((void*)0);
  char *VAR_33 = ((void*)0);


  if (VAR_16 || VAR_18 > 0)
  {
   FUNC_11(&VAR_20, ", ");
  }

  FUNC_10(&VAR_20, "CONSTRAINT %s CHECK ",
       FUNC_21(VAR_30->ccname));


  VAR_31 = (Node *) FUNC_24(VAR_30->ccbin);
  VAR_32 = FUNC_13(VAR_11, VAR_8);


  VAR_33 = FUNC_14(VAR_31, VAR_32, 0, 0);

  FUNC_11(&VAR_20, VAR_33);
 }


 FUNC_11(&VAR_20, ")");





 VAR_12 = VAR_10->rd_rel->relkind;
 if (VAR_12 == VAR_5)
 {
  ForeignTable *VAR_34 = FUNC_5(VAR_8);
  ForeignServer *VAR_35 = FUNC_4(VAR_34->serverid);

  char *VAR_36 = VAR_35->servername;
  FUNC_10(&VAR_20, " SERVER %s", FUNC_21(VAR_36));
  FUNC_0(&VAR_20, VAR_34->options);
 }
 else if (VAR_12 == VAR_6)
 {
  char *VAR_37 = FUNC_3(VAR_8);
  FUNC_10(&VAR_20, " PARTITION BY %s ", VAR_37);
 }





 {
  char *VAR_38 = FUNC_15(VAR_8);
  if (VAR_38)
  {
   FUNC_10(&VAR_20, " WITH (%s)", VAR_38);
   FUNC_20(VAR_38);
  }
 }

 FUNC_22(VAR_10, VAR_1);

 return (VAR_20.data);
}
