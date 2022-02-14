
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flushing; int refcount; int surface; } ;
typedef TYPE_1__ MediaCodecDecContext ;
typedef int AVCodecContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;

int FUNC_2(AVCodecContext *VAR_0, MediaCodecDecContext *VAR_1)
{
    if (!VAR_1->surface || FUNC_0(&VAR_1->refcount) == 1) {
        int VAR_2;



        if ((VAR_2 = FUNC_1(VAR_0, VAR_1)) < 0) {
            return VAR_2;
        }

        return 1;
    }

    VAR_1->flushing = 1;
    return 0;
}
