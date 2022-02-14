
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dc; int (* GetPixelFormatAttribivARB ) (int ,int,int ,int,int*,int*) ;int ARB_pixel_format; } ;
struct TYPE_5__ {TYPE_1__ wgl; } ;
typedef TYPE_2__ _GLFWwindow ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int ,int,int*,int*) ;

__attribute__((used)) static int FUNC_3(_GLFWwindow* VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4 = 0;

    FUNC_1(VAR_1->wgl.ARB_pixel_format);

    if (!VAR_1->wgl.GetPixelFormatAttribivARB(VAR_1->wgl.dc,
                                               VAR_2,
                                               0, 1, &VAR_3, &VAR_4))
    {
        FUNC_0(VAR_0,
                        "WGL: Failed to retrieve pixel format attribute %i",
                        VAR_3);
        return 0;
    }

    return VAR_4;
}
