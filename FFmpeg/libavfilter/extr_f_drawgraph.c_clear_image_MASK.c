
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int height; int width; int* linesize; scalar_t__* data; } ;
struct TYPE_5__ {int bg; } ;
typedef TYPE_1__ DrawGraphContext ;
typedef TYPE_2__ AVFrame ;
typedef int AVFilterLink ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(DrawGraphContext *VAR_0, AVFrame *VAR_1, AVFilterLink *VAR_2)
{
    int VAR_3, VAR_4;
    int VAR_5 = FUNC_0(VAR_0->bg);

    for (VAR_3 = 0; VAR_3 < VAR_1->height; VAR_3++)
        for (VAR_4 = 0; VAR_4 < VAR_1->width; VAR_4++)
            FUNC_1(VAR_1->data[0] + VAR_3 * VAR_1->linesize[0] + VAR_4 * 4, VAR_5);
}
