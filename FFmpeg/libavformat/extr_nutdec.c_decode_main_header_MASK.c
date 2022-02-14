
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_22__ {unsigned int num; unsigned int den; } ;
typedef TYPE_2__ uint8_t ;
typedef int uint64_t ;
struct TYPE_25__ {TYPE_4__* pb; } ;
struct TYPE_24__ {scalar_t__ eof_reached; } ;
struct TYPE_23__ {int version; int max_distance; unsigned int time_base_count; unsigned int header_count; unsigned int* header_len; TYPE_2__** header; TYPE_2__* time_base; int stream; void* flags; TYPE_1__* frame_code; void* minor_version; TYPE_5__* avf; } ;
struct TYPE_21__ {int flags; int pts_delta; int stream_id; int size_mul; int size_lsb; int reserved_count; int header_idx; } ;
typedef int StreamContext ;
typedef TYPE_3__ NUTContext ;
typedef int AVRational ;
typedef TYPE_4__ AVIOContext ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (unsigned int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned int,int) ;
 int FUNC_4 (TYPE_2__**) ;
 int FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 (TYPE_5__*,int ,char*,...) ;
 TYPE_2__* FUNC_7 (int) ;
 TYPE_2__* FUNC_8 (unsigned int,int) ;
 int FUNC_9 (TYPE_5__*,int *) ;
 int FUNC_10 (TYPE_4__*,TYPE_2__*,int) ;
 int FUNC_11 (TYPE_4__*) ;
 scalar_t__ FUNC_12 (TYPE_4__*) ;
 void* FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (TYPE_3__*,TYPE_4__*,int,int ) ;
 int FUNC_15 (TYPE_4__*) ;
 scalar_t__ FUNC_16 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_17(NUTContext *VAR_11)
{
    AVFormatContext *VAR_12 = VAR_11->avf;
    AVIOContext *VAR_13 = VAR_12->pb;
    uint64_t VAR_14, VAR_15;
    unsigned int VAR_16;
    int VAR_17, VAR_18, VAR_19, VAR_20;
    int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;

    VAR_15 = FUNC_14(VAR_11, VAR_13, 1, VAR_7);
    VAR_15 += FUNC_11(VAR_13);

    VAR_11->version = FUNC_13(VAR_13);
    if (VAR_11->version < VAR_10 ||
        VAR_11->version > VAR_9) {
        FUNC_6(VAR_12, VAR_2, "Version %d not supported.\n",
               VAR_11->version);
        return FUNC_0(VAR_4);
    }
    if (VAR_11->version > 3)
        VAR_11->minor_version = FUNC_13(VAR_13);

    FUNC_1(VAR_16, VAR_14 > 0 && VAR_14 <= VAR_8);

    VAR_11->max_distance = FUNC_13(VAR_13);
    if (VAR_11->max_distance > 65536) {
        FUNC_6(VAR_12, VAR_1, "max_distance %d\n", VAR_11->max_distance);
        VAR_11->max_distance = 65536;
    }

    FUNC_1(VAR_11->time_base_count, VAR_14 > 0 && VAR_14 < VAR_6 / sizeof(AVRational));
    VAR_11->time_base = FUNC_8(VAR_11->time_base_count, sizeof(AVRational));
    if (!VAR_11->time_base)
        return FUNC_0(VAR_3);

    for (VAR_17 = 0; VAR_17 < VAR_11->time_base_count; VAR_17++) {
        FUNC_1(VAR_11->time_base[VAR_17].num, VAR_14 > 0 && VAR_14 < (1ULL << 31));
        FUNC_1(VAR_11->time_base[VAR_17].den, VAR_14 > 0 && VAR_14 < (1ULL << 31));
        if (FUNC_5(VAR_11->time_base[VAR_17].num, VAR_11->time_base[VAR_17].den) != 1) {
            FUNC_6(VAR_12, VAR_2, "invalid time base %d/%d\n",
                   VAR_11->time_base[VAR_17].num,
                   VAR_11->time_base[VAR_17].den);
            VAR_20 = VAR_0;
            goto fail;
        }
    }
    VAR_23 = 0;
    VAR_22 = 1;
    VAR_21 = 0;
    VAR_26 = 0;
    for (VAR_17 = 0; VAR_17 < 256;) {
        int VAR_27 = FUNC_13(VAR_13);
        int VAR_28 = FUNC_13(VAR_13);

        if (VAR_28 > 0)
            VAR_23 = FUNC_15(VAR_13);
        if (VAR_28 > 1)
            VAR_22 = FUNC_13(VAR_13);
        if (VAR_28 > 2)
            VAR_21 = FUNC_13(VAR_13);
        if (VAR_28 > 3)
            VAR_24 = FUNC_13(VAR_13);
        else
            VAR_24 = 0;
        if (VAR_28 > 4)
            VAR_25 = FUNC_13(VAR_13);
        else
            VAR_25 = 0;
        if (VAR_28 > 5)
            VAR_19 = FUNC_13(VAR_13);
        else
            VAR_19 = VAR_22 - VAR_24;
        if (VAR_28 > 6)
            FUNC_15(VAR_13);
        if (VAR_28 > 7)
            VAR_26 = FUNC_13(VAR_13);

        while (VAR_28-- > 8) {
            if (VAR_13->eof_reached) {
                FUNC_6(VAR_12, VAR_2, "reached EOF while decoding main header\n");
                VAR_20 = VAR_0;
                goto fail;
            }
            FUNC_13(VAR_13);
        }

        if (VAR_19 <= 0 || VAR_19 > 256 - (VAR_17 <= 'N') - VAR_17) {
            FUNC_6(VAR_12, VAR_2, "illegal count %d at %d\n", VAR_19, VAR_17);
            VAR_20 = VAR_0;
            goto fail;
        }
        if (VAR_21 >= VAR_16) {
            FUNC_6(VAR_12, VAR_2, "illegal stream number %d >= %d\n",
                   VAR_21, VAR_16);
            VAR_20 = VAR_0;
            goto fail;
        }

        for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++, VAR_17++) {
            if (VAR_17 == 'N') {
                VAR_11->frame_code[VAR_17].flags = VAR_5;
                VAR_18--;
                continue;
            }
            VAR_11->frame_code[VAR_17].flags = VAR_27;
            VAR_11->frame_code[VAR_17].pts_delta = VAR_23;
            VAR_11->frame_code[VAR_17].stream_id = VAR_21;
            VAR_11->frame_code[VAR_17].size_mul = VAR_22;
            VAR_11->frame_code[VAR_17].size_lsb = VAR_24 + VAR_18;
            VAR_11->frame_code[VAR_17].reserved_count = VAR_25;
            VAR_11->frame_code[VAR_17].header_idx = VAR_26;
        }
    }
    FUNC_2(VAR_11->frame_code['N'].flags == VAR_5);

    if (VAR_15 > FUNC_11(VAR_13) + 4) {
        int VAR_29 = 1024;
        FUNC_1(VAR_11->header_count, VAR_14 < 128U);
        VAR_11->header_count++;
        for (VAR_17 = 1; VAR_17 < VAR_11->header_count; VAR_17++) {
            uint8_t *VAR_30;
            FUNC_1(VAR_11->header_len[VAR_17], VAR_14 > 0 && VAR_14 < 256);
            if (VAR_29 < VAR_11->header_len[VAR_17]) {
                FUNC_6(VAR_12, VAR_2,
                       "invalid elision header %d : %d > %d\n",
                       VAR_17, VAR_11->header_len[VAR_17], VAR_29);
                VAR_20 = VAR_0;
                goto fail;
            }
            VAR_29 -= VAR_11->header_len[VAR_17];
            VAR_30 = FUNC_7(VAR_11->header_len[VAR_17]);
            if (!VAR_30) {
                VAR_20 = FUNC_0(VAR_3);
                goto fail;
            }
            FUNC_10(VAR_13, VAR_30, VAR_11->header_len[VAR_17]);
            VAR_11->header[VAR_17] = VAR_30;
        }
        FUNC_2(VAR_11->header_len[0] == 0);
    }


    if (VAR_11->version > 3 && VAR_15 > FUNC_11(VAR_13) + 4) {
        VAR_11->flags = FUNC_13(VAR_13);
    }

    if (FUNC_16(VAR_13, VAR_15) || FUNC_12(VAR_13)) {
        FUNC_6(VAR_12, VAR_2, "main header checksum mismatch\n");
        VAR_20 = VAR_0;
        goto fail;
    }

    VAR_11->stream = FUNC_3(VAR_16, sizeof(StreamContext));
    if (!VAR_11->stream) {
        VAR_20 = FUNC_0(VAR_3);
        goto fail;
    }
    for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++)
        FUNC_9(VAR_12, ((void*)0));

    return 0;
fail:
    FUNC_4(&VAR_11->time_base);
    for (VAR_17 = 1; VAR_17 < VAR_11->header_count; VAR_17++) {
        FUNC_4(&VAR_11->header[VAR_17]);
    }
    VAR_11->header_count = 0;
    return VAR_20;
}
