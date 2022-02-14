
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int nb_streams; TYPE_2__** streams; } ;
struct TYPE_8__ {TYPE_1__* codecpar; } ;
struct TYPE_7__ {scalar_t__ codec_id; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;
 int FUNC_2 (TYPE_2__*,int,int,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_3)
{
    AVStream *VAR_4;

    if (VAR_3->nb_streams != 1) {
        FUNC_1(VAR_3, VAR_1, "Only exactly 1 stream is supported\n");
        return FUNC_0(VAR_2);
    }
    VAR_4 = VAR_3->streams[0];
    if (VAR_4->codecpar->codec_id != VAR_0) {
        FUNC_1(VAR_3, VAR_1, "Only WebP is supported\n");
        return FUNC_0(VAR_2);
    }
    FUNC_2(VAR_4, 24, 1, 1000);

    return 0;
}
