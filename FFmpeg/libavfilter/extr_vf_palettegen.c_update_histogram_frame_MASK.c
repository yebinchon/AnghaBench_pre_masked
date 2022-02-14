
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct hist_node {int dummy; } ;
struct TYPE_3__ {int height; int* linesize; int width; scalar_t__* data; } ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (struct hist_node*,int const) ;

__attribute__((used)) static int FUNC_1(struct hist_node *VAR_0, const AVFrame *VAR_1)
{
    int VAR_2, VAR_3, VAR_4, VAR_5 = 0;

    for (VAR_3 = 0; VAR_3 < VAR_1->height; VAR_3++) {
        const uint32_t *VAR_6 = (const uint32_t *)(VAR_1->data[0] + VAR_3*VAR_1->linesize[0]);

        for (VAR_2 = 0; VAR_2 < VAR_1->width; VAR_2++) {
            VAR_4 = FUNC_0(VAR_0, VAR_6[VAR_2]);
            if (VAR_4 < 0)
                return VAR_4;
            VAR_5 += VAR_4;
        }
    }
    return VAR_5;
}
