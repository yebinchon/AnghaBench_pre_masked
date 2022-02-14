
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,int ,int ,char*,int*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(int VAR_5, char VAR_6[VAR_0])
{
 socklen_t VAR_7 = VAR_0;
 VAR_2; VAR_3; FUNC_0(FUNC_2(VAR_5, VAR_1, VAR_4, VAR_6, &VAR_7), ((void*)0));
 VAR_2; FUNC_1(VAR_7 > 0, ((void*)0));
 VAR_2; FUNC_1(VAR_6[VAR_7-1] == '\0', ((void*)0));
 VAR_2; FUNC_1(FUNC_3(VAR_6)+1 == VAR_7, "got ifname \"%s\" len %zd expected %u", VAR_6, FUNC_3(VAR_6), VAR_7);
}
