
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int nb_streams; TYPE_3__** streams; } ;
struct TYPE_8__ {TYPE_1__* codecpar; } ;
struct TYPE_7__ {TYPE_5__* fc; } ;
struct TYPE_6__ {int codec_id; } ;
typedef TYPE_2__ MOVContext ;
typedef int MOVAtom ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;



 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_5__*,int ,char*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(MOVContext *VAR_5, AVIOContext *VAR_6, MOVAtom VAR_7)
{
    AVStream *VAR_8;
    int VAR_9;

    if (VAR_5->fc->nb_streams < 1)
        return 0;
    VAR_8 = VAR_5->fc->streams[VAR_5->fc->nb_streams-1];

    VAR_9 = FUNC_1(VAR_6) & 0xFF;
    FUNC_0(VAR_5->fc, VAR_4, "enda %d\n", VAR_9);
    if (VAR_9 == 1) {
        switch (VAR_8->codecpar->codec_id) {
        case 129:
            VAR_8->codecpar->codec_id = VAR_2;
            break;
        case 128:
            VAR_8->codecpar->codec_id = VAR_3;
            break;
        case 131:
            VAR_8->codecpar->codec_id = VAR_0;
            break;
        case 130:
            VAR_8->codecpar->codec_id = VAR_1;
            break;
        default:
            break;
        }
    }
    return 0;
}
