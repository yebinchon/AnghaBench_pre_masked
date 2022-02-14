
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callback_data {int writableSchema; int db; int out; } ;
typedef int sqlite3_stmt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char**) ;
 char* FUNC_1 (char*,char const*,char) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct callback_data*,char*,char const*) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*,char const*,char const*,char const*) ;
 int FUNC_9 (int ,char*,int,int **,int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (char const*,char*) ;
 scalar_t__ FUNC_12 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_13(void *VAR_3, int VAR_4, char **VAR_5, char **VAR_6){
  int VAR_7;
  const char *VAR_8;
  const char *VAR_9;
  const char *VAR_10;
  const char *VAR_11 = 0;
  struct callback_data *VAR_12 = (struct callback_data *)VAR_3;

  FUNC_0(VAR_6);
  if( VAR_4!=3 ) return 1;
  VAR_8 = VAR_5[0];
  VAR_9 = VAR_5[1];
  VAR_10 = VAR_5[2];

  if( FUNC_11(VAR_8, "sqlite_sequence")==0 ){
    VAR_11 = "DELETE FROM sqlite_sequence;\n";
  }else if( FUNC_11(VAR_8, "sqlite_stat1")==0 ){
    FUNC_2(VAR_12->out, "ANALYZE sqlite_master;\n");
  }else if( FUNC_12(VAR_8, "sqlite_", 7)==0 ){
    return 0;
  }else if( FUNC_12(VAR_10, "CREATE VIRTUAL TABLE", 20)==0 ){
    char *VAR_13;
    if( !VAR_12->writableSchema ){
      FUNC_2(VAR_12->out, "PRAGMA writable_schema=ON;\n");
      VAR_12->writableSchema = 1;
    }
    VAR_13 = FUNC_8(
       "INSERT INTO sqlite_master(type,name,tbl_name,rootpage,sql)"
       "VALUES('table','%q','%q',0,'%q');",
       VAR_8, VAR_8, VAR_10);
    FUNC_2(VAR_12->out, "%s\n", VAR_13);
    FUNC_7(VAR_13);
    return 0;
  }else{
    FUNC_2(VAR_12->out, "%s;\n", VAR_10);
  }

  if( FUNC_11(VAR_9, "table")==0 ){
    sqlite3_stmt *VAR_14 = 0;
    char *VAR_15 = 0;
    char *VAR_16 = 0;
    char *VAR_17 = 0;
    int VAR_18 = 0;

    VAR_16 = FUNC_1(VAR_16, "PRAGMA table_info(", 0);
    VAR_16 = FUNC_1(VAR_16, VAR_8, '"');
    VAR_16 = FUNC_1(VAR_16, ");", 0);

    VAR_7 = FUNC_9(VAR_12->db, VAR_16, -1, &VAR_14, 0);
    FUNC_3(VAR_16);
    if( VAR_7!=VAR_1 || !VAR_14 ){
      return 1;
    }

    VAR_15 = FUNC_1(VAR_15, "SELECT 'INSERT INTO ' || ", 0);


    VAR_17 = FUNC_1(VAR_17, VAR_8, '"');
    if( VAR_17 ){
      VAR_15 = FUNC_1(VAR_15, VAR_17, '\'');
      FUNC_3(VAR_17);
    }
    VAR_15 = FUNC_1(VAR_15, " || ' VALUES(' || ", 0);
    VAR_7 = FUNC_10(VAR_14);
    while( VAR_7==VAR_2 ){
      const char *VAR_19 = (const char *)FUNC_5(VAR_14, 1);
      VAR_15 = FUNC_1(VAR_15, "quote(", 0);
      VAR_15 = FUNC_1(VAR_15, VAR_19, '"');
      VAR_7 = FUNC_10(VAR_14);
      if( VAR_7==VAR_2 ){
        VAR_15 = FUNC_1(VAR_15, "), ", 0);
      }else{
        VAR_15 = FUNC_1(VAR_15, ") ", 0);
      }
      VAR_18++;
    }
    VAR_7 = FUNC_6(VAR_14);
    if( VAR_7!=VAR_1 || VAR_18==0 ){
      FUNC_3(VAR_15);
      return 1;
    }
    VAR_15 = FUNC_1(VAR_15, "|| ')' FROM  ", 0);
    VAR_15 = FUNC_1(VAR_15, VAR_8, '"');

    VAR_7 = FUNC_4(VAR_12, VAR_15, VAR_11);
    if( VAR_7==VAR_0 ){
      VAR_15 = FUNC_1(VAR_15, " ORDER BY rowid DESC", 0);
      FUNC_4(VAR_12, VAR_15, 0);
    }
    FUNC_3(VAR_15);
  }
  return 0;
}
