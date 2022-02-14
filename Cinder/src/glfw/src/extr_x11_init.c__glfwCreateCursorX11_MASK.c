
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef unsigned int XcursorPixel ;
struct TYPE_10__ {int xhot; int yhot; unsigned int* pixels; } ;
typedef TYPE_2__ XcursorImage ;
struct TYPE_9__ {int display; } ;
struct TYPE_12__ {TYPE_1__ x11; } ;
struct TYPE_11__ {int width; int height; scalar_t__ pixels; } ;
typedef TYPE_3__ GLFWimage ;
typedef int Cursor ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 TYPE_5__ VAR_1 ;

Cursor FUNC_3(const GLFWimage* VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5;
    Cursor VAR_6;

    XcursorImage* VAR_7 = FUNC_0(VAR_2->width, VAR_2->height);
    if (VAR_7 == ((void*)0))
        return VAR_0;

    VAR_7->xhot = VAR_3;
    VAR_7->yhot = VAR_4;

    unsigned char* VAR_8 = (unsigned char*) VAR_2->pixels;
    XcursorPixel* VAR_9 = VAR_7->pixels;

    for (VAR_5 = 0; VAR_5 < VAR_2->width * VAR_2->height; VAR_5++, VAR_9++, VAR_8 += 4)
    {
        unsigned int VAR_10 = VAR_8[3];

        *VAR_9 = (VAR_10 << 24) |
                  ((unsigned char) ((VAR_8[0] * VAR_10) / 255) << 16) |
                  ((unsigned char) ((VAR_8[1] * VAR_10) / 255) << 8) |
                  ((unsigned char) ((VAR_8[2] * VAR_10) / 255) << 0);
    }

    VAR_6 = FUNC_2(VAR_1.x11.display, VAR_7);
    FUNC_1(VAR_7);

    return VAR_6;
}
