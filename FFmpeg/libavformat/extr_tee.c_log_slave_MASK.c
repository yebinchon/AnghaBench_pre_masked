
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {TYPE_8__** bsfs; TYPE_2__* avf; } ;
typedef TYPE_6__ TeeSlave ;
struct TYPE_18__ {TYPE_5__* filter; } ;
struct TYPE_17__ {TYPE_3__* codecpar; } ;
struct TYPE_15__ {char* name; TYPE_4__* priv_class; } ;
struct TYPE_14__ {char* (* item_name ) (TYPE_8__*) ;} ;
struct TYPE_13__ {int codec_type; int codec_id; } ;
struct TYPE_12__ {int nb_streams; TYPE_7__** streams; TYPE_1__* oformat; int url; } ;
struct TYPE_11__ {int name; } ;
typedef TYPE_7__ AVStream ;
typedef TYPE_8__ AVBSFContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (void*,int,char*,...) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (TYPE_8__*) ;

__attribute__((used)) static void FUNC_4(TeeSlave *VAR_0, void *VAR_1, int VAR_2)
{
    int VAR_3;
    FUNC_1(VAR_1, VAR_2, "filename:'%s' format:%s\n",
           VAR_0->avf->url, VAR_0->avf->oformat->name);
    for (VAR_3 = 0; VAR_3 < VAR_0->avf->nb_streams; VAR_3++) {
        AVStream *VAR_4 = VAR_0->avf->streams[VAR_3];
        AVBSFContext *VAR_5 = VAR_0->bsfs[VAR_3];
        const char *VAR_6;

        FUNC_1(VAR_1, VAR_2, "    stream:%d codec:%s type:%s",
               VAR_3, FUNC_2(VAR_4->codecpar->codec_id),
               FUNC_0(VAR_4->codecpar->codec_type));

        VAR_6 = VAR_5->filter->priv_class ?
                   VAR_5->filter->priv_class->item_name(VAR_5) : VAR_5->filter->name;
        FUNC_1(VAR_1, VAR_2, " bsfs: %s\n", VAR_6);
    }
}
