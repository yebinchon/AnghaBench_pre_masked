
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef int fd_set ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int,int *,int *,int *,struct timeval*) ;

int FUNC_3()
{
    fd_set VAR_1;
    FUNC_1(&VAR_1);

    struct timeval VAR_2;
    VAR_2.tv_sec = 0;
    VAR_2.tv_usec = 0;
    FUNC_0(VAR_0, &VAR_1);

    if (FUNC_2(1, &VAR_1, ((void*)0), ((void*)0), &VAR_2)){
        return 1;
    }
    return 0;
}
