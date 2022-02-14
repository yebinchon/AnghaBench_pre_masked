
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_15__ {int extradata_size; unsigned int codec_tag; int codec_id; scalar_t__ extradata; } ;
struct TYPE_14__ {int nb_streams; TYPE_3__** streams; } ;
struct TYPE_13__ {TYPE_9__* codecpar; } ;
struct TYPE_12__ {int size; unsigned int type; } ;
struct TYPE_11__ {TYPE_8__* fc; } ;
typedef TYPE_1__ MOVContext ;
typedef TYPE_2__ MOVAtom ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (char,char,char,char) ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (TYPE_8__*,int ,char*) ;
 unsigned int FUNC_3 (int *) ;
 unsigned int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (TYPE_8__*,TYPE_9__*,int *,unsigned int) ;
 int FUNC_7 (TYPE_1__*,int *,TYPE_2__) ;

__attribute__((used)) static int FUNC_8(MOVContext *VAR_4, AVIOContext *VAR_5, MOVAtom VAR_6)
{
    AVStream *VAR_7;
    int VAR_8;

    if (VAR_4->fc->nb_streams < 1)
        return 0;
    VAR_7 = VAR_4->fc->streams[VAR_4->fc->nb_streams-1];

    if ((uint64_t)VAR_6.size > (1<<30))
        return VAR_0;

    if (VAR_6.size >= 10) {


        unsigned VAR_9 = FUNC_3(VAR_5);
        unsigned VAR_10 = FUNC_4(VAR_5);
        FUNC_5(VAR_5, -8, VAR_3);
        if (VAR_10 == FUNC_0('f','i','e','l') && VAR_9 == VAR_6.size)
            return FUNC_7(VAR_4, VAR_5, VAR_6);
    }
    if (VAR_7->codecpar->extradata_size > 1 && VAR_7->codecpar->extradata) {
        FUNC_2(VAR_4->fc, VAR_2, "ignoring multiple glbl\n");
        return 0;
    }
    FUNC_1(&VAR_7->codecpar->extradata);
    VAR_8 = FUNC_6(VAR_4->fc, VAR_7->codecpar, VAR_5, VAR_6.size);
    if (VAR_8 < 0)
        return VAR_8;
    if (VAR_6.type == FUNC_0('h','v','c','C') && VAR_7->codecpar->codec_tag == FUNC_0('d','v','h','1'))





        VAR_7->codecpar->codec_id = VAR_1;

    return 0;
}
