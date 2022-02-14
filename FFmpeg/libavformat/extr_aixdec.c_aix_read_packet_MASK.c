
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_7__ {int nb_streams; int pb; } ;
struct TYPE_6__ {unsigned int stream_index; unsigned int duration; int pos; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (char,char,char,char) ;
 int FUNC_1 (int ,TYPE_1__*,unsigned int) ;
 scalar_t__ FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (int ,unsigned int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_2, AVPacket *VAR_3)
{
    unsigned VAR_4, VAR_5, VAR_6, VAR_7;
    int64_t VAR_8;
    int VAR_9, VAR_10, VAR_11;

    VAR_8 = FUNC_8(VAR_2->pb);
    if (FUNC_2(VAR_2->pb))
        return VAR_0;
    VAR_7 = FUNC_6(VAR_2->pb);
    VAR_4 = FUNC_5(VAR_2->pb);
    if (VAR_7 == FUNC_0('A','I','X','E')) {
        FUNC_7(VAR_2->pb, VAR_4);
        for (VAR_11 = 0; VAR_11 < VAR_2->nb_streams; VAR_11++) {
            if (FUNC_2(VAR_2->pb))
                return VAR_0;
            VAR_7 = FUNC_6(VAR_2->pb);
            VAR_4 = FUNC_5(VAR_2->pb);
            FUNC_7(VAR_2->pb, VAR_4);
        }
        VAR_8 = FUNC_8(VAR_2->pb);
        VAR_7 = FUNC_6(VAR_2->pb);
        VAR_4 = FUNC_5(VAR_2->pb);
    }

    if (VAR_7 != FUNC_0('A','I','X','P'))
        return VAR_1;
    if (VAR_4 <= 8)
        return VAR_1;
    VAR_5 = FUNC_3(VAR_2->pb);
    if (FUNC_3(VAR_2->pb) != VAR_2->nb_streams || VAR_5 >= VAR_2->nb_streams)
        return VAR_1;
    VAR_6 = FUNC_4(VAR_2->pb);
    VAR_9 = FUNC_5(VAR_2->pb);
    if (VAR_9 < 0) {
        FUNC_7(VAR_2->pb, VAR_4 - 8);
        return 0;
    }

    VAR_10 = FUNC_1(VAR_2->pb, VAR_3, VAR_4 - 8);
    VAR_3->stream_index = VAR_5;
    VAR_3->duration = VAR_6;
    VAR_3->pos = VAR_8;
    return VAR_10;
}
