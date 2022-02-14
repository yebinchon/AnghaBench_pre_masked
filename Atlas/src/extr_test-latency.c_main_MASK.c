
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char gchar ;


 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,int *) ;
 char* FUNC_3 (char*,char*) ;
 int VAR_0 ;
 int FUNC_4 (char const*,int,...) ;

int FUNC_5(int VAR_1, char **VAR_2) {
 int VAR_3;
 const gchar *VAR_4;
 const gchar *VAR_5;
 const gchar *VAR_6;
 const gchar *VAR_7;

 VAR_4 = FUNC_3("MYSQL_TEST_USER", "root");
 VAR_5 = FUNC_3("MYSQL_TEST_PASSWORD", "");
 VAR_6 = FUNC_3("MYSQL_TEST_DB", "test");
 VAR_7 = FUNC_3("MYSQL_TEST_HOST", "127.0.0.1");

 FUNC_2(VAR_0, ((void*)0));






 for (VAR_3 = 0; VAR_3 < 10; VAR_3++) {


  FUNC_0("%s:%d", VAR_7, 3306);
  FUNC_4(VAR_7, 3306, VAR_4, VAR_5, VAR_6);
  FUNC_1("benchmark %s", "done");

  FUNC_0("%s:%d", VAR_7, 4040);
  FUNC_4(VAR_7, 4040, VAR_4, VAR_5, VAR_6);
  FUNC_1("benchmark %s", "done");
 }

 return 0;
}
