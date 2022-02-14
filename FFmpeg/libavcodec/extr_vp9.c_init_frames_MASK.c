
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {TYPE_3__* refs; TYPE_2__* frames; } ;
struct TYPE_16__ {TYPE_5__* next_refs; TYPE_4__ s; } ;
typedef TYPE_6__ VP9Context ;
struct TYPE_17__ {TYPE_6__* priv_data; } ;
struct TYPE_15__ {void* f; } ;
struct TYPE_13__ {void* f; } ;
struct TYPE_11__ {void* f; } ;
struct TYPE_12__ {TYPE_1__ tf; } ;
typedef TYPE_7__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 () ;
 int FUNC_2 (TYPE_7__*,int ,char*,int) ;
 int FUNC_3 (TYPE_7__*) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_2)
{
    VP9Context *VAR_3 = VAR_2->priv_data;
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
        VAR_3->s.frames[VAR_4].tf.f = FUNC_1();
        if (!VAR_3->s.frames[VAR_4].tf.f) {
            FUNC_3(VAR_2);
            FUNC_2(VAR_2, VAR_0, "Failed to allocate frame buffer %d\n", VAR_4);
            return FUNC_0(VAR_1);
        }
    }
    for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
        VAR_3->s.refs[VAR_4].f = FUNC_1();
        VAR_3->next_refs[VAR_4].f = FUNC_1();
        if (!VAR_3->s.refs[VAR_4].f || !VAR_3->next_refs[VAR_4].f) {
            FUNC_3(VAR_2);
            FUNC_2(VAR_2, VAR_0, "Failed to allocate frame buffer %d\n", VAR_4);
            return FUNC_0(VAR_1);
        }
    }

    return 0;
}
