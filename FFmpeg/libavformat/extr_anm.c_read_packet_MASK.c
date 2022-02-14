
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int * pb; TYPE_2__* priv_data; } ;
struct TYPE_11__ {int size; int flags; } ;
struct TYPE_10__ {int page; int record; int page_table_offset; TYPE_1__* pt; } ;
struct TYPE_9__ {int nb_records; scalar_t__ base_record; } ;
typedef TYPE_1__ Page ;
typedef TYPE_2__ AnmDemuxContext ;
typedef TYPE_3__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_4,
                       AVPacket *VAR_5)
{
    AnmDemuxContext *VAR_6 = VAR_4->priv_data;
    AVIOContext *VAR_7 = VAR_4->pb;
    Page *VAR_8;
    int VAR_9, VAR_10;

    if (FUNC_2(VAR_4->pb))
        return FUNC_0(VAR_1);

    if (VAR_6->page < 0)
        return VAR_6->page;

repeat:
    VAR_8 = &VAR_6->pt[VAR_6->page];


    if (VAR_6->record < 0) {
        FUNC_4(VAR_7, VAR_6->page_table_offset + VAR_2*6 + (VAR_6->page<<16), VAR_3);
        FUNC_5(VAR_7, 8 + 2*VAR_8->nb_records);
        VAR_6->record = 0;
    }



    if (VAR_6->record >= VAR_8->nb_records) {
        VAR_6->page = FUNC_7(VAR_6, VAR_8->base_record + VAR_8->nb_records);
        if (VAR_6->page < 0)
            return VAR_6->page;
        VAR_6->record = -1;
        goto repeat;
    }


    VAR_9 = FUNC_6(VAR_7);
    FUNC_4(VAR_7, VAR_6->page_table_offset + VAR_2*6 + (VAR_6->page<<16) +
              8 + VAR_6->record * 2, VAR_3);
    VAR_10 = FUNC_3(VAR_7);
    FUNC_4(VAR_7, VAR_9, VAR_3);


    VAR_5->size = FUNC_1(VAR_4->pb, VAR_5, VAR_10);
    if (VAR_5->size < 0)
        return VAR_5->size;
    if (VAR_8->base_record + VAR_6->record == 0)
        VAR_5->flags |= VAR_0;

    VAR_6->record++;
    return 0;
}
