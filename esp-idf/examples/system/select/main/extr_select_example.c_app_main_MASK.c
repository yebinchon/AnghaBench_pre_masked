
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int *,int,int *) ;

void FUNC_2(void)
{
    FUNC_1(VAR_3, "uart1_write_task", 4*1024, ((void*)0), 5, ((void*)0));
    FUNC_1(VAR_2, "socket_write_task", 4*1024, ((void*)0), 5, ((void*)0));
    FUNC_0(1000 / VAR_0);
    FUNC_1(VAR_1, "select_task", 4*1024, ((void*)0), 5, ((void*)0));
}
