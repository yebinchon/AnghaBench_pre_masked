
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int format; } ;
typedef int AVHWFramesContext ;
typedef TYPE_1__ AVFrame ;



 int FUNC_0 (int *,TYPE_1__*,TYPE_1__ const*,int) ;
 int FUNC_1 (int *,TYPE_1__*,TYPE_1__ const*,int) ;

__attribute__((used)) static int FUNC_2(AVHWFramesContext *VAR_0, AVFrame *VAR_1,
                          const AVFrame *VAR_2, int VAR_3)
{
    switch (VAR_1->format) {




    default:
        return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
    }
}
