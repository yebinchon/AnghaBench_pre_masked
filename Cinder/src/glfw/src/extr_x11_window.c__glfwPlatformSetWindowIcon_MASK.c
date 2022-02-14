
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int handle; } ;
struct TYPE_10__ {TYPE_1__ x11; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_9__ {int display; int NET_WM_ICON; } ;
struct TYPE_12__ {TYPE_2__ x11; } ;
struct TYPE_11__ {int width; int height; int* pixels; } ;
typedef TYPE_4__ GLFWimage ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int,int ,unsigned char*,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_7__ VAR_2 ;
 long* FUNC_3 (int,int) ;
 int FUNC_4 (long*) ;

void FUNC_5(_GLFWwindow* VAR_3,
                                int VAR_4, const GLFWimage* VAR_5)
{
    if (VAR_4)
    {
        int VAR_6, VAR_7, VAR_8 = 0;

        for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
            VAR_8 += 2 + VAR_5[VAR_6].width * VAR_5[VAR_6].height;

        long* VAR_9 = FUNC_3(VAR_8, sizeof(long));
        long* VAR_10 = VAR_9;

        for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
        {
            *VAR_10++ = VAR_5[VAR_6].width;
            *VAR_10++ = VAR_5[VAR_6].height;

            for (VAR_7 = 0; VAR_7 < VAR_5[VAR_6].width * VAR_5[VAR_6].height; VAR_7++)
            {
                *VAR_10++ = (VAR_5[VAR_6].pixels[VAR_7 * 4 + 0] << 16) |
                            (VAR_5[VAR_6].pixels[VAR_7 * 4 + 1] << 8) |
                            (VAR_5[VAR_6].pixels[VAR_7 * 4 + 2] << 0) |
                            (VAR_5[VAR_6].pixels[VAR_7 * 4 + 3] << 24);
            }
        }

        FUNC_0(VAR_2.x11.display, VAR_3->x11.handle,
                        VAR_2.x11.NET_WM_ICON,
                        VAR_1, 32,
                        VAR_0,
                        (unsigned char*) VAR_9,
                        VAR_8);

        FUNC_4(VAR_9);
    }
    else
    {
        FUNC_1(VAR_2.x11.display, VAR_3->x11.handle,
                        VAR_2.x11.NET_WM_ICON);
    }

    FUNC_2(VAR_2.x11.display);
}
