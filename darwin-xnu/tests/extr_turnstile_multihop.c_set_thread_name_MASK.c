
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
typedef int name ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,char*,char const*,int) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_0)
{
 char VAR_1[50] = "";

 thread_t VAR_2 = FUNC_1(FUNC_2());

 int VAR_3 = FUNC_0(VAR_2);

 FUNC_4(VAR_1, sizeof(VAR_1), "%s at pri %2d", VAR_0, VAR_3);
 FUNC_3(VAR_1);
}
