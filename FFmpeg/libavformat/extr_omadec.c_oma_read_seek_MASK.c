
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct AVFormatContext {int pb; TYPE_3__** streams; TYPE_2__* priv_data; } ;
typedef int int64_t ;
struct TYPE_6__ {TYPE_1__* codecpar; } ;
struct TYPE_5__ {scalar_t__ content_start; int iv; int encrypted; } ;
struct TYPE_4__ {scalar_t__ codec_id; } ;
typedef TYPE_2__ OMAContext ;
typedef TYPE_3__ AVStream ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct AVFormatContext*,int,int,int) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct AVFormatContext *VAR_4,
                         int VAR_5, int64_t VAR_6, int VAR_7)
{
    OMAContext *VAR_8 = VAR_4->priv_data;
    AVStream *VAR_9 = VAR_4->streams[0];
    int64_t VAR_10;

    if (VAR_9->codecpar->codec_id == VAR_2 ||
        VAR_9->codecpar->codec_id == VAR_1)
        return -1;

    VAR_10 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7);
    if (!VAR_8->encrypted)
        return VAR_10;


    if (VAR_10 || FUNC_2(VAR_4->pb) < VAR_8->content_start)
        goto wipe;
    if ((VAR_10 = FUNC_1(VAR_4->pb, -8, VAR_3)) < 0)
        goto wipe;
    if ((VAR_10 = FUNC_0(VAR_4->pb, VAR_8->iv, 8)) < 8) {
        if (VAR_10 >= 0)
            VAR_10 = VAR_0;
        goto wipe;
    }

    return 0;
wipe:
    FUNC_4(VAR_8->iv, 0, 8);
    return VAR_10;
}
