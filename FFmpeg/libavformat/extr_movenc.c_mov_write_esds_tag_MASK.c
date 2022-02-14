
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_8__ {int buffer_size; int avg_bitrate; int max_bitrate; } ;
struct TYPE_7__ {int vos_len; int vos_data; TYPE_1__* par; int st; int track_id; } ;
struct TYPE_6__ {scalar_t__ codec_id; int sample_rate; scalar_t__ codec_type; int bit_rate; } ;
typedef TYPE_2__ MOVTrack ;
typedef int AVIOContext ;
typedef TYPE_3__ AVCPBProperties ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 (int ,int ,unsigned int) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,unsigned int) ;
 int FUNC_8 (int *,int ,int) ;
 unsigned int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ,scalar_t__) ;
 int VAR_5 ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,int,int) ;
 int FUNC_13 (int *,int ) ;

__attribute__((used)) static int FUNC_14(AVIOContext *VAR_6, MOVTrack *VAR_7)
{
    AVCPBProperties *VAR_8;
    int64_t VAR_9 = FUNC_3(VAR_6);
    int VAR_10 = VAR_7->vos_len ? 5 + VAR_7->vos_len : 0;
    unsigned VAR_11;

    FUNC_7(VAR_6, 0);
    FUNC_11(VAR_6, "esds");
    FUNC_7(VAR_6, 0);


    FUNC_12(VAR_6, 0x03, 3 + 5+13 + VAR_10 + 5+1);
    FUNC_5(VAR_6, VAR_7->track_id);
    FUNC_4(VAR_6, 0x00);


    FUNC_12(VAR_6, 0x04, 13 + VAR_10);


    if ((VAR_7->par->codec_id == VAR_2 ||
         VAR_7->par->codec_id == VAR_3) &&
        VAR_7->par->sample_rate > 24000)
        FUNC_4(VAR_6, 0x6B);
    else
        FUNC_4(VAR_6, FUNC_10(VAR_5, VAR_7->par->codec_id));



    if (VAR_7->par->codec_id == VAR_1)
        FUNC_4(VAR_6, (0x38 << 2) | 1);
    else if (VAR_7->par->codec_type == VAR_0)
        FUNC_4(VAR_6, 0x15);
    else
        FUNC_4(VAR_6, 0x11);

    VAR_8 = (AVCPBProperties*)FUNC_2(VAR_7->st, VAR_4,
                                                      ((void*)0));

    FUNC_6(VAR_6, VAR_8 ? VAR_8->buffer_size / 8 : 0);

    VAR_11 = FUNC_9(VAR_7);
    FUNC_7(VAR_6, VAR_8 ? FUNC_1(VAR_8->max_bitrate, VAR_8->avg_bitrate, VAR_11) : FUNC_0(VAR_7->par->bit_rate, VAR_11));
    FUNC_7(VAR_6, VAR_11);

    if (VAR_7->vos_len) {

        FUNC_12(VAR_6, 0x05, VAR_7->vos_len);
        FUNC_8(VAR_6, VAR_7->vos_data, VAR_7->vos_len);
    }


    FUNC_12(VAR_6, 0x06, 1);
    FUNC_4(VAR_6, 0x02);
    return FUNC_13(VAR_6, VAR_9);
}
