
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int ctx_flags; TYPE_2__* pb; TYPE_1__* priv_data; } ;
struct TYPE_14__ {scalar_t__ seekable; } ;
struct TYPE_13__ {scalar_t__ samples_per_frame; int frame_rate; TYPE_2__* zpb; void* zbuf_out; void* zbuf_in; int zstream; } ;
typedef TYPE_1__ SWFContext ;
typedef TYPE_2__ AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (float,char,char,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (void**) ;
 int FUNC_3 (TYPE_3__*,int ,char*) ;
 void* FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (void*,int ,int ,TYPE_3__*,int ,int *,int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int) ;
 scalar_t__ FUNC_11 (int *) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_12(AVFormatContext *VAR_9)
{
    SWFContext *VAR_10 = VAR_9->priv_data;
    AVIOContext *VAR_11 = VAR_9->pb;
    int VAR_12, VAR_13, VAR_14;

    VAR_14 = FUNC_7(VAR_11) & 0xffffff00;
    FUNC_9(VAR_11);

    if (VAR_14 == FUNC_1('C', 'W', 'S', 0)) {
        FUNC_3(VAR_9, VAR_2, "SWF compressed file detected\n");
        FUNC_3(VAR_9, VAR_1, "zlib support is required to read SWF compressed files\n");
        return FUNC_0(VAR_4);

    } else if (VAR_14 != FUNC_1('F', 'W', 'S', 0))
        return FUNC_0(VAR_4);

    VAR_12 = FUNC_6(VAR_11) >> 3;
    VAR_13 = (4 * VAR_12 - 3 + 7) / 8;
    FUNC_10(VAR_11, VAR_13);
    VAR_10->frame_rate = FUNC_8(VAR_11);
    FUNC_8(VAR_11);

    VAR_10->samples_per_frame = 0;
    VAR_9->ctx_flags |= VAR_0;
    return 0;
}
