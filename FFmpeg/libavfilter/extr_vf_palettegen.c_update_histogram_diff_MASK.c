
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct hist_node {int dummy; } ;
struct TYPE_4__ {int height; int* linesize; int width; scalar_t__* data; } ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (struct hist_node*,scalar_t__ const) ;

__attribute__((used)) static int FUNC_1(struct hist_node *VAR_0,
                                 const AVFrame *VAR_1, const AVFrame *VAR_2)
{
    int VAR_3, VAR_4, VAR_5, VAR_6 = 0;

    for (VAR_4 = 0; VAR_4 < VAR_1->height; VAR_4++) {
        const uint32_t *VAR_7 = (const uint32_t *)(VAR_1->data[0] + VAR_4*VAR_1->linesize[0]);
        const uint32_t *VAR_8 = (const uint32_t *)(VAR_2->data[0] + VAR_4*VAR_2->linesize[0]);

        for (VAR_3 = 0; VAR_3 < VAR_1->width; VAR_3++) {
            if (VAR_7[VAR_3] == VAR_8[VAR_3])
                continue;
            VAR_5 = FUNC_0(VAR_0, VAR_7[VAR_3]);
            if (VAR_5 < 0)
                return VAR_5;
            VAR_6 += VAR_5;
        }
    }
    return VAR_6;
}
