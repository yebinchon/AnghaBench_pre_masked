
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int *,int *,int *) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(void *VAR_5)
{
    FUNC_3("init hi_interrupt on CPU%d \n", FUNC_5());
    FUNC_0(FUNC_1(VAR_2, VAR_1 | VAR_0, ((void*)0), ((void*)0), &VAR_4));
    while (VAR_3 == 0);
    FUNC_2(VAR_4);
    FUNC_3("disable hi_interrupt on CPU%d \n", FUNC_5());
    FUNC_4(((void*)0));
}
