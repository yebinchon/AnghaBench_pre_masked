
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int posix_spawnattr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int,char*) ;
 int FUNC_3 (int *,char*,int *,int *,char**,char**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void
FUNC_7(int VAR_4, char *VAR_5[])
{
 int VAR_6;
 posix_spawnattr_t VAR_7;
 extern char **VAR_8;
 char *VAR_9[VAR_4 + 1 + 1 ];
 int VAR_10;
 char VAR_11[VAR_1];
 uint32_t VAR_12 = VAR_1;

 VAR_6 = FUNC_0(VAR_11, &VAR_12);
 if (VAR_6) FUNC_1(VAR_0, "_NSGetExecutablePath");

 for (VAR_10=0; VAR_10 < VAR_4; VAR_10++) {
  VAR_9[VAR_10] = VAR_5[VAR_10];
 }

 VAR_9[VAR_10] = "--switched_apptype";
 VAR_9[VAR_10+1] = ((void*)0);

 VAR_6 = FUNC_4(&VAR_7);
 if (VAR_6) FUNC_2(VAR_0, VAR_6, "posix_spawnattr_init");

 VAR_6 = FUNC_5(&VAR_7, VAR_3);
 if (VAR_6) FUNC_2(VAR_0, VAR_6, "posix_spawnattr_setflags");

 VAR_6 = FUNC_6(&VAR_7, VAR_2);
 if (VAR_6) FUNC_2(VAR_0, VAR_6, "posix_spawnattr_setprocesstype_np");

 VAR_6 = FUNC_3(((void*)0), VAR_11, ((void*)0), &VAR_7, VAR_9, VAR_8);
 if (VAR_6) FUNC_2(VAR_0, VAR_6, "posix_spawn");
}
