
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_4__ {int QuadPart; } ;
typedef TYPE_1__ LARGE_INTEGER ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct timeval*,int *) ;

uint64_t FUNC_3()
{
    struct timeval VAR_0;
    FUNC_2(&VAR_0, ((void*)0));
    return ((uint64_t)VAR_0.tv_sec * 1000000 + (uint64_t)VAR_0.tv_usec);

}
