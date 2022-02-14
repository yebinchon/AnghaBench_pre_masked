
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {int extradata; } ;
struct TYPE_11__ {int nb_streams; TYPE_3__** streams; } ;
struct TYPE_10__ {TYPE_7__* codecpar; } ;
struct TYPE_9__ {int size; } ;
struct TYPE_8__ {TYPE_6__* fc; } ;
typedef TYPE_1__ MOVContext ;
typedef TYPE_2__ MOVAtom ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (TYPE_6__*,TYPE_7__*,int *,int) ;

__attribute__((used)) static int FUNC_4(MOVContext *VAR_2, AVIOContext *VAR_3, MOVAtom VAR_4)
{
    AVStream *VAR_5;
    uint8_t VAR_6;
    int VAR_7;

    if (VAR_2->fc->nb_streams < 1)
        return 0;
    VAR_5 = VAR_2->fc->streams[VAR_2->fc->nb_streams-1];

    if (VAR_4.size >= (1<<28) || VAR_4.size < 7)
        return VAR_0;

    VAR_6 = FUNC_1(VAR_3);
    if ((VAR_6 & 0xf0) != 0xc0)
        return 0;

    FUNC_2(VAR_3, 6, VAR_1);
    FUNC_0(&VAR_5->codecpar->extradata);
    VAR_7 = FUNC_3(VAR_2->fc, VAR_5->codecpar, VAR_3, VAR_4.size - 7);
    if (VAR_7 < 0)
        return VAR_7;

    return 0;
}
