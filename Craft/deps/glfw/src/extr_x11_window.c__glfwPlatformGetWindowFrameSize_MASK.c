
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct timeval {long tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_8__ {int handle; } ;
struct TYPE_10__ {TYPE_1__ x11; } ;
typedef TYPE_3__ _GLFWwindow ;
typedef int XPointer ;
typedef int XEvent ;
struct TYPE_9__ {scalar_t__ NET_FRAME_EXTENTS; int display; scalar_t__ NET_REQUEST_FRAME_EXTENTS; } ;
struct TYPE_11__ {TYPE_2__ x11; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ,int ) ;
 int FUNC_1 (long*) ;
 TYPE_7__ VAR_3 ;
 int FUNC_2 (int ,scalar_t__,int ,unsigned char**) ;
 int FUNC_3 (int ,char*) ;
 double FUNC_4 () ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_6 (struct timeval*) ;
 int FUNC_7 (TYPE_3__*,scalar_t__,int ,int ,int ,int ,int ) ;

void FUNC_8(_GLFWwindow* VAR_5,
                                     int* VAR_6, int* VAR_7,
                                     int* VAR_8, int* VAR_9)
{
    long* VAR_10 = ((void*)0);

    if (VAR_3.x11.NET_FRAME_EXTENTS == VAR_1)
        return;

    if (!FUNC_5(VAR_5) &&
        VAR_3.x11.NET_REQUEST_FRAME_EXTENTS)
    {
        double VAR_11;
        XEvent VAR_12;



        FUNC_7(VAR_5, VAR_3.x11.NET_REQUEST_FRAME_EXTENTS,
                      0, 0, 0, 0, 0);







        VAR_11 = FUNC_4();
        while (!FUNC_0(VAR_3.x11.display,
                              &VAR_12,
                              VAR_4,
                              (XPointer) VAR_5))
        {
            double VAR_13;
            struct timeval VAR_14;

            VAR_13 = 0.5 + VAR_11 - FUNC_4();
            if (VAR_13 <= 0.0)
            {
                FUNC_3(VAR_0,
                                "X11: The window manager has a broken _NET_REQUEST_FRAME_EXTENTS implementation; please report this issue");
                return;
            }

            VAR_14.tv_sec = 0;
            VAR_14.tv_usec = (long) (VAR_13 * 1e6);
            FUNC_6(&VAR_14);
        }
    }

    if (FUNC_2(VAR_5->x11.handle,
                               VAR_3.x11.NET_FRAME_EXTENTS,
                               VAR_2,
                               (unsigned char**) &VAR_10) == 4)
    {
        if (VAR_6)
            *VAR_6 = VAR_10[0];
        if (VAR_7)
            *VAR_7 = VAR_10[2];
        if (VAR_8)
            *VAR_8 = VAR_10[1];
        if (VAR_9)
            *VAR_9 = VAR_10[3];
    }

    if (VAR_10)
        FUNC_1(VAR_10);
}
