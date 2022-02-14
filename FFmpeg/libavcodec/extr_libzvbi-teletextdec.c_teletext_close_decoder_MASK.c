
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nb_pages; int last_pgno; int last_ass_alignment; scalar_t__ readorder; int subtitle_map; int pts; int * vbi; TYPE_5__* pages; int lines_processed; } ;
typedef TYPE_1__ TeletextContext ;
struct TYPE_8__ {int sub_rect; } ;
struct TYPE_7__ {int flags2; TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__**) ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_2)
{
    TeletextContext *VAR_3 = VAR_2->priv_data;

    FUNC_1(VAR_2, "lines_total=%u\n", VAR_3->lines_processed);
    while (VAR_3->nb_pages)
        FUNC_3(&VAR_3->pages[--VAR_3->nb_pages].sub_rect);
    FUNC_0(&VAR_3->pages);

    FUNC_4(VAR_3->vbi);
    VAR_3->vbi = ((void*)0);
    VAR_3->pts = VAR_1;
    VAR_3->last_pgno = -1;
    VAR_3->last_ass_alignment = 2;
    FUNC_2(VAR_3->subtitle_map, 0, sizeof(VAR_3->subtitle_map));
    if (!(VAR_2->flags2 & VAR_0))
        VAR_3->readorder = 0;
    return 0;
}
