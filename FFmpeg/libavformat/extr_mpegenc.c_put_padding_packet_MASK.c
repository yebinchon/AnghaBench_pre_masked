
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int is_mpeg2; } ;
typedef TYPE_1__ MpegMuxContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(AVFormatContext *VAR_1, AVIOContext *VAR_2,
                               int VAR_3)
{
    MpegMuxContext *VAR_4 = VAR_1->priv_data;
    int VAR_5;

    FUNC_2(VAR_2, VAR_0);
    FUNC_1(VAR_2, VAR_3 - 6);
    if (!VAR_4->is_mpeg2) {
        FUNC_0(VAR_2, 0x0f);
        VAR_3 -= 7;
    } else
        VAR_3 -= 6;

    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
        FUNC_0(VAR_2, 0xff);
}
