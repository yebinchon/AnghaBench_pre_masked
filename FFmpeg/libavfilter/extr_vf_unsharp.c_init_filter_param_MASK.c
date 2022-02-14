
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {double amount; int msize_x; int msize_y; int steps_y; int steps_x; void** sc; void* sr; } ;
typedef TYPE_1__ UnsharpFilterParam ;
struct TYPE_8__ {int nb_threads; } ;
typedef TYPE_2__ UnsharpContext ;
struct TYPE_9__ {TYPE_2__* priv; } ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*,int ,char*,char const*,...) ;
 void* FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(AVFilterContext *VAR_5, UnsharpFilterParam *VAR_6, const char *VAR_7, int VAR_8)
{
    int VAR_9;
    UnsharpContext *VAR_10 = VAR_5->priv;
    const char *VAR_11 = VAR_6->amount == 0 ? "none" : VAR_6->amount < 0 ? "blur" : "sharpen";

    if (!(VAR_6->msize_x & VAR_6->msize_y & 1)) {
        FUNC_1(VAR_5, VAR_0,
               "Invalid even size for %s matrix size %dx%d\n",
               VAR_7, VAR_6->msize_x, VAR_6->msize_y);
        return FUNC_0(VAR_2);
    }

    FUNC_1(VAR_5, VAR_1, "effect:%s type:%s msize_x:%d msize_y:%d amount:%0.2f\n",
           VAR_11, VAR_7, VAR_6->msize_x, VAR_6->msize_y, VAR_6->amount / 65535.0);

    VAR_6->sr = FUNC_2((VAR_4 - 1) * VAR_10->nb_threads, sizeof(uint32_t));
    VAR_6->sc = FUNC_2(2 * VAR_6->steps_y * VAR_10->nb_threads, sizeof(uint32_t **));
    if (!VAR_6->sr || !VAR_6->sc)
        return FUNC_0(VAR_3);

    for (VAR_9 = 0; VAR_9 < 2 * VAR_6->steps_y * VAR_10->nb_threads; VAR_9++)
        if (!(VAR_6->sc[VAR_9] = FUNC_2(VAR_8 + 2 * VAR_6->steps_x,
                                          sizeof(*(VAR_6->sc[VAR_9])))))
            return FUNC_0(VAR_3);

    return 0;
}
