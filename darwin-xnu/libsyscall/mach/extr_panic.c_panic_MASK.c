
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*,char const*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,int) ;

void
FUNC_4(const char *VAR_3, ...)
{
 char VAR_4[1024];
 int VAR_5 = FUNC_0(VAR_4, sizeof(VAR_4), "panic: %s\n", VAR_3);
 FUNC_3(VAR_1, VAR_4, VAR_5);


 (void) FUNC_2(VAR_2, 0x1000);


 FUNC_1();
}
