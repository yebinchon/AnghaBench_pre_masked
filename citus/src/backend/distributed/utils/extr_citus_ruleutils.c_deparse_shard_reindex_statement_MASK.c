
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_7__ {int kind; scalar_t__ options; int name; TYPE_1__* relation; scalar_t__ concurrent; } ;
struct TYPE_6__ {char* relname; int schemaname; } ;
typedef int StringInfo ;
typedef TYPE_2__ ReindexStmt ;
typedef int Oid ;


 int FUNC_0 (char**,int ) ;
 scalar_t__ VAR_0 ;





 int FUNC_1 (int ,char*,char const*,int ) ;
 int FUNC_2 (int ,char*) ;
 TYPE_2__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;

void
FUNC_6(ReindexStmt *VAR_1, Oid VAR_2, int64 VAR_3,
        StringInfo VAR_4)
{
 ReindexStmt *VAR_5 = FUNC_3(VAR_1);
 char *VAR_6 = ((void*)0);



 const char *VAR_7 = "";



 if (VAR_5->kind == 131 ||
  VAR_5->kind == 128)
 {
  VAR_6 = VAR_5->relation->relname;


  FUNC_0(&VAR_6, VAR_3);
 }

 FUNC_2(VAR_4, "REINDEX ");

 if (VAR_5->options == VAR_0)
 {
  FUNC_2(VAR_4, "(VERBOSE) ");
 }

 switch (VAR_5->kind)
 {
  case 131:
  {
   FUNC_1(VAR_4, "INDEX %s%s", VAR_7,
        FUNC_5(VAR_5->relation->schemaname,
              VAR_6));
   break;
  }

  case 128:
  {
   FUNC_1(VAR_4, "TABLE %s%s", VAR_7,
        FUNC_5(VAR_5->relation->schemaname,
              VAR_6));
   break;
  }

  case 130:
  {
   FUNC_1(VAR_4, "SCHEMA %s%s", VAR_7,
        FUNC_4(VAR_5->name));
   break;
  }

  case 129:
  {
   FUNC_1(VAR_4, "SYSTEM %s%s", VAR_7,
        FUNC_4(VAR_5->name));
   break;
  }

  case 132:
  {
   FUNC_1(VAR_4, "DATABASE %s%s", VAR_7,
        FUNC_4(VAR_5->name));
   break;
  }
 }
}
