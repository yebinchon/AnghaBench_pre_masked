
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int id; } ;
struct TYPE_10__ {TYPE_1__* codecpar; } ;
struct TYPE_9__ {int codec_id; int codec_type; } ;
typedef int OptionsContext ;
typedef TYPE_2__ AVStream ;
typedef int AVFormatContext ;
typedef TYPE_3__ AVCodec ;


 int FUNC_0 (int ,int ,char*,int *,TYPE_2__*) ;
 TYPE_3__* FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_3__* FUNC_2 (char*,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static AVCodec *FUNC_3(OptionsContext *VAR_2, AVFormatContext *VAR_3, AVStream *VAR_4)
{
    char *VAR_5 = ((void*)0);

    FUNC_0(VAR_0, VAR_1, VAR_5, VAR_3, VAR_4);
    if (VAR_5) {
        AVCodec *VAR_6 = FUNC_2(VAR_5, VAR_4->codecpar->codec_type, 0);
        VAR_4->codecpar->codec_id = VAR_6->id;
        return VAR_6;
    } else
        return FUNC_1(VAR_4->codecpar->codec_id);
}
