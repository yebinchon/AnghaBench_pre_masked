
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int width; unsigned int height; TYPE_1__* priv_data; } ;
struct TYPE_5__ {unsigned int cursor_w; unsigned int cursor_h; int delta; int cursor; int cursor_size; int gb; } ;
typedef TYPE_1__ RASCContext ;
typedef int GetByteContext ;
typedef int AVPacket ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,unsigned int) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned int) ;
 unsigned int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int *,unsigned int,unsigned int) ;
 int FUNC_6 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_2,
                       AVPacket *VAR_3, unsigned VAR_4)
{
    RASCContext *VAR_5 = VAR_2->priv_data;
    GetByteContext *VAR_6 = &VAR_5->gb;
    unsigned VAR_7, VAR_8, VAR_9, VAR_10;
    int VAR_11;

    VAR_9 = FUNC_4(VAR_6);
    FUNC_3(VAR_6, 8);
    VAR_7 = FUNC_2(VAR_6);
    VAR_8 = FUNC_2(VAR_6);
    FUNC_3(VAR_6, 12);
    VAR_10 = FUNC_2(VAR_6);

    if (VAR_7 > VAR_2->width || VAR_8 > VAR_2->height)
        return VAR_0;

    if (VAR_10 != 3 * VAR_7 * VAR_8)
        return VAR_0;

    FUNC_1(&VAR_5->cursor, &VAR_5->cursor_size, VAR_10);
    if (!VAR_5->cursor)
        return FUNC_0(VAR_1);

    VAR_11 = FUNC_5(VAR_2, VAR_3,
                      VAR_4 - (FUNC_4(VAR_6) - VAR_9),
                      VAR_10);
    if (VAR_11 < 0)
        return VAR_11;
    FUNC_6(VAR_5->cursor, VAR_5->delta, VAR_10);

    FUNC_3(VAR_6, VAR_4 - (FUNC_4(VAR_6) - VAR_9));

    VAR_5->cursor_w = VAR_7;
    VAR_5->cursor_h = VAR_8;

    return 0;
}
