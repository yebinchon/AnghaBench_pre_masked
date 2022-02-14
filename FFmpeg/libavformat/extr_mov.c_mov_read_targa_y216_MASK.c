
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int extradata_size; int * extradata; void* width; void* height; } ;
struct TYPE_9__ {TYPE_2__* fc; } ;
struct TYPE_8__ {int nb_streams; TYPE_1__** streams; } ;
struct TYPE_7__ {TYPE_4__* codecpar; } ;
typedef TYPE_3__ MOVContext ;
typedef int MOVAtom ;
typedef int AVIOContext ;
typedef TYPE_4__ AVCodecParameters ;


 int VAR_0 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(MOVContext *VAR_1, AVIOContext *VAR_2, MOVAtom VAR_3)
{
    int VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_0);

    if (!VAR_4 && VAR_1->fc->nb_streams >= 1) {
        AVCodecParameters *VAR_5 = VAR_1->fc->streams[VAR_1->fc->nb_streams-1]->codecpar;
        if (VAR_5->extradata_size >= 40) {
            VAR_5->height = FUNC_0(&VAR_5->extradata[36]);
            VAR_5->width = FUNC_0(&VAR_5->extradata[38]);
        }
    }
    return VAR_4;
}
