
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_11__ {int * pb; TYPE_1__** streams; } ;
struct TYPE_10__ {size_t stream_index; int flags; int segments_count; int size; int * data; int * segments; int granule; } ;
struct TYPE_9__ {int page_count; int page_counter; int serial_num; } ;
struct TYPE_8__ {TYPE_2__* priv_data; } ;
typedef TYPE_2__ OGGStreamContext ;
typedef TYPE_3__ OGGPage ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int *,int) ;
 int VAR_0 ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (TYPE_4__*,int *,int ) ;

__attribute__((used)) static int FUNC_12(AVFormatContext *VAR_1, OGGPage *VAR_2, int VAR_3)
{
    OGGStreamContext *VAR_4 = VAR_1->streams[VAR_2->stream_index]->priv_data;
    AVIOContext *VAR_5;
    int64_t VAR_6;
    int VAR_7, VAR_8;
    uint8_t *VAR_9;

    VAR_7 = FUNC_3(&VAR_5);
    if (VAR_7 < 0)
        return VAR_7;
    FUNC_9(VAR_5, VAR_0, 0);
    FUNC_10(VAR_5, "OggS");
    FUNC_5(VAR_5, 0);
    FUNC_5(VAR_5, VAR_2->flags | VAR_3);
    FUNC_7(VAR_5, VAR_2->granule);
    FUNC_6(VAR_5, VAR_4->serial_num);
    FUNC_6(VAR_5, VAR_4->page_counter++);
    VAR_6 = FUNC_4(VAR_5);
    FUNC_6(VAR_5, 0);
    FUNC_5(VAR_5, VAR_2->segments_count);
    FUNC_8(VAR_5, VAR_2->segments, VAR_2->segments_count);
    FUNC_8(VAR_5, VAR_2->data, VAR_2->size);

    FUNC_11(VAR_1, VAR_5, VAR_6);
    FUNC_2(VAR_5);

    VAR_8 = FUNC_1(VAR_5, &VAR_9);
    if (VAR_8 < 0)
        return VAR_8;

    FUNC_8(VAR_1->pb, VAR_9, VAR_8);
    FUNC_2(VAR_1->pb);
    FUNC_0(VAR_9);
    VAR_4->page_count--;
    return 0;
}
