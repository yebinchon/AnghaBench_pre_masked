
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_13__ {int * pb; } ;
struct TYPE_12__ {int num; int den; } ;
struct TYPE_11__ {TYPE_1__* codecpar; void* duration; void* nb_frames; scalar_t__ start_time; int need_parsing; } ;
struct TYPE_10__ {void* codec_tag; int codec_id; int codec_type; void* height; void* width; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVRational ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__ FUNC_1 (int ,int ) ;
 int FUNC_2 (void*) ;
 TYPE_2__* FUNC_3 (TYPE_4__*,int ) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_2__*,int,int ,int ) ;
 int VAR_5 ;
 int FUNC_7 (int ,void*) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_6)
{
    AVIOContext *VAR_7 = VAR_6->pb;
    AVStream *VAR_8;
    AVRational VAR_9;
    uint32_t VAR_10;

    FUNC_5(VAR_7, 4);
    VAR_10 = FUNC_4(VAR_7);
    if (VAR_10 != 80)
        return FUNC_0(VAR_2);
    FUNC_5(VAR_7, 20);

    VAR_8 = FUNC_3(VAR_6, 0);
    if (!VAR_8)
        return FUNC_0(VAR_3);

    VAR_8->need_parsing = VAR_1;
    VAR_8->start_time = 0;
    VAR_8->nb_frames =
    VAR_8->duration = FUNC_4(VAR_7);
    VAR_9 = FUNC_1(FUNC_2(FUNC_4(VAR_7)), VAR_4);
    VAR_8->codecpar->width = FUNC_4(VAR_7);
    VAR_8->codecpar->height = FUNC_4(VAR_7);
    FUNC_5(VAR_7, 12);
    VAR_8->codecpar->codec_type = VAR_0;
    VAR_8->codecpar->codec_tag = FUNC_4(VAR_7);
    VAR_8->codecpar->codec_id = FUNC_7(VAR_5,
                                               VAR_8->codecpar->codec_tag);
    FUNC_6(VAR_8, 64, VAR_9.den, VAR_9.num);
    FUNC_5(VAR_7, 20);

    return 0;
}
