
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int * streams; int nb_streams; } ;
struct TYPE_9__ {TYPE_1__* codecpar; } ;
struct TYPE_8__ {int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef int AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_3__*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_2, AVPacket *VAR_3)
{
    if (!VAR_2->nb_streams) {
        AVStream *VAR_4 = FUNC_1(VAR_2, ((void*)0));
        if (!VAR_4)
            return FUNC_0(VAR_1);
        VAR_4->codecpar->codec_type = VAR_0;
    }
    return FUNC_2(VAR_2, VAR_3, VAR_2->streams[0], 0);
}
