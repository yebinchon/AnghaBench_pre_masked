
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int dec_ctx; TYPE_2__* st; } ;
struct TYPE_8__ {int nb_streams; int fmt_ctx; TYPE_5__* streams; } ;
struct TYPE_7__ {TYPE_1__* codecpar; } ;
struct TYPE_6__ {scalar_t__ codec_id; } ;
typedef TYPE_3__ InputFile ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_5__**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(InputFile *VAR_1)
{
    int VAR_2;


    for (VAR_2 = 0; VAR_2 < VAR_1->nb_streams; VAR_2++)
        if (VAR_1->streams[VAR_2].st->codecpar->codec_id != VAR_0)
            FUNC_1(&VAR_1->streams[VAR_2].dec_ctx);

    FUNC_0(&VAR_1->streams);
    VAR_1->nb_streams = 0;

    FUNC_2(&VAR_1->fmt_ctx);
}
