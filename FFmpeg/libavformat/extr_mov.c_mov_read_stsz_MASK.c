
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


struct TYPE_19__ {scalar_t__ eof_reached; } ;
struct TYPE_18__ {TYPE_1__* priv_data; } ;
struct TYPE_17__ {scalar_t__ type; } ;
struct TYPE_16__ {TYPE_13__* fc; } ;
struct TYPE_15__ {unsigned int sample_size; unsigned int stsz_sample_size; unsigned int sample_count; unsigned char* sample_sizes; int data_size; } ;
struct TYPE_14__ {int nb_streams; TYPE_4__** streams; } ;
typedef TYPE_1__ MOVStreamContext ;
typedef TYPE_2__ MOVContext ;
typedef TYPE_3__ MOVAtom ;
typedef int GetBitContext ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (char,char,char,char) ;
 int VAR_7 ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (unsigned char**) ;
 int FUNC_4 (TYPE_13__*,int ,char*,...) ;
 unsigned char* FUNC_5 (scalar_t__) ;
 unsigned char* FUNC_6 (unsigned int,int) ;
 unsigned int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*) ;
 unsigned int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*,unsigned char*,unsigned int) ;
 unsigned char FUNC_11 (int *,unsigned int) ;
 int FUNC_12 (int *,unsigned char*,int) ;

__attribute__((used)) static int FUNC_13(MOVContext *VAR_8, AVIOContext *VAR_9, MOVAtom VAR_10)
{
    AVStream *VAR_11;
    MOVStreamContext *VAR_12;
    unsigned int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    GetBitContext VAR_18;
    unsigned char* VAR_19;
    int VAR_20;

    if (VAR_8->fc->nb_streams < 1)
        return 0;
    VAR_11 = VAR_8->fc->streams[VAR_8->fc->nb_streams-1];
    VAR_12 = VAR_11->priv_data;

    FUNC_7(VAR_9);
    FUNC_8(VAR_9);

    if (VAR_10.type == FUNC_1('s','t','s','z')) {
        VAR_15 = FUNC_9(VAR_9);
        if (!VAR_12->sample_size)
            VAR_12->sample_size = VAR_15;
        VAR_12->stsz_sample_size = VAR_15;
        VAR_16 = 32;
    } else {
        VAR_15 = 0;
        FUNC_8(VAR_9);
        VAR_16 = FUNC_7(VAR_9);
    }
    VAR_14 = FUNC_9(VAR_9);

    FUNC_4(VAR_8->fc, VAR_4, "sample_size = %u sample_count = %u\n", VAR_12->sample_size, VAR_14);

    VAR_12->sample_count = VAR_14;
    if (VAR_15)
        return 0;

    if (VAR_16 != 4 && VAR_16 != 8 && VAR_16 != 16 && VAR_16 != 32) {
        FUNC_4(VAR_8->fc, VAR_3, "Invalid sample field size %u\n", VAR_16);
        return VAR_1;
    }

    if (!VAR_14)
        return 0;
    if (VAR_14 >= (VAR_7 - 4) / VAR_16)
        return VAR_1;
    if (VAR_12->sample_sizes)
        FUNC_4(VAR_8->fc, VAR_5, "Duplicated STSZ atom\n");
    FUNC_2(VAR_12->sample_sizes);
    VAR_12->sample_count = 0;
    VAR_12->sample_sizes = FUNC_6(VAR_14, sizeof(*VAR_12->sample_sizes));
    if (!VAR_12->sample_sizes)
        return FUNC_0(VAR_6);

    VAR_17 = (VAR_14*VAR_16+4)>>3;

    VAR_19 = FUNC_5(VAR_17+VAR_2);
    if (!VAR_19) {
        FUNC_3(&VAR_12->sample_sizes);
        return FUNC_0(VAR_6);
    }

    VAR_20 = FUNC_10(VAR_9, VAR_19, VAR_17);
    if (VAR_20 < 0) {
        FUNC_3(&VAR_12->sample_sizes);
        FUNC_2(VAR_19);
        FUNC_4(VAR_8->fc, VAR_5, "STSZ atom truncated\n");
        return 0;
    }

    FUNC_12(&VAR_18, VAR_19, 8*VAR_17);

    for (VAR_13 = 0; VAR_13 < VAR_14 && !VAR_9->eof_reached; VAR_13++) {
        VAR_12->sample_sizes[VAR_13] = FUNC_11(&VAR_18, VAR_16);
        VAR_12->data_size += VAR_12->sample_sizes[VAR_13];
    }

    VAR_12->sample_count = VAR_13;

    FUNC_2(VAR_19);

    if (VAR_9->eof_reached) {
        FUNC_4(VAR_8->fc, VAR_5, "reached eof, corrupted STSZ atom\n");
        return VAR_0;
    }

    return 0;
}
