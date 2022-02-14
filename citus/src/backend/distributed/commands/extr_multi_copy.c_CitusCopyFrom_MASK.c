
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int relation; scalar_t__ is_program; int * filename; } ;
typedef int Oid ;
typedef TYPE_1__ CopyStmt ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_7 ;
 char FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int * VAR_10 ;
 int FUNC_12 () ;

__attribute__((used)) static void
FUNC_13(CopyStmt *VAR_11, char *VAR_12)
{
 bool VAR_13 = 0;

 FUNC_0();


 if (VAR_11->filename != ((void*)0) && !FUNC_12())
 {
  if (VAR_11->is_program)
  {
   FUNC_8(VAR_6,
     (FUNC_9(VAR_5),
      FUNC_11("must be superuser to COPY to or from an external program"),
      FUNC_10("Anyone can COPY to stdout or from stdin. "
        "psql's \\copy command also works for anyone.")));
  }
  else
  {
   FUNC_8(VAR_6,
     (FUNC_9(VAR_5),
      FUNC_11("must be superuser to COPY to or from a file"),
      FUNC_10("Anyone can COPY to stdout or from stdin. "
        "psql's \\copy command also works for anyone.")));
  }
 }

 VAR_10 = ((void*)0);
 VAR_13 = FUNC_5(VAR_11);
 if (VAR_13)
 {
  FUNC_1(VAR_11, VAR_12);
 }
 else
 {
  Oid VAR_14 = FUNC_7(VAR_11->relation, VAR_7, 0);
  char VAR_15 = FUNC_6(VAR_14);


  FUNC_4(VAR_14);

  if (VAR_15 == VAR_1 || VAR_15 ==
   VAR_3 || VAR_15 == VAR_2)
  {
   FUNC_2(VAR_11, VAR_12);
  }
  else if (VAR_15 == VAR_0)
  {
   FUNC_3(VAR_11, VAR_12, VAR_14);
  }
  else
  {
   FUNC_8(VAR_6, (FUNC_9(VAR_4),
       FUNC_11("unsupported partition method")));
  }
 }

 VAR_9 = VAR_8;
}
