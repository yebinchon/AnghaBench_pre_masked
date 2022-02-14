
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (char*,char*) ;
 int VAR_0 ;
 int FUNC_3 (int*,char* const,int *,int *,char* const*,int ) ;
 int VAR_1 ;
 int FUNC_4 (char*,int,char*,int) ;
 int FUNC_5 (int,int*,int ) ;

__attribute__((used)) static int FUNC_6(int VAR_2) {
 if(!VAR_1) return 0;


 char VAR_3[10];
 FUNC_4(VAR_3, 10, "%d", VAR_2);

 FUNC_2("Sleepeing for %s seconds...", VAR_3);

 int VAR_4, VAR_5;
 char *const VAR_6[] = {"/usr/bin/pmset", "relative", "wake", VAR_3, ((void*)0)};
 FUNC_1((VAR_4 = FUNC_3(&VAR_5, VAR_6[0], ((void*)0), ((void*)0), VAR_6, VAR_0)), ((void*)0));

 FUNC_0(FUNC_5(VAR_5, &VAR_4, 0), VAR_5, ((void*)0));
 FUNC_0(VAR_4, 0, ((void*)0));

 char *const VAR_7[] = {"/usr/bin/pmset", "sleepnow", ((void*)0)};
 FUNC_1((VAR_4 = FUNC_3(&VAR_5, VAR_7[0], ((void*)0), ((void*)0), VAR_7, VAR_0)), ((void*)0));

 FUNC_0(FUNC_5(VAR_5, &VAR_4, 0), VAR_5, ((void*)0));
 FUNC_0(VAR_4, 0, ((void*)0));

 return 0;
}
