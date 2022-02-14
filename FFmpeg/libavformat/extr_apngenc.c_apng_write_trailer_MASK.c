
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int plays; int frame_number; scalar_t__ acTL_offset; scalar_t__ prev_packet; } ;
struct TYPE_9__ {TYPE_1__* pb; TYPE_3__* priv_data; } ;
struct TYPE_8__ {int seekable; } ;
typedef TYPE_1__ AVIOContext ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ APNGMuxContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char,char,char,char) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ,int *,int) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_4 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_2)
{
    APNGMuxContext *VAR_3 = VAR_2->priv_data;
    AVIOContext *VAR_4 = VAR_2->pb;
    uint8_t VAR_5[8];
    int VAR_6;

    if (VAR_3->prev_packet) {
        VAR_6 = FUNC_4(VAR_2, ((void*)0));
        if (VAR_6 < 0)
            return VAR_6;
    }

    FUNC_2(VAR_4, FUNC_1('I', 'E', 'N', 'D'), ((void*)0), 0);

    if (VAR_3->acTL_offset && (VAR_4->seekable & VAR_0)) {
        FUNC_3(VAR_4, VAR_3->acTL_offset, VAR_1);

        FUNC_0(VAR_5, VAR_3->frame_number);
        FUNC_0(VAR_5 + 4, VAR_3->plays);
        FUNC_2(VAR_4, FUNC_1('a', 'c', 'T', 'L'), VAR_5, 8);
    }

    return 0;
}
