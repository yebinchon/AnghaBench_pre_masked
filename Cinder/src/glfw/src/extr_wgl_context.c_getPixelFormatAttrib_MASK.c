
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int dc; } ;
struct TYPE_9__ {TYPE_2__ wgl; } ;
struct TYPE_10__ {TYPE_3__ context; } ;
typedef TYPE_4__ _GLFWwindow ;
struct TYPE_7__ {int (* GetPixelFormatAttribivARB ) (int ,int,int ,int,int*,int*) ;int ARB_pixel_format; } ;
struct TYPE_11__ {TYPE_1__ wgl; } ;


 int VAR_0 ;
 TYPE_6__ VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int ,int,int*,int*) ;

__attribute__((used)) static int FUNC_3(_GLFWwindow* VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5 = 0;

    FUNC_1(VAR_1.wgl.ARB_pixel_format);

    if (!VAR_1.wgl.GetPixelFormatAttribivARB(VAR_2->context.wgl.dc,
                                             VAR_3,
                                             0, 1, &VAR_4, &VAR_5))
    {
        FUNC_0(VAR_0,
                        "WGL: Failed to retrieve pixel format attribute %i",
                        VAR_4);
        return 0;
    }

    return VAR_5;
}
