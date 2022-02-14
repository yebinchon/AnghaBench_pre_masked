
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {scalar_t__ draining; int refsync; int refcount; scalar_t__ reinit; } ;
typedef TYPE_2__ V4L2m2mContext ;
struct TYPE_9__ {int context_ref; TYPE_1__* context; int status; int context_refcount; } ;
typedef TYPE_3__ V4L2Buffer ;
struct TYPE_7__ {scalar_t__ streamon; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(void *VAR_2, uint8_t *VAR_3)
{
    V4L2Buffer* VAR_4 = VAR_2;
    V4L2m2mContext *VAR_5 = FUNC_4(VAR_4);

    if (FUNC_0(&VAR_4->context_refcount, 1) == 1) {
        FUNC_1(&VAR_5->refcount, 1, VAR_1);

        if (VAR_5->reinit) {
            if (!FUNC_2(&VAR_5->refcount))
                FUNC_6(&VAR_5->refsync);
        } else {
            if (VAR_5->draining) {

                VAR_4->status = VAR_0;
            }
            else if (VAR_4->context->streamon)
                FUNC_5(VAR_4);
        }

        FUNC_3(&VAR_4->context_ref);
    }
}
