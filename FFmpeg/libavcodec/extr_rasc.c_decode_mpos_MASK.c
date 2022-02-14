
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {void* cursor_y; void* cursor_x; int gb; } ;
typedef TYPE_1__ RASCContext ;
typedef int GetByteContext ;
typedef int AVPacket ;
typedef TYPE_2__ AVCodecContext ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned int) ;
 unsigned int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_0,
                       AVPacket *VAR_1, unsigned VAR_2)
{
    RASCContext *VAR_3 = VAR_0->priv_data;
    GetByteContext *VAR_4 = &VAR_3->gb;
    unsigned VAR_5;

    VAR_5 = FUNC_2(VAR_4);
    FUNC_1(VAR_4, 8);
    VAR_3->cursor_x = FUNC_0(VAR_4);
    VAR_3->cursor_y = FUNC_0(VAR_4);

    FUNC_1(VAR_4, VAR_2 - (FUNC_2(VAR_4) - VAR_5));

    return 0;
}
