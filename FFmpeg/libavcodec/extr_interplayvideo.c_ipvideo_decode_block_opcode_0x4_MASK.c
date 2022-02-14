
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int last_frame; int avctx; int mv_ptr; int stream_ptr; int is_16bpp; } ;
typedef TYPE_1__ IpvideoContext ;
typedef int AVFrame ;


 unsigned char FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,int *,int,int) ;
 int FUNC_2 (int ,char*,unsigned char,int,int) ;

__attribute__((used)) static int FUNC_3(IpvideoContext *VAR_0, AVFrame *VAR_1)
{
    int VAR_2, VAR_3;
    unsigned char VAR_4, VAR_5, VAR_6;


    if (!VAR_0->is_16bpp) {
        VAR_4 = FUNC_0(&VAR_0->stream_ptr);
    } else {
        VAR_4 = FUNC_0(&VAR_0->mv_ptr);
    }

    VAR_5 = VAR_4 & 0x0F;
    VAR_6 = (VAR_4 >> 4) & 0x0F;
    VAR_2 = -8 + VAR_5;
    VAR_3 = -8 + VAR_6;

    FUNC_2(VAR_0->avctx, "motion byte = %d, (x, y) = (%d, %d)\n", VAR_4, VAR_2, VAR_3);
    return FUNC_1(VAR_0, VAR_0->last_frame, VAR_1, VAR_2, VAR_3);
}
