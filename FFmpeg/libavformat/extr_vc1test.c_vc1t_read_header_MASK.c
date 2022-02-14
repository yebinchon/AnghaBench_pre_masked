
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {int height; int width; int codec_id; int codec_type; } ;
struct TYPE_11__ {int * pb; } ;
struct TYPE_10__ {int duration; TYPE_5__* codecpar; } ;
typedef TYPE_1__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (TYPE_1__*,int,int,int) ;
 scalar_t__ FUNC_8 (TYPE_2__*,TYPE_5__*,int *,int ) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_6)
{
    AVIOContext *VAR_7 = VAR_6->pb;
    AVStream *VAR_8;
    int VAR_9;
    uint32_t VAR_10;
    uint32_t VAR_11;

    VAR_9 = FUNC_4(VAR_7);
    if (FUNC_3(VAR_7) != 0xC5 || ((VAR_11 = FUNC_5(VAR_7)) < 4))
        return VAR_0;


    VAR_8 = FUNC_2(VAR_6, ((void*)0));
    if (!VAR_8)
        return FUNC_0(VAR_4);

    VAR_8->codecpar->codec_type = VAR_1;
    VAR_8->codecpar->codec_id = VAR_2;

    if (FUNC_8(VAR_6, VAR_8->codecpar, VAR_7, VAR_5) < 0)
        return FUNC_0(VAR_4);

    FUNC_6(VAR_7, VAR_11 - 4);
    VAR_8->codecpar->height = FUNC_5(VAR_7);
    VAR_8->codecpar->width = FUNC_5(VAR_7);
    if(FUNC_5(VAR_7) != 0xC)
        return VAR_0;
    FUNC_6(VAR_7, 8);
    VAR_10 = FUNC_5(VAR_7);
    if(VAR_10 == 0xFFFFFFFF)
        FUNC_7(VAR_8, 32, 1, 1000);
    else{
        if (!VAR_10) {
            FUNC_1(VAR_6, VAR_3, "Zero FPS specified, defaulting to 1 FPS\n");
            VAR_10 = 1;
        }
        FUNC_7(VAR_8, 24, 1, VAR_10);
        VAR_8->duration = VAR_9;
    }

    return 0;
}
