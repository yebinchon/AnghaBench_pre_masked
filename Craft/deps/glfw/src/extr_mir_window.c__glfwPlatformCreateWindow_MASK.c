
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ width; scalar_t__ height; scalar_t__ monitor; } ;
typedef TYPE_2__ _GLFWwndconfig ;
struct TYPE_10__ {scalar_t__ width; scalar_t__ height; int surface; int window; } ;
struct TYPE_12__ {TYPE_1__ mir; } ;
typedef TYPE_3__ _GLFWwindow ;
typedef int _GLFWfbconfig ;
typedef int _GLFWctxconfig ;
struct TYPE_13__ {scalar_t__ width; scalar_t__ height; } ;
typedef TYPE_4__ GLFWvidmode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int const*,int const*) ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_3 ;

int FUNC_7(_GLFWwindow* VAR_4,
                              const _GLFWwndconfig* VAR_5,
                              const _GLFWctxconfig* VAR_6,
                              const _GLFWfbconfig* VAR_7)
{
    if (!FUNC_0(VAR_4, VAR_6, VAR_7))
        return VAR_1;

    if (VAR_5->monitor)
    {
        GLFWvidmode VAR_8;
        FUNC_2(VAR_5->monitor, &VAR_8);

        FUNC_6(VAR_4->mir.surface, VAR_3);

        if (VAR_5->width > VAR_8.width || VAR_5->height > VAR_8.height)
        {
            FUNC_1(VAR_0,
                            "Mir: Requested surface size too large: %ix%i",
                            VAR_5->width, VAR_5->height);

            return VAR_1;
        }
    }

    VAR_4->mir.width = VAR_5->width;
    VAR_4->mir.height = VAR_5->height;

    if (!FUNC_3(VAR_4))
        return VAR_1;

    VAR_4->mir.window = FUNC_4(
                                   FUNC_5(VAR_4->mir.surface));

    return VAR_2;
}
