
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int pb; } ;
struct TYPE_11__ {int size; scalar_t__ data; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,TYPE_1__*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_10(AVFormatContext *VAR_5, AVPacket *VAR_6)
{
    int VAR_7, VAR_8;

retry:
    VAR_7 = FUNC_6(VAR_5->pb, VAR_6, VAR_0);
    if (VAR_7 < 0)
        return VAR_7;

    if (VAR_7 < VAR_0) {
        FUNC_7(VAR_6);
        return FUNC_0(VAR_2);
    }

    if ((FUNC_1(VAR_6->data) >> 4) != 0xfff) {

        int VAR_9 = VAR_4 - VAR_0;

        FUNC_5(VAR_9 > 0);
        VAR_7 = FUNC_4(VAR_5->pb, VAR_6, VAR_9);
        if (VAR_7 != VAR_9) {
            FUNC_7(VAR_6);
            return FUNC_0(VAR_2);
        }
        if (!FUNC_8(VAR_6->data, VAR_3)) {
            FUNC_7(VAR_6);
            VAR_7 = FUNC_3(VAR_5);
        } else
            VAR_7 = FUNC_9(VAR_5, VAR_6);
        if (VAR_7 < 0)
            return VAR_7;

        goto retry;
    }

    VAR_8 = (FUNC_2(VAR_6->data + 3) >> 13) & 0x1FFF;
    if (VAR_8 < VAR_0) {
        FUNC_7(VAR_6);
        return VAR_1;
    }

    VAR_7 = FUNC_4(VAR_5->pb, VAR_6, VAR_8 - VAR_6->size);
    if (VAR_7 < 0)
        FUNC_7(VAR_6);

    return VAR_7;
}
