
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int second_last_frame; int avctx; int mv_ptr; int stream_ptr; int is_16bpp; } ;
typedef TYPE_1__ IpvideoContext ;
typedef int AVFrame ;


 unsigned char FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,int *,int,int) ;
 int FUNC_2 (int ,char*,unsigned char,int,int) ;

__attribute__((used)) static int FUNC_3(IpvideoContext *VAR_0, AVFrame *VAR_1)
{
    unsigned char VAR_2;
    int VAR_3, VAR_4;


    if (!VAR_0->is_16bpp) {
        VAR_2 = FUNC_0(&VAR_0->stream_ptr);
    } else {
        VAR_2 = FUNC_0(&VAR_0->mv_ptr);
    }

    if (VAR_2 < 56) {
        VAR_3 = 8 + (VAR_2 % 7);
        VAR_4 = VAR_2 / 7;
    } else {
        VAR_3 = -14 + ((VAR_2 - 56) % 29);
        VAR_4 = 8 + ((VAR_2 - 56) / 29);
    }

    FUNC_2(VAR_0->avctx, "motion byte = %d, (x, y) = (%d, %d)\n", VAR_2, VAR_3, VAR_4);
    return FUNC_1(VAR_0, VAR_0->second_last_frame, VAR_1, VAR_3, VAR_4);
}
