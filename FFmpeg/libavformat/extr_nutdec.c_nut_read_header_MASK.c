
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int int64_t ;
struct TYPE_20__ {int nb_streams; TYPE_1__* internal; TYPE_3__* pb; TYPE_2__* priv_data; } ;
struct TYPE_19__ {int seekable; } ;
struct TYPE_18__ {scalar_t__ next_startcode; TYPE_4__* avf; } ;
struct TYPE_17__ {int data_offset; } ;
typedef TYPE_2__ NUTContext ;
typedef TYPE_3__ AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,int ,char*) ;
 int FUNC_2 (TYPE_3__*,int,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_4__*,int *,int ) ;
 int VAR_8 ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (TYPE_3__*,int) ;
 int FUNC_10 (TYPE_3__*,int ,int) ;
 int FUNC_11 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_12(AVFormatContext *VAR_9)
{
    NUTContext *VAR_10 = VAR_9->priv_data;
    AVIOContext *VAR_11 = VAR_9->pb;
    int64_t VAR_12;
    int VAR_13;

    VAR_10->avf = VAR_9;


    VAR_12 = 0;
    do {
        VAR_12 = FUNC_10(VAR_11, VAR_4, VAR_12) + 1;
        if (VAR_12 < 0 + 1) {
            FUNC_1(VAR_9, VAR_2, "No main startcode found.\n");
            goto fail;
        }
    } while (FUNC_5(VAR_10) < 0);


    VAR_12 = 0;
    for (VAR_13 = 0; VAR_13 < VAR_9->nb_streams;) {
        VAR_12 = FUNC_10(VAR_11, VAR_6, VAR_12) + 1;
        if (VAR_12 < 0 + 1) {
            FUNC_1(VAR_9, VAR_2, "Not all stream headers found.\n");
            goto fail;
        }
        if (FUNC_6(VAR_10) >= 0)
            VAR_13++;
    }


    VAR_12 = 0;
    for (;;) {
        uint64_t VAR_14 = FUNC_9(VAR_11, VAR_12);
        VAR_12 = FUNC_3(VAR_11);

        if (VAR_14 == 0) {
            FUNC_1(VAR_9, VAR_2, "EOF before video frames\n");
            goto fail;
        } else if (VAR_14 == VAR_7) {
            VAR_10->next_startcode = VAR_14;
            break;
        } else if (VAR_14 != VAR_3) {
            continue;
        }

        FUNC_4(VAR_10);
    }

    VAR_9->internal->data_offset = VAR_12 - 8;

    if (VAR_11->seekable & VAR_1) {
        int64_t VAR_15 = FUNC_3(VAR_11);
        FUNC_8(VAR_10);
        FUNC_2(VAR_11, VAR_15, VAR_5);
    }
    FUNC_0(VAR_10->next_startcode == VAR_7);

    FUNC_7(VAR_9, ((void*)0), VAR_8);

    return 0;

fail:
    FUNC_11(VAR_9);

    return VAR_0;
}
