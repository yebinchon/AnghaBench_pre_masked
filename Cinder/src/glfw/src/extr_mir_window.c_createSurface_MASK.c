
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int surface; int height; int width; } ;
struct TYPE_9__ {TYPE_1__ mir; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_8__ {int connection; } ;
struct TYPE_10__ {TYPE_2__ mir; } ;
typedef int MirSurfaceSpec ;
typedef scalar_t__ MirPixelFormat ;
typedef int MirBufferUsage ;
typedef int GLFWbool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__ VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 () ;
 int VAR_5 ;
 int * FUNC_2 (int ,int ,int ,scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,TYPE_3__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,char*) ;

__attribute__((used)) static GLFWbool FUNC_10(_GLFWwindow* VAR_7)
{
    MirSurfaceSpec* VAR_8;
    MirBufferUsage VAR_9 = VAR_5;
    MirPixelFormat VAR_10 = FUNC_1();

    if (VAR_10 == VAR_6)
    {
        FUNC_0(VAR_1,
                        "Mir: Unable to find a correct pixel format");
        return VAR_0;
    }

    VAR_8 = FUNC_2(VAR_3.mir.connection,
                                                         VAR_7->mir.width,
                                                         VAR_7->mir.height,
                                                         VAR_10);

    FUNC_8(VAR_8, VAR_9);
    FUNC_9(VAR_8, "MirSurface");

    VAR_7->mir.surface = FUNC_3(VAR_8);
    FUNC_7(VAR_8);

    if (!FUNC_5(VAR_7->mir.surface))
    {
        FUNC_0(VAR_1,
                        "Mir: Unable to create surface: %s",
                        FUNC_4(VAR_7->mir.surface));

        return VAR_0;
    }

    FUNC_6(VAR_7->mir.surface, VAR_4, VAR_7);

    return VAR_2;
}
