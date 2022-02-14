
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int ,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

bool
FUNC_6(int VAR_3)
{
 char *VAR_4 = ((void*)0);

 if (!VAR_2)
 {
  return 1;
 }

 VAR_4 = FUNC_0();

 if (!FUNC_1(VAR_4, VAR_0))
 {
  FUNC_2(VAR_3, (FUNC_5("loaded Citus library version differs from latest "
        "available extension version"),
       FUNC_3("Loaded library requires %s, but the latest control "
           "file specifies %s.", VAR_1,
           VAR_4),
       FUNC_4("Restart the database to load the latest Citus "
         "library.")));
  return 0;
 }

 return 1;
}
