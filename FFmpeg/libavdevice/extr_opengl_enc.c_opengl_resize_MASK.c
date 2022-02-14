
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* priv_data; } ;
struct TYPE_8__ {int window_width; int window_height; scalar_t__ no_window; scalar_t__ inited; } ;
typedef TYPE_1__ OpenGLContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int FUNC_1 (TYPE_2__*,int ,int *,int ) ;
 int FUNC_2 (TYPE_2__*,int *,int,int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5 = 0;
    OpenGLContext *VAR_6 = VAR_2->priv_data;
    VAR_6->window_width = VAR_3;
    VAR_6->window_height = VAR_4;
    if (VAR_6->inited) {
        if (VAR_6->no_window &&
            (VAR_5 = FUNC_1(VAR_2, VAR_0, ((void*)0) , 0)) < 0) {
            FUNC_0(VAR_6, VAR_1, "Application failed to prepare window buffer.\n");
            goto end;
        }
        if ((VAR_5 = FUNC_3(VAR_2)) < 0)
            goto end;
        VAR_5 = FUNC_2(VAR_2, ((void*)0), 1, 0);
    }
  end:
    return VAR_5;
}
