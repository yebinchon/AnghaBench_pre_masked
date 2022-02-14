
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int mb_height; TYPE_1__* avctx; } ;
struct TYPE_9__ {int reference; TYPE_2__* parent; } ;
struct TYPE_8__ {int field_picture; int tf; } ;
struct TYPE_7__ {int active_thread_type; } ;
typedef TYPE_3__ H264Ref ;
typedef TYPE_4__ H264Context ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void FUNC_2(const H264Context *const VAR_2, H264Ref *VAR_3,
                                   int VAR_4)
{
    int VAR_5 = VAR_3->reference - 1;
    int VAR_6 = VAR_3->parent->field_picture;
    int VAR_7 = 16 * VAR_2->mb_height >> VAR_6;

    if (!VAR_1 || !(VAR_2->avctx->active_thread_type & VAR_0))
        return;




    FUNC_1(&VAR_3->parent->tf,
                             FUNC_0(16 * VAR_4 >> VAR_6,
                                   VAR_7 - 1),
                             VAR_6 && VAR_5);
}
