
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_9__ {int active_thread_type; scalar_t__ get_format; scalar_t__ thread_safe_callbacks; TYPE_1__* internal; } ;
struct TYPE_8__ {int const* available_formats; int result_format; int progress_mutex; int progress_cond; int state; } ;
struct TYPE_7__ {TYPE_2__* thread_ctx; } ;
typedef TYPE_2__ PerThreadContext ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (TYPE_3__*,int const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

enum AVPixelFormat FUNC_8(AVCodecContext *VAR_5, const enum AVPixelFormat *VAR_6)
{
    enum AVPixelFormat VAR_7;
    PerThreadContext *VAR_8 = VAR_5->internal->thread_ctx;
    if (!(VAR_5->active_thread_type & VAR_1) || VAR_5->thread_safe_callbacks ||
        VAR_5->get_format == VAR_4)
        return FUNC_3(VAR_5, VAR_6);
    if (FUNC_0(&VAR_8->state) != VAR_3) {
        FUNC_2(VAR_5, VAR_0, "get_format() cannot be called after ff_thread_finish_setup()\n");
        return -1;
    }
    FUNC_6(&VAR_8->progress_mutex);
    VAR_8->available_formats = VAR_6;
    FUNC_1(&VAR_8->state, VAR_2);
    FUNC_4(&VAR_8->progress_cond);

    while (FUNC_0(&VAR_8->state) != VAR_3)
        FUNC_5(&VAR_8->progress_cond, &VAR_8->progress_mutex);

    VAR_7 = VAR_8->result_format;

    FUNC_7(&VAR_8->progress_mutex);

    return VAR_7;
}
