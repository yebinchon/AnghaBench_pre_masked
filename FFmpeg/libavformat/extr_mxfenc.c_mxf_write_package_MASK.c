
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_43__ TYPE_6__ ;
typedef struct TYPE_42__ TYPE_5__ ;
typedef struct TYPE_41__ TYPE_4__ ;
typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_32__ ;
typedef struct TYPE_38__ TYPE_2__ ;
typedef struct TYPE_37__ TYPE_1__ ;


struct TYPE_43__ {int nb_streams; TYPE_4__** streams; int metadata; TYPE_5__* pb; TYPE_3__* priv_data; } ;
struct TYPE_42__ {scalar_t__ buf_ptr; } ;
struct TYPE_41__ {TYPE_1__* priv_data; } ;
struct TYPE_40__ {int store_user_comments; int track_instance_count; int tagged_value_count; TYPE_4__* timecode_track; int timestamp; } ;
struct TYPE_39__ {int (* write_desc ) (TYPE_6__*,TYPE_4__*) ;} ;
struct TYPE_38__ {int instance; int type; int name; } ;
struct TYPE_37__ {size_t index; } ;
typedef TYPE_1__ MXFStreamContext ;
typedef TYPE_2__ MXFPackage ;
typedef TYPE_3__ MXFContext ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVIOContext ;
typedef TYPE_6__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*,char*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_6__*,int ,char*,int ) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_5__*,int) ;
 TYPE_32__* VAR_8 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_5__*,int,int) ;
 int FUNC_6 (TYPE_5__*,int,int ) ;
 int FUNC_7 (TYPE_5__*,int) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (TYPE_5__*,int) ;
 int FUNC_10 (TYPE_6__*,TYPE_4__*,TYPE_2__*) ;
 int FUNC_11 (TYPE_6__*,TYPE_4__*,TYPE_2__*) ;
 int FUNC_12 (TYPE_6__*) ;
 int FUNC_13 (TYPE_6__*,TYPE_4__*,TYPE_2__*) ;
 int FUNC_14 (TYPE_6__*,TYPE_4__*,TYPE_2__*) ;
 int FUNC_15 (TYPE_6__*,int) ;
 int FUNC_16 (TYPE_6__*,int ) ;
 int FUNC_17 (TYPE_5__*,int ,int) ;
 int FUNC_18 (TYPE_6__*,TYPE_4__*) ;

__attribute__((used)) static void FUNC_19(AVFormatContext *VAR_9, MXFPackage *VAR_10)
{
    MXFContext *VAR_11 = VAR_9->priv_data;
    AVIOContext *VAR_12 = VAR_9->pb;
    int VAR_13, VAR_14 = VAR_9->nb_streams+1;
    int VAR_15 = FUNC_4(VAR_10->name);
    int VAR_16 = 0;

    if (VAR_10->type == VAR_1) {
        if (VAR_11->store_user_comments)
            VAR_16 = FUNC_16(VAR_9, VAR_9->metadata);
        FUNC_7(VAR_12, 0x013600);
        FUNC_0(VAR_9, "Material Package key", VAR_12->buf_ptr - 16);
        FUNC_3(VAR_12, 92 + VAR_15 + (16*VAR_14) + (16*VAR_16) + 12LL*VAR_11->store_user_comments);
    } else {
        FUNC_7(VAR_12, 0x013700);
        FUNC_0(VAR_9, "Source Package key", VAR_12->buf_ptr - 16);
        FUNC_3(VAR_12, 112 + VAR_15 + (16*VAR_14) + 12LL*VAR_11->store_user_comments);
    }


    FUNC_5(VAR_12, 16, 0x3C0A);
    FUNC_17(VAR_12, VAR_10->type, VAR_10->instance);
    FUNC_1(VAR_9, VAR_0, "package type:%d\n", VAR_10->type);
    FUNC_0(VAR_9, "package uid", VAR_12->buf_ptr - 16);


    FUNC_5(VAR_12, 32, 0x4401);
    FUNC_15(VAR_9, VAR_10->instance);
    FUNC_0(VAR_9, "package umid second part", VAR_12->buf_ptr - 16);


    if (VAR_15)
        FUNC_6(VAR_12, 0x4402, VAR_10->name);


    FUNC_5(VAR_12, 8, 0x4405);
    FUNC_2(VAR_12, VAR_11->timestamp);


    FUNC_5(VAR_12, 8, 0x4404);
    FUNC_2(VAR_12, VAR_11->timestamp);


    FUNC_5(VAR_12, VAR_14*16 + 8, 0x4403);
    FUNC_9(VAR_12, VAR_14);

    for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
        FUNC_17(VAR_12, VAR_7, VAR_11->track_instance_count + VAR_13);


    if (VAR_11->store_user_comments) {
        FUNC_5(VAR_12, VAR_16*16 + 8, 0x4406);
        FUNC_9(VAR_12, VAR_16);
        for (VAR_13 = 0; VAR_13 < VAR_16; VAR_13++)
            FUNC_17(VAR_12, VAR_5, VAR_11->tagged_value_count - VAR_16 + VAR_13);
    }


    if (VAR_10->type == VAR_3 && VAR_10->instance == 1) {
        FUNC_5(VAR_12, 16, 0x4701);
        if (VAR_9->nb_streams > 1) {
            FUNC_17(VAR_12, VAR_2, 0);
            FUNC_8(VAR_9);
        } else
            FUNC_17(VAR_12, VAR_4, 0);
    } else if (VAR_10->type == VAR_3 && VAR_10->instance == 2) {
        FUNC_5(VAR_12, 16, 0x4701);
        FUNC_17(VAR_12, VAR_6, 0);
        FUNC_12(VAR_9);
    }
    FUNC_14(VAR_9, VAR_11->timecode_track, VAR_10);
    FUNC_10(VAR_9, VAR_11->timecode_track, VAR_10);
    FUNC_13(VAR_9, VAR_11->timecode_track, VAR_10);
    VAR_11->track_instance_count++;

    for (VAR_13 = 0; VAR_13 < VAR_9->nb_streams; VAR_13++) {
        AVStream *VAR_17 = VAR_9->streams[VAR_13];
        FUNC_14(VAR_9, VAR_17, VAR_10);
        FUNC_10(VAR_9, VAR_17, VAR_10);
        FUNC_11(VAR_9, VAR_17, VAR_10);
        VAR_11->track_instance_count++;

        if (VAR_10->type == VAR_3 && VAR_10->instance == 1) {
            MXFStreamContext *VAR_18 = VAR_17->priv_data;
            VAR_8[VAR_18->index].write_desc(VAR_9, VAR_17);
        }
    }
}
