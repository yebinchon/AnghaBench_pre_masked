
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int pb; TYPE_2__** streams; } ;
struct TYPE_12__ {TYPE_1__* codecpar; } ;
struct TYPE_11__ {int codecpar; } ;
struct TYPE_10__ {int sample_rate; void* channels; int codec_id; int codec_type; } ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char,char,char,char) ;
 int VAR_4 ;
 TYPE_3__* FUNC_2 (TYPE_4__*,int *) ;
 void* FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,unsigned int,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (TYPE_3__*,int,int,int) ;
 int FUNC_10 (TYPE_4__*,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_5)
{
    unsigned VAR_6, VAR_7, VAR_8;
    unsigned VAR_9;
    unsigned VAR_10 = 0x20;
    unsigned VAR_11 = 0x10;
    unsigned VAR_12;
    int VAR_13;

    FUNC_8(VAR_5->pb, 4);
    VAR_7 = FUNC_5(VAR_5->pb) + 8;
    FUNC_8(VAR_5->pb, 16);
    VAR_8 = FUNC_4(VAR_5->pb);
    if (VAR_8 == 0)
        return VAR_0;
    VAR_9 = VAR_10 + VAR_11 * VAR_8 + 0x10;
    if (VAR_9 >= VAR_7)
        return VAR_0;
    FUNC_7(VAR_5->pb, VAR_9, VAR_4);
    VAR_6 = FUNC_3(VAR_5->pb);
    if (VAR_6 == 0)
        return VAR_0;
    FUNC_8(VAR_5->pb, 7);
    for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
        AVStream *VAR_14 = FUNC_2(VAR_5, ((void*)0));

        if (!VAR_14)
            return FUNC_0(VAR_3);
        VAR_14->codecpar->codec_type = VAR_1;
        VAR_14->codecpar->codec_id = VAR_2;
        VAR_14->codecpar->sample_rate = FUNC_5(VAR_5->pb);
        VAR_14->codecpar->channels = FUNC_3(VAR_5->pb);
        FUNC_9(VAR_14, 64, 1, VAR_14->codecpar->sample_rate);
        FUNC_8(VAR_5->pb, 3);
    }

    FUNC_7(VAR_5->pb, VAR_7, VAR_4);
    for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
        if (FUNC_6(VAR_5->pb) != FUNC_1('A','I','X','P'))
            return VAR_0;
        VAR_12 = FUNC_5(VAR_5->pb);
        if (VAR_12 <= 8)
            return VAR_0;
        FUNC_8(VAR_5->pb, 8);
        FUNC_10(VAR_5, VAR_5->streams[VAR_13]->codecpar, VAR_5->pb, VAR_12 - 8);
    }

    return 0;
}
