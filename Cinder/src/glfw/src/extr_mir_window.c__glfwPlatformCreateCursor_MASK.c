
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int * custom_cursor; int conf; } ;
struct TYPE_12__ {TYPE_2__ mir; } ;
typedef TYPE_3__ _GLFWcursor ;
struct TYPE_10__ {int connection; } ;
struct TYPE_15__ {TYPE_1__ mir; } ;
struct TYPE_14__ {int width; int height; unsigned char* pixels; } ;
struct TYPE_13__ {char* vaddr; int stride; } ;
typedef scalar_t__ MirPixelFormat ;
typedef TYPE_4__ MirGraphicsRegion ;
typedef int MirBufferStream ;
typedef TYPE_5__ GLFWimage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_9__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,unsigned char*,int) ;
 int FUNC_3 (int *,TYPE_4__*) ;
 int VAR_4 ;
 int * FUNC_4 (int ,int,int,scalar_t__,int ) ;
 int FUNC_5 (int *,int,int) ;
 scalar_t__ VAR_5 ;

int FUNC_6(_GLFWcursor* VAR_6,
                              const GLFWimage* VAR_7,
                              int VAR_8, int VAR_9)
{
    MirBufferStream* VAR_10;
    MirPixelFormat VAR_11 = FUNC_1();

    int VAR_12 = VAR_7->width;
    int VAR_13 = VAR_7->height;

    if (VAR_11 == VAR_5)
    {
        FUNC_0(VAR_1,
                        "Mir: Unable to find a correct pixel format");
        return VAR_0;
    }

    VAR_10 = FUNC_4(VAR_3.mir.connection,
                                                      VAR_12, VAR_13,
                                                      VAR_11,
                                                      VAR_4);

    VAR_6->mir.conf = FUNC_5(VAR_10, VAR_8, VAR_9);

    char* VAR_14;
    unsigned char *VAR_15;
    int VAR_16, VAR_17, VAR_18, VAR_19;

    MirGraphicsRegion VAR_20;
    FUNC_3(VAR_10, &VAR_20);


    VAR_18 = 4;
    VAR_19 = VAR_18 * VAR_12;

    VAR_14 = VAR_20.vaddr;
    VAR_15 = VAR_7->pixels;

    VAR_17 = VAR_20.stride;

    for (VAR_16 = 0; VAR_16 < VAR_13; VAR_16++)
    {
        FUNC_2(VAR_14, VAR_15, VAR_19);
        VAR_14 += VAR_17;
        VAR_15 += VAR_17;
    }

    VAR_6->mir.custom_cursor = VAR_10;

    return VAR_2;
}
