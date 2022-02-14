
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ int64_t ;
typedef int int32_t ;
struct TYPE_8__ {int nb_streams; int packet_size; int is_simple_index; int offset; scalar_t__ first_packet_offset; TYPE_1__** asf_st; } ;
struct TYPE_7__ {int ** streams; int * pb; TYPE_3__* priv_data; } ;
struct TYPE_6__ {scalar_t__ type; int indexed; size_t index; } ;
typedef int GUIDParseTable ;
typedef int AVStream ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ ASFContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,scalar_t__,int ,int,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_3, const GUIDParseTable *VAR_4)
{
    ASFContext *VAR_5 = VAR_3->priv_data;
    AVIOContext *VAR_6 = VAR_3->pb;
    AVStream *VAR_7 = ((void*)0);
    uint64_t VAR_8;
    uint32_t VAR_9, VAR_10;
    int32_t VAR_11 = -1;
    int VAR_12;
    int64_t VAR_13;
    uint64_t VAR_14 = FUNC_5(VAR_6);



    for (VAR_12 = 0; VAR_12 < VAR_5->nb_streams; VAR_12++) {
        if ((VAR_5->asf_st[VAR_12]->type == VAR_1) && !VAR_5->asf_st[VAR_12]->indexed) {
            VAR_5->asf_st[VAR_12]->indexed = 1;
            VAR_7 = VAR_3->streams[VAR_5->asf_st[VAR_12]->index];
            break;
        }
    }
    if (!VAR_7) {
        FUNC_6(VAR_6, VAR_14 - 24);
        return 0;
    }
    FUNC_6(VAR_6, 16);
    VAR_8 = FUNC_5(VAR_6);
    FUNC_6(VAR_6, 4);
    VAR_10 = FUNC_4(VAR_6);
    for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
        VAR_9 = FUNC_4(VAR_6);
        VAR_13 = FUNC_6(VAR_6, 2);
        if (VAR_13 < 0) {
            FUNC_2(VAR_3, VAR_2, "Skipping failed in asf_read_simple_index.\n");
            return VAR_13;
        }
        if (VAR_11 != VAR_9) {
            FUNC_1(VAR_7, VAR_5->first_packet_offset + VAR_5->packet_size *
                               VAR_9, FUNC_3(VAR_8, VAR_12, 10000),
                               VAR_5->packet_size, 0, VAR_0);
            VAR_11 = VAR_9;
        }
    }
    VAR_5->is_simple_index = 1;
    FUNC_0(VAR_6, VAR_5->offset, VAR_14);

    return 0;
}
