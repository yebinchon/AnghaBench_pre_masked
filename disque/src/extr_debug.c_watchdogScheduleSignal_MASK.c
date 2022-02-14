
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_3__ {int tv_sec; int tv_usec; } ;
struct itimerval {TYPE_2__ it_interval; TYPE_1__ it_value; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct itimerval*,int *) ;

void FUNC_1(int VAR_1) {
    struct itimerval VAR_2;


    VAR_2.it_value.tv_sec = VAR_1/1000;
    VAR_2.it_value.tv_usec = (VAR_1%1000)*1000;

    VAR_2.it_interval.tv_sec = 0;
    VAR_2.it_interval.tv_usec = 0;
    FUNC_0(VAR_0, &VAR_2, ((void*)0));
}
