
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
typedef int kuuid_line ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,char*,size_t*,int *,int ) ;
 scalar_t__ FUNC_4 (char*,int ) ;

__attribute__((used)) static void FUNC_5(uuid_t VAR_1) {
 char VAR_2[VAR_0];
 FUNC_2(VAR_2, 0, sizeof(VAR_2));
 size_t VAR_3 = sizeof(VAR_2);
 int VAR_4 = FUNC_3("kern.uuid", VAR_2, &VAR_3, ((void*)0), 0);
 FUNC_0(VAR_4, "sysctl kern.uuid");

 FUNC_1(FUNC_4(VAR_2, VAR_1) == 0,
   "Parse running kernel uuid");
}
