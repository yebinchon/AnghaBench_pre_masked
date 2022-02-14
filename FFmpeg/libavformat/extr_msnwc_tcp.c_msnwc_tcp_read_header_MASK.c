
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int codec_tag; int codec_id; int codec_type; } ;
struct TYPE_10__ {int * pb; } ;
struct TYPE_9__ {TYPE_3__* codecpar; } ;
typedef TYPE_1__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char,char,char,int ) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;
 TYPE_1__* FUNC_3 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int,int,int) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_6)
{
    AVIOContext *VAR_7 = VAR_6->pb;
    AVCodecParameters *VAR_8;
    AVStream *VAR_9;

    VAR_9 = FUNC_3(VAR_6, ((void*)0));
    if (!VAR_9)
        return FUNC_0(VAR_4);

    VAR_8 = VAR_9->codecpar;
    VAR_8->codec_type = VAR_1;
    VAR_8->codec_id = VAR_2;
    VAR_8->codec_tag = FUNC_1('M', 'L', '2', '0');

    FUNC_6(VAR_9, 32, 1, 1000);



    while(FUNC_5(VAR_7) != VAR_5 && !FUNC_4(VAR_7)) ;

    if(FUNC_4(VAR_7)) {
        FUNC_2(VAR_6, VAR_3, "Could not find valid start.\n");
        return VAR_0;
    }

    return 0;
}
