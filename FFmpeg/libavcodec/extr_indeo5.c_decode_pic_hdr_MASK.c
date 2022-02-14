
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int prev_frame_type; int frame_type; int frame_num; int gop_invalid; int frame_flags; int checksum; int gb; int mb_vlc; int pic_hdr_size; int is_scalable; } ;
typedef TYPE_1__ IVI45DecContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char*,...) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int *,int,int ,int *,int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(IVI45DecContext *VAR_7, AVCodecContext *VAR_8)
{
    int VAR_9;

    if (FUNC_4(&VAR_7->gb, 5) != 0x1F) {
        FUNC_1(VAR_8, VAR_1, "Invalid picture start code!\n");
        return VAR_0;
    }

    VAR_7->prev_frame_type = VAR_7->frame_type;
    VAR_7->frame_type = FUNC_4(&VAR_7->gb, 3);
    if (VAR_7->frame_type >= 5) {
        FUNC_1(VAR_8, VAR_1, "Invalid frame type: %d \n", VAR_7->frame_type);
        VAR_7->frame_type = VAR_4;
        return VAR_0;
    }

    VAR_7->frame_num = FUNC_4(&VAR_7->gb, 8);

    if (VAR_7->frame_type == VAR_4) {
        if ((VAR_9 = FUNC_2(VAR_7, VAR_8)) < 0) {
            FUNC_1(VAR_8, VAR_1, "Invalid GOP header, skipping frames.\n");
            VAR_7->gop_invalid = 1;
            return VAR_9;
        }
        VAR_7->gop_invalid = 0;
    }

    if (VAR_7->frame_type == VAR_3 && !VAR_7->is_scalable) {
        FUNC_1(VAR_8, VAR_1, "Scalable inter frame in non scalable stream\n");
        VAR_7->frame_type = VAR_2;
        return VAR_0;
    }

    if (VAR_7->frame_type != VAR_5) {
        VAR_7->frame_flags = FUNC_4(&VAR_7->gb, 8);

        VAR_7->pic_hdr_size = (VAR_7->frame_flags & 1) ? FUNC_5(&VAR_7->gb, 24) : 0;

        VAR_7->checksum = (VAR_7->frame_flags & 0x10) ? FUNC_4(&VAR_7->gb, 16) : 0;


        if (VAR_7->frame_flags & 0x20)
            FUNC_7(&VAR_7->gb);


        VAR_9 = FUNC_3(&VAR_7->gb, VAR_7->frame_flags & 0x40,
                                   VAR_6, &VAR_7->mb_vlc, VAR_8);
        if (VAR_9 < 0)
            return VAR_9;

        FUNC_6(&VAR_7->gb, 3);
    }

    FUNC_0(&VAR_7->gb);

    return 0;
}
