
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int pb; } ;
struct TYPE_12__ {void* den; void* num; } ;
struct TYPE_11__ {int need_parsing; void* duration; TYPE_1__* codecpar; } ;
struct TYPE_10__ {void* height; void* width; void* codec_tag; int codec_id; int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVRational ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*,int ,char*) ;
 TYPE_2__* FUNC_2 (TYPE_4__*,int *) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (TYPE_2__*,int,void*,void*) ;
 int VAR_5 ;
 int FUNC_7 (int ,void*) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_6)
{
    AVStream *VAR_7;
    AVRational VAR_8;

    FUNC_4(VAR_6->pb);
    FUNC_3(VAR_6->pb);
    FUNC_3(VAR_6->pb);

    VAR_7 = FUNC_2(VAR_6, ((void*)0));
    if (!VAR_7)
        return FUNC_0(VAR_4);


    VAR_7->codecpar->codec_type = VAR_1;
    VAR_7->codecpar->codec_tag = FUNC_4(VAR_6->pb);
    VAR_7->codecpar->codec_id = FUNC_7(VAR_5, VAR_7->codecpar->codec_tag);
    VAR_7->codecpar->width = FUNC_3(VAR_6->pb);
    VAR_7->codecpar->height = FUNC_3(VAR_6->pb);
    VAR_8.den = FUNC_4(VAR_6->pb);
    VAR_8.num = FUNC_4(VAR_6->pb);
    VAR_7->duration = FUNC_4(VAR_6->pb);
    FUNC_5(VAR_6->pb, 4);

    VAR_7->need_parsing = VAR_2;

    if (!VAR_8.den || !VAR_8.num) {
        FUNC_1(VAR_6, VAR_3, "Invalid frame rate\n");
        return VAR_0;
    }

    FUNC_6(VAR_7, 64, VAR_8.num, VAR_8.den);

    return 0;
}
