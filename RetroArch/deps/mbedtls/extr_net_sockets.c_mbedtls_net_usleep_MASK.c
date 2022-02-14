
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int suseconds_t ;
struct timeval {unsigned long tv_sec; int tv_usec; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,int *,int *,int *,struct timeval*) ;

void FUNC_2( unsigned long VAR_0 )
{



    struct timeval VAR_1;
    VAR_1.tv_sec = VAR_0 / 1000000;


    VAR_1.tv_usec = (suseconds_t) VAR_0 % 1000000;



    FUNC_1( 0, ((void*)0), ((void*)0), ((void*)0), &VAR_1 );

}
