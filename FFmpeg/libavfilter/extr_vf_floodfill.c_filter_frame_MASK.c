
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {int * outputs; TYPE_2__* priv; } ;
struct TYPE_17__ {TYPE_5__* dst; } ;
struct TYPE_16__ {int width; int height; } ;
struct TYPE_15__ {unsigned int* d; int* s; int x; int y; int* S; int nb_planes; size_t front; size_t back; TYPE_1__* points; int (* set_pixel ) (TYPE_3__*,int,int,unsigned int const,unsigned int const,unsigned int const,unsigned int const) ;scalar_t__ (* is_same ) (TYPE_3__*,int,int,int,int,int,int) ;int (* pick_pixel ) (TYPE_3__*,int,int,int*,int*,int*,int*) ;} ;
struct TYPE_14__ {int x; int y; } ;
typedef TYPE_2__ FloodfillContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_2 (int,int,int const,int const) ;
 int FUNC_3 (TYPE_3__*,int,int,int*,int*,int*,int*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int,int,int,int,int,int) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int,int,int,int,int,int) ;
 int FUNC_6 (TYPE_3__*,int,int,unsigned int const,unsigned int const,unsigned int const,unsigned int const) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_0, AVFrame *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_0->dst;
    FloodfillContext *VAR_3 = VAR_2->priv;
    const unsigned VAR_4 = VAR_3->d[0];
    const unsigned VAR_5 = VAR_3->d[1];
    const unsigned VAR_6 = VAR_3->d[2];
    const unsigned VAR_7 = VAR_3->d[3];
    int VAR_8 = VAR_3->s[0];
    int VAR_9 = VAR_3->s[1];
    int VAR_10 = VAR_3->s[2];
    int VAR_11 = VAR_3->s[3];
    const int VAR_12 = VAR_1->width;
    const int VAR_13 = VAR_1->height;
    int VAR_14, VAR_15;

    if (FUNC_2(VAR_3->x, VAR_3->y, VAR_12, VAR_13)) {
        VAR_3->pick_pixel(VAR_1, VAR_3->x, VAR_3->y, &VAR_8, &VAR_9, &VAR_10, &VAR_11);

        VAR_3->S[0] = VAR_8;
        VAR_3->S[1] = VAR_9;
        VAR_3->S[2] = VAR_10;
        VAR_3->S[3] = VAR_11;
        for (VAR_14 = 0; VAR_14 < VAR_3->nb_planes; VAR_14++) {
            if (VAR_3->S[VAR_14] != VAR_3->d[VAR_14])
                break;
        }

        if (VAR_14 == VAR_3->nb_planes)
            goto end;

        if (VAR_3->is_same(VAR_1, VAR_3->x, VAR_3->y, VAR_8, VAR_9, VAR_10, VAR_11)) {
            VAR_3->points[VAR_3->front].x = VAR_3->x;
            VAR_3->points[VAR_3->front].y = VAR_3->y;
            VAR_3->front++;
        }

        if ((VAR_15 = FUNC_0(VAR_1)))
            return VAR_15;

        while (VAR_3->front > VAR_3->back) {
            int VAR_16, VAR_17;

            VAR_3->front--;
            VAR_16 = VAR_3->points[VAR_3->front].x;
            VAR_17 = VAR_3->points[VAR_3->front].y;

            if (VAR_3->is_same(VAR_1, VAR_16, VAR_17, VAR_8, VAR_9, VAR_10, VAR_11)) {
                VAR_3->set_pixel(VAR_1, VAR_16, VAR_17, VAR_4, VAR_5, VAR_6, VAR_7);

                if (FUNC_2(VAR_16 + 1, VAR_17, VAR_12, VAR_13)) {
                    VAR_3->points[VAR_3->front] .x = VAR_16 + 1;
                    VAR_3->points[VAR_3->front++].y = VAR_17;
                }

                if (FUNC_2(VAR_16 - 1, VAR_17, VAR_12, VAR_13)) {
                    VAR_3->points[VAR_3->front] .x = VAR_16 - 1;
                    VAR_3->points[VAR_3->front++].y = VAR_17;
                }

                if (FUNC_2(VAR_16, VAR_17 + 1, VAR_12, VAR_13)) {
                    VAR_3->points[VAR_3->front] .x = VAR_16;
                    VAR_3->points[VAR_3->front++].y = VAR_17 + 1;
                }

                if (FUNC_2(VAR_16, VAR_17 - 1, VAR_12, VAR_13)) {
                    VAR_3->points[VAR_3->front] .x = VAR_16;
                    VAR_3->points[VAR_3->front++].y = VAR_17 - 1;
                }
            }
        }
    }

end:
    return FUNC_1(VAR_2->outputs[0], VAR_1);
}
