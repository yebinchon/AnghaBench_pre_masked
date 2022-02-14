
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int * oformat; int * pb; TYPE_1__* priv_data; } ;
struct TYPE_4__ {long long body_partitions_count; int footer_partition_offset; int * body_partition_offset; scalar_t__ edit_unit_byte_count; } ;
typedef TYPE_1__ MXFContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int VAR_0 ;
 int FUNC_4 (int *,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(AVFormatContext *VAR_2)
{
    MXFContext *VAR_3 = VAR_2->priv_data;
    AVIOContext *VAR_4 = VAR_2->pb;
    uint64_t VAR_5 = FUNC_0(VAR_4);
    int VAR_6;

    FUNC_3(VAR_4, VAR_1, 16);
    FUNC_4(VAR_4, 28 + 12LL*VAR_3->body_partitions_count);

    if (VAR_3->edit_unit_byte_count && VAR_2->oformat != &VAR_0)
        FUNC_1(VAR_4, 1);
    else
        FUNC_1(VAR_4, 0);
    FUNC_2(VAR_4, 0);

    for (VAR_6 = 0; VAR_6 < VAR_3->body_partitions_count; VAR_6++) {
        FUNC_1(VAR_4, 1);
        FUNC_2(VAR_4, VAR_3->body_partition_offset[VAR_6]);
    }

    FUNC_1(VAR_4, 0);
    FUNC_2(VAR_4, VAR_3->footer_partition_offset);

    FUNC_1(VAR_4, FUNC_0(VAR_4) - VAR_5 + 4);
}
