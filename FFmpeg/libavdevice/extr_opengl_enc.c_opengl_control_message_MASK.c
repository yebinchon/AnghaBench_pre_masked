
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int height; int width; } ;
struct TYPE_7__ {TYPE_1__* priv_data; } ;
struct TYPE_6__ {int window_height; int window_width; } ;
typedef TYPE_1__ OpenGLContext ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ AVDeviceRect ;


 int FUNC_0 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_2, int VAR_3, void *VAR_4, size_t VAR_5)
{
    OpenGLContext *VAR_6 = VAR_2->priv_data;
    switch(VAR_3) {
    case 128:
        if (VAR_4) {
            AVDeviceRect *VAR_7 = VAR_4;
            return FUNC_1(VAR_2, VAR_7->width, VAR_7->height);
        }
        return FUNC_0(VAR_0);
    case 129:
        return FUNC_1(VAR_2, VAR_6->window_width, VAR_6->window_height);
    }
    return FUNC_0(VAR_1);
}
