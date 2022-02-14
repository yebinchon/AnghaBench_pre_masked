
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int uint32_t ;
typedef scalar_t__ int64_t ;
struct TYPE_15__ {scalar_t__ buffer; scalar_t__ buf_ptr; int error; } ;
struct TYPE_14__ {int done; TYPE_1__* levels; TYPE_11__* ctx; } ;
struct TYPE_13__ {int length; } ;
struct TYPE_12__ {TYPE_3__* pb; } ;
typedef TYPE_2__ MatroskaDemuxContext ;
typedef TYPE_3__ AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_11__*,int ,char*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*,int,int) ;

__attribute__((used)) static int FUNC_8(MatroskaDemuxContext *VAR_12, int64_t VAR_13)
{
    AVIOContext *VAR_14 = VAR_12->ctx->pb;
    uint32_t VAR_15;



    if (VAR_13 < FUNC_6(VAR_14) && FUNC_5(VAR_14, VAR_13 + 1, VAR_11) < 0) {
        FUNC_1(VAR_12->ctx, VAR_1,
               "Seek to desired resync point failed. Seeking to "
               "earliest point available instead.\n");
        FUNC_5(VAR_14, FUNC_0(FUNC_6(VAR_14) + (VAR_14->buffer - VAR_14->buf_ptr),
                            VAR_13 + 1), VAR_11);
    }

    VAR_15 = FUNC_4(VAR_14);


    while (!FUNC_2(VAR_14)) {
        if (VAR_15 == VAR_7 || VAR_15 == VAR_10 ||
            VAR_15 == VAR_6 || VAR_15 == VAR_9 ||
            VAR_15 == VAR_8 || VAR_15 == VAR_3 ||
            VAR_15 == VAR_5 || VAR_15 == VAR_4) {

            FUNC_7(VAR_12, VAR_15, -1);




            VAR_12->levels[0].length = VAR_2;
            return 0;
        }
        VAR_15 = (VAR_15 << 8) | FUNC_3(VAR_14);
    }

    VAR_12->done = 1;
    return VAR_14->error ? VAR_14->error : VAR_0;
}
