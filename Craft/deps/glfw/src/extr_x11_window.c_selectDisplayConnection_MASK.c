
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int dummy; } ;
typedef int fd_set ;
struct TYPE_3__ {int display; } ;
struct TYPE_4__ {TYPE_1__ x11; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int const,int *) ;
 int FUNC_2 (int *) ;
 TYPE_2__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int const,int *,int *,int *,struct timeval*) ;

void FUNC_4(struct timeval* VAR_3)
{
    fd_set VAR_4;
    int VAR_5;
    const int VAR_6 = FUNC_0(VAR_1.x11.display);

    FUNC_2(&VAR_4);
    FUNC_1(VAR_6, &VAR_4);







    do
    {
        VAR_5 = FUNC_3(VAR_6 + 1, &VAR_4, ((void*)0), ((void*)0), VAR_3);
    }
    while (VAR_5 == -1 && VAR_2 == VAR_0 && VAR_3 == ((void*)0));
}
