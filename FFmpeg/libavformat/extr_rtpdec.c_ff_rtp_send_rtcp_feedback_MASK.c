
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ int64_t ;
typedef int URLContext ;
struct TYPE_6__ {scalar_t__ last_feedback_time; scalar_t__ ssrc; int dynamic_protocol_context; TYPE_1__* handler; } ;
struct TYPE_5__ {int (* need_keyframe ) (int ) ;} ;
typedef TYPE_2__ RTPDemuxContext ;
typedef int AVIOContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,int **) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int **) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (TYPE_2__*,int*,int*) ;
 int FUNC_10 (int ) ;

int FUNC_11(RTPDemuxContext *VAR_4, URLContext *VAR_5,
                              AVIOContext *VAR_6)
{
    int VAR_7, VAR_8, VAR_9;
    AVIOContext *VAR_10;
    uint8_t *VAR_11;
    int64_t VAR_12;
    uint16_t VAR_13 = 0, VAR_14 = 0;

    if (!VAR_5 && !VAR_6)
        return -1;

    VAR_8 = VAR_4->handler && VAR_4->handler->need_keyframe &&
                    VAR_4->handler->need_keyframe(VAR_4->dynamic_protocol_context);
    VAR_9 = FUNC_9(VAR_4, &VAR_13, &VAR_14);

    if (!VAR_8 && !VAR_9)
        return 0;




    VAR_12 = FUNC_1();
    if (VAR_4->last_feedback_time &&
        (VAR_12 - VAR_4->last_feedback_time) < VAR_0)
        return 0;
    VAR_4->last_feedback_time = VAR_12;

    if (!VAR_5)
        VAR_10 = VAR_6;
    else if (FUNC_4(&VAR_10) < 0)
        return -1;

    if (VAR_8) {
        FUNC_5(VAR_10, (VAR_3 << 6) | 1);
        FUNC_5(VAR_10, VAR_1);
        FUNC_6(VAR_10, 2);

        FUNC_7(VAR_10, VAR_4->ssrc + 1);
        FUNC_7(VAR_10, VAR_4->ssrc);
    }

    if (VAR_9) {
        FUNC_5(VAR_10, (VAR_3 << 6) | 1);
        FUNC_5(VAR_10, VAR_2);
        FUNC_6(VAR_10, 3);
        FUNC_7(VAR_10, VAR_4->ssrc + 1);
        FUNC_7(VAR_10, VAR_4->ssrc);

        FUNC_6(VAR_10, VAR_13);
        FUNC_6(VAR_10, VAR_14);
    }

    FUNC_3(VAR_10);
    if (!VAR_5)
        return 0;
    VAR_7 = FUNC_2(VAR_10, &VAR_11);
    if (VAR_7 > 0 && VAR_11) {
        FUNC_8(VAR_5, VAR_11, VAR_7);
        FUNC_0(VAR_11);
    }
    return 0;
}
