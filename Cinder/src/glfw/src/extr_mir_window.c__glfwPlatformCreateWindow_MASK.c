
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ width; scalar_t__ height; } ;
typedef TYPE_2__ _GLFWwndconfig ;
struct TYPE_13__ {scalar_t__ width; scalar_t__ height; int surface; int window; } ;
struct TYPE_15__ {TYPE_1__ mir; scalar_t__ monitor; } ;
typedef TYPE_3__ _GLFWwindow ;
typedef int _GLFWfbconfig ;
struct TYPE_16__ {scalar_t__ client; } ;
typedef TYPE_4__ _GLFWctxconfig ;
struct TYPE_17__ {scalar_t__ width; scalar_t__ height; } ;
typedef TYPE_5__ GLFWvidmode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,TYPE_4__ const*,int const*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,TYPE_5__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_4 ;

int FUNC_8(_GLFWwindow* VAR_5,
                              const _GLFWwndconfig* VAR_6,
                              const _GLFWctxconfig* VAR_7,
                              const _GLFWfbconfig* VAR_8)
{
    if (VAR_5->monitor)
    {
        GLFWvidmode VAR_9;
        FUNC_3(VAR_5->monitor, &VAR_9);

        FUNC_7(VAR_5->mir.surface, VAR_4);

        if (VAR_6->width > VAR_9.width || VAR_6->height > VAR_9.height)
        {
            FUNC_2(VAR_2,
                            "Mir: Requested surface size too large: %ix%i",
                            VAR_6->width, VAR_6->height);

            return VAR_0;
        }
    }

    VAR_5->mir.width = VAR_6->width;
    VAR_5->mir.height = VAR_6->height;

    if (!FUNC_4(VAR_5))
        return VAR_0;

    VAR_5->mir.window = FUNC_5(
                                   FUNC_6(VAR_5->mir.surface));

    if (VAR_7->client != VAR_1)
    {
        if (!FUNC_1())
            return VAR_0;
        if (!FUNC_0(VAR_5, VAR_7, VAR_8))
            return VAR_0;
    }

    return VAR_3;
}
