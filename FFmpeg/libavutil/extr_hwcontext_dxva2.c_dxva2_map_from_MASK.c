
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ format; } ;
struct TYPE_11__ {scalar_t__ sw_format; } ;
typedef TYPE_1__ AVHWFramesContext ;
typedef TYPE_2__ AVFrame ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,TYPE_2__ const*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,TYPE_2__ const*,int) ;

__attribute__((used)) static int FUNC_3(AVHWFramesContext *VAR_2,
                          AVFrame *VAR_3, const AVFrame *VAR_4, int VAR_5)
{
    int VAR_6;

    if (VAR_3->format != VAR_0 && VAR_3->format != VAR_2->sw_format)
        return FUNC_0(VAR_1);
    VAR_3->format = VAR_2->sw_format;

    VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
    if (VAR_6 < 0)
        return VAR_6;

    VAR_6 = FUNC_1(VAR_3, VAR_4);
    if (VAR_6 < 0)
        return VAR_6;

    return 0;
}
