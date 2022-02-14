
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef double uint64_t ;
struct timeval {long const member_0; long const member_1; } ;
typedef int fd_set ;
struct TYPE_5__ {int const inotify; } ;
struct TYPE_4__ {int display; } ;
struct TYPE_6__ {TYPE_2__ linux_js; TYPE_1__ x11; } ;
typedef int GLFWbool ;


 int FUNC_0 (int ) ;
 int const VAR_0 ;
 int FUNC_1 (int const,int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 scalar_t__ FUNC_3 () ;
 double const FUNC_4 () ;
 int const VAR_4 ;
 int FUNC_5 (int,int *,int *,int *,struct timeval*) ;

__attribute__((used)) static GLFWbool FUNC_6(double* VAR_5)
{
    fd_set VAR_6;
    const int VAR_7 = FUNC_0(VAR_3.x11.display);
    int VAR_8 = VAR_7 + 1;

    FUNC_2(&VAR_6);
    FUNC_1(VAR_7, &VAR_6);

    FUNC_1(VAR_3.linux_js.inotify, &VAR_6);

    if (VAR_7 < VAR_3.linux_js.inotify)
        VAR_8 = VAR_3.linux_js.inotify + 1;

    for (;;)
    {
        if (VAR_5)
        {
            const long VAR_9 = (long) *VAR_5;
            const long VAR_10 = (long) ((*VAR_5 - VAR_9) * 1e6);
            struct timeval VAR_11 = { VAR_9, VAR_10 };
            const uint64_t VAR_12 = FUNC_4();

            const int VAR_13 = FUNC_5(VAR_8, &VAR_6, ((void*)0), ((void*)0), &VAR_11);
            const int VAR_14 = VAR_4;

            *VAR_5 -= (FUNC_4() - VAR_12) /
                (double) FUNC_3();

            if (VAR_13 > 0)
                return VAR_2;
            if ((VAR_13 == -1 && VAR_14 == VAR_0) || *VAR_5 <= 0.0)
                return VAR_1;
        }
        else if (FUNC_5(VAR_8, &VAR_6, ((void*)0), ((void*)0), ((void*)0)) != -1 || VAR_4 != VAR_0)
            return VAR_2;
    }
}
