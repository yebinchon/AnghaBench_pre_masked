
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;


typedef int atomic_int ;
struct TYPE_19__ {TYPE_12__* progress; int f; TYPE_6__** owner; } ;
typedef TYPE_4__ ThreadFrame ;
struct TYPE_21__ {int active_thread_type; TYPE_2__* codec; TYPE_1__* internal; } ;
struct TYPE_20__ {int requested_flags; int result; TYPE_3__* parent; int progress_mutex; int progress_cond; int state; int requested_frame; } ;
struct TYPE_18__ {int buffer_mutex; } ;
struct TYPE_17__ {scalar_t__ update_thread_context; } ;
struct TYPE_16__ {scalar_t__ allocate_progress; TYPE_5__* thread_ctx; } ;
struct TYPE_15__ {scalar_t__ data; } ;
typedef TYPE_5__ PerThreadContext ;
typedef TYPE_6__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 TYPE_12__* FUNC_5 (int) ;
 int FUNC_6 (TYPE_12__**) ;
 int FUNC_7 (TYPE_6__*,int ,char*) ;
 int FUNC_8 (TYPE_6__*,int ,int) ;
 int FUNC_9 (TYPE_6__*) ;
 int VAR_5 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(AVCodecContext *VAR_6, ThreadFrame *VAR_7, int VAR_8)
{
    PerThreadContext *VAR_9 = VAR_6->internal->thread_ctx;
    int VAR_10;

    VAR_7->owner[0] = VAR_7->owner[1] = VAR_6;

    if (!(VAR_6->active_thread_type & VAR_2))
        return FUNC_8(VAR_6, VAR_7->f, VAR_8);

    if (FUNC_3(&VAR_9->state) != VAR_4 &&
        (VAR_6->codec->update_thread_context || !FUNC_1(VAR_6))) {
        FUNC_7(VAR_6, VAR_0, "get_buffer() cannot be called after ff_thread_finish_setup()\n");
        return -1;
    }

    if (VAR_6->internal->allocate_progress) {
        atomic_int *VAR_11;
        VAR_7->progress = FUNC_5(2 * sizeof(*VAR_11));
        if (!VAR_7->progress) {
            return FUNC_0(VAR_1);
        }
        VAR_11 = (atomic_int*)VAR_7->progress->data;

        FUNC_2(&VAR_11[0], -1);
        FUNC_2(&VAR_11[1], -1);
    }

    FUNC_12(&VAR_9->parent->buffer_mutex);
    if (FUNC_1(VAR_6)) {
        VAR_10 = FUNC_8(VAR_6, VAR_7->f, VAR_8);
    } else {
        FUNC_12(&VAR_9->progress_mutex);
        VAR_9->requested_frame = VAR_7->f;
        VAR_9->requested_flags = VAR_8;
        FUNC_4(&VAR_9->state, VAR_3, VAR_5);
        FUNC_10(&VAR_9->progress_cond);

        while (FUNC_3(&VAR_9->state) != VAR_4)
            FUNC_11(&VAR_9->progress_cond, &VAR_9->progress_mutex);

        VAR_10 = VAR_9->result;

        FUNC_13(&VAR_9->progress_mutex);

    }
    if (!FUNC_1(VAR_6) && !VAR_6->codec->update_thread_context)
        FUNC_9(VAR_6);
    if (VAR_10)
        FUNC_6(&VAR_7->progress);

    FUNC_13(&VAR_9->parent->buffer_mutex);

    return VAR_10;
}
