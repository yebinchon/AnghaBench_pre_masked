
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_9__ {char* idxname; scalar_t__ indexParams; scalar_t__ indexIncludingParams; int * whereClause; int options; int accessMethod; TYPE_1__* relation; scalar_t__ if_not_exists; scalar_t__ concurrent; scalar_t__ unique; } ;
struct TYPE_8__ {char* relname; int schemaname; } ;
typedef int StringInfo ;
typedef int Oid ;
typedef int List ;
typedef TYPE_2__ IndexStmt ;


 int FUNC_0 (char**,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,char*,char*,...) ;
 int FUNC_3 (int ,char) ;
 int FUNC_4 (int ,char*) ;
 TYPE_2__* FUNC_5 (TYPE_2__*) ;
 int * FUNC_6 (char*,int ) ;
 int FUNC_7 (int *,int *,int,int) ;
 int FUNC_8 (int ,scalar_t__,int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,char*) ;
 TYPE_2__* FUNC_11 (int ,TYPE_2__*,int *) ;

void
FUNC_12(IndexStmt *VAR_1, Oid VAR_2, int64 VAR_3,
         StringInfo VAR_4)
{
 IndexStmt *VAR_5 = FUNC_5(VAR_1);
 char *VAR_6 = VAR_5->relation->relname;
 char *VAR_7 = VAR_5->idxname;
 List *VAR_8 = ((void*)0);


 FUNC_0(&VAR_6, VAR_3);
 FUNC_0(&VAR_7, VAR_3);


 VAR_8 = FUNC_6(VAR_6, VAR_2);
 VAR_5 = FUNC_11(VAR_2, VAR_5, ((void*)0));

 FUNC_2(VAR_4, "CREATE %s INDEX %s %s %s ON %s USING %s ",
      (VAR_5->unique ? "UNIQUE" : ""),
      (VAR_5->concurrent ? "CONCURRENTLY" : ""),
      (VAR_5->if_not_exists ? "IF NOT EXISTS" : ""),
      FUNC_9(VAR_7),
      FUNC_10(VAR_5->relation->schemaname,
            VAR_6),
      VAR_5->accessMethod);


 FUNC_3(VAR_4, '(');
 FUNC_8(VAR_4, VAR_5->indexParams, VAR_8);
 FUNC_4(VAR_4, ") ");


 if (VAR_5->indexIncludingParams != VAR_0)
 {
  FUNC_4(VAR_4, "INCLUDE (");
  FUNC_8(VAR_4, VAR_5->indexIncludingParams, VAR_8);
  FUNC_3(VAR_4, ')');
 }

 FUNC_1(VAR_4, VAR_5->options);

 if (VAR_5->whereClause != ((void*)0))
 {
  FUNC_2(VAR_4, "WHERE %s", FUNC_7(VAR_5->whereClause,
                VAR_8, 0,
                0));
 }
}
