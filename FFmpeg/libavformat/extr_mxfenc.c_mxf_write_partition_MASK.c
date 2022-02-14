
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned int uint64_t ;
typedef unsigned int int64_t ;
struct TYPE_9__ {int nb_streams; int * pb; int * oformat; TYPE_1__* priv_data; } ;
struct TYPE_8__ {int edit_units_count; unsigned int* body_partition_offset; int body_partitions_count; unsigned int footer_partition_offset; unsigned int body_offset; int essence_container_count; scalar_t__ edit_unit_byte_count; } ;
typedef TYPE_1__ MXFContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 long long FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned int**,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned int,int ) ;
 unsigned int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,unsigned int) ;
 int FUNC_8 (int *,int const*,int) ;
 int const* VAR_2 ;
 int VAR_3 ;
 int const* VAR_4 ;
 int FUNC_9 (int *,int) ;
 unsigned int FUNC_10 (unsigned int) ;
 int FUNC_11 (int const*,int const*,int) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int const* VAR_5 ;
 int const* VAR_6 ;

__attribute__((used)) static int FUNC_16(AVFormatContext *VAR_7, int VAR_8,
                                int VAR_9,
                                const uint8_t *VAR_10, int VAR_11)
{
    MXFContext *VAR_12 = VAR_7->priv_data;
    AVIOContext *VAR_13 = VAR_7->pb;
    int64_t VAR_14;
    unsigned VAR_15 = 0;
    uint64_t VAR_16 = FUNC_4(VAR_13);
    int VAR_17;

    if (!VAR_12->edit_unit_byte_count && VAR_12->edit_units_count)
        VAR_15 = 85 + 12+(VAR_7->nb_streams+1)*6 +
            12+VAR_12->edit_units_count*15;
    else if (VAR_12->edit_unit_byte_count && VAR_9)
        VAR_15 = 80;

    if (VAR_15) {
        VAR_15 += 16 + 4;
        VAR_15 += FUNC_10(VAR_15);
    }

    if (VAR_10 && !FUNC_11(VAR_10, VAR_2, 16)) {
        if ((VAR_17 = FUNC_1(&VAR_12->body_partition_offset, VAR_12->body_partitions_count + 1,
                                     sizeof(*VAR_12->body_partition_offset))) < 0) {
            VAR_12->body_partitions_count = 0;
            return VAR_17;
        }
        VAR_12->body_partition_offset[VAR_12->body_partitions_count++] = VAR_16;
    }


    if (VAR_10)
        FUNC_8(VAR_13, VAR_10, 16);
    else
        FUNC_8(VAR_13, VAR_2, 16);

    FUNC_9(VAR_13, 88 + 16LL * FUNC_0(VAR_12->essence_container_count));


    FUNC_5(VAR_13, 1);
    FUNC_5(VAR_13, 3);
    FUNC_6(VAR_13, VAR_0);

    FUNC_7(VAR_13, VAR_16);

    if (VAR_10 && !FUNC_11(VAR_10, VAR_2, 16) && VAR_12->body_partitions_count > 1)
        FUNC_7(VAR_13, VAR_12->body_partition_offset[VAR_12->body_partitions_count-2]);
    else if (VAR_10 && !FUNC_11(VAR_10, VAR_4, 16) && VAR_12->body_partitions_count)
        FUNC_7(VAR_13, VAR_12->body_partition_offset[VAR_12->body_partitions_count-1]);
    else
        FUNC_7(VAR_13, 0);

    FUNC_7(VAR_13, VAR_12->footer_partition_offset);


    VAR_14 = FUNC_4(VAR_13);
    FUNC_7(VAR_13, 0);


    FUNC_7(VAR_13, VAR_15);
    FUNC_6(VAR_13, VAR_15 ? VAR_9 : 0);


    if (VAR_8 && VAR_12->edit_units_count && VAR_12->body_partitions_count && VAR_7->oformat != &VAR_3)
        FUNC_7(VAR_13, VAR_12->body_offset);
    else
        FUNC_7(VAR_13, 0);

    FUNC_6(VAR_13, VAR_8);


    if (VAR_7->oformat == &VAR_3)
        FUNC_8(VAR_13, VAR_6, 16);
    else
        FUNC_8(VAR_13, VAR_5, 16);


    FUNC_12(VAR_7);

    if (VAR_11) {

        int64_t VAR_18, VAR_19;
        unsigned VAR_20;

        FUNC_14(VAR_7);
        VAR_19 = FUNC_4(VAR_7->pb);
        FUNC_15(VAR_7);
        FUNC_14(VAR_7);
        FUNC_13(VAR_7);
        VAR_18 = FUNC_4(VAR_7->pb);
        VAR_20 = VAR_18 - VAR_19 + FUNC_10(VAR_18);


        FUNC_3(VAR_13, VAR_14, VAR_1);
        FUNC_7(VAR_13, VAR_20);
        FUNC_3(VAR_13, VAR_18, VAR_1);
    }

    if(VAR_10)
        FUNC_2(VAR_13);

    return 0;
}
