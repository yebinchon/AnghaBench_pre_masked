
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 char* FUNC_2 () ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (char*,int ,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static bool
FUNC_8(int VAR_3)
{
 char *VAR_4 = ((void*)0);

 FUNC_0(FUNC_1());
 FUNC_0(VAR_2);

 VAR_4 = FUNC_2();

 if (!FUNC_3(VAR_4, VAR_0))
 {
  FUNC_4(VAR_3, (FUNC_7("loaded Citus library version differs from installed "
        "extension version"),
       FUNC_5("Loaded library requires %s, but the installed "
           "extension version is %s.", VAR_1,
           VAR_4),
       FUNC_6("Run ALTER EXTENSION citus UPDATE and try again.")));
  return 0;
 }

 return 1;
}
