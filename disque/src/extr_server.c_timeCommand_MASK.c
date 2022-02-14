
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;
typedef int client ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct timeval*,int *) ;

void FUNC_3(client *VAR_0) {
    struct timeval VAR_1;



    FUNC_2(&VAR_1,((void*)0));
    FUNC_1(VAR_0,2);
    FUNC_0(VAR_0,VAR_1.tv_sec);
    FUNC_0(VAR_0,VAR_1.tv_usec);
}
