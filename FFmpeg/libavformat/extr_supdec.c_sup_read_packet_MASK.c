
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* int64_t ;
struct TYPE_8__ {int pb; } ;
struct TYPE_7__ {int size; scalar_t__ data; void* dts; void* pts; void* pos; int flags; scalar_t__ stream_index; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,TYPE_1__*,size_t) ;
 int FUNC_2 (int ,TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_5, AVPacket *VAR_6)
{
    int64_t VAR_7, VAR_8, VAR_9;
    int VAR_10;

    VAR_9 = FUNC_6(VAR_5->pb);

    if (FUNC_4(VAR_5->pb) != VAR_4)
        return FUNC_3(VAR_5->pb) ? VAR_0 : VAR_1;

    VAR_7 = FUNC_5(VAR_5->pb);
    VAR_8 = FUNC_5(VAR_5->pb);

    if ((VAR_10 = FUNC_2(VAR_5->pb, VAR_6, 3)) < 0)
        return VAR_10;

    VAR_6->stream_index = 0;
    VAR_6->flags |= VAR_3;
    VAR_6->pos = VAR_9;
    VAR_6->pts = VAR_7;

    VAR_6->dts = VAR_8 ? VAR_8 : VAR_2;

    if (VAR_6->size >= 3) {

        size_t VAR_11 = FUNC_0(VAR_6->data + 1);

        if ((VAR_10 = FUNC_1(VAR_5->pb, VAR_6, VAR_11)) < 0)
            return VAR_10;
    }

    return 0;
}
