
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_10__ {int pb; } ;
struct TYPE_9__ {int stream_index; int flags; scalar_t__ pos; scalar_t__ data; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,TYPE_1__*,unsigned int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,unsigned int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int ,scalar_t__,unsigned int) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_4 ;
 int FUNC_9 (scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_10(AVFormatContext *VAR_5, AVPacket *VAR_6)
{
    int64_t VAR_7;
    unsigned VAR_8;
    int VAR_9, VAR_10 = 0, VAR_11;

    VAR_7 = FUNC_8(VAR_5->pb);

    VAR_9 = FUNC_6(VAR_5->pb);
    FUNC_7(VAR_5->pb, 4);

    VAR_8 = FUNC_6(VAR_5->pb);
    if (VAR_8 <= 52)
        return VAR_0;

    FUNC_7(VAR_5->pb, 6);
    VAR_11 = FUNC_6(VAR_5->pb);
    FUNC_7(VAR_5->pb, 30);

    if (VAR_7 == VAR_3) {
        if (FUNC_2(VAR_6, VAR_8 - 52 + 24) < 0)
            return FUNC_0(VAR_2);
        FUNC_9(VAR_6->data, VAR_4, 24);
        VAR_10 = FUNC_5(VAR_5->pb, VAR_6->data + 24, VAR_8 - 52);
        if (VAR_10 < 0) {
            FUNC_3(VAR_6);
            return VAR_10;
        }
        FUNC_4(VAR_6, VAR_10 + 24);
    } else {
        VAR_10 = FUNC_1(VAR_5->pb, VAR_6, VAR_8 - 52);
    }
    VAR_6->stream_index = !!VAR_11;
    VAR_6->pos = VAR_7;
    if (VAR_9 & (1 << 12))
        VAR_6->flags |= VAR_1;

    return VAR_10;
}
