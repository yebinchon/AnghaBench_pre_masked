
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_8__ {int (* io_open ) (TYPE_2__*,int **,int ,int ,int *) ;int * pb; int url; TYPE_1__* priv_data; } ;
struct TYPE_7__ {int filepositions_count; int keyframe_index_size; int metadata_size_pos; int metadata_totalsize_pos; int keyframes_info_offset; scalar_t__ metadata_totalsize; } ;
typedef TYPE_1__ FLVContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ,char*,int ) ;
 int * FUNC_3 (int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (TYPE_2__*,int **) ;
 int FUNC_11 (TYPE_2__*,int **,int ,int ,int *) ;

__attribute__((used)) static int FUNC_12(AVFormatContext *VAR_5)
{
    int VAR_6 = 0;
    int VAR_7 = 0;
    int64_t VAR_8 = 0;
    FLVContext *VAR_9 = VAR_5->priv_data;
    int64_t VAR_10, VAR_11 = FUNC_6(VAR_5->pb);
    uint8_t *VAR_12, *VAR_13[2];
    int VAR_14 = 0;
    int VAR_15[2];
    AVIOContext *VAR_16;

    VAR_8 = VAR_9->filepositions_count * 9 * 2 + 10;
    VAR_8 += 2 + 13;
    VAR_8 += 2 + 5;
    VAR_8 += 3;

    VAR_9->keyframe_index_size = VAR_8;

    if (VAR_8 < 0)
        return VAR_8;

    VAR_12 = FUNC_3(VAR_8, 2);
    if (!VAR_12) {
        return FUNC_0(VAR_2);
    }
    VAR_13[0] = VAR_12;
    VAR_13[1] = VAR_12 + VAR_8;

    FUNC_5(VAR_5->pb, VAR_9->metadata_size_pos, VAR_4);
    FUNC_7(VAR_5->pb, VAR_9->metadata_totalsize + VAR_8);

    FUNC_5(VAR_5->pb, VAR_9->metadata_totalsize_pos, VAR_4);
    FUNC_8(VAR_5->pb, VAR_9->metadata_totalsize + 11 + VAR_8);
    FUNC_5(VAR_5->pb, VAR_11, VAR_4);




    FUNC_4(VAR_5->pb);
    VAR_6 = VAR_5->io_open(VAR_5, &VAR_16, VAR_5->url, VAR_0, ((void*)0));
    if (VAR_6 < 0) {
        FUNC_2(VAR_5, VAR_1, "Unable to re-open %s output file for "
               "the second pass (add_keyframe_index)\n", VAR_5->url);
        goto end;
    }



    VAR_11 = FUNC_6(VAR_5->pb);
    FUNC_5(VAR_5->pb, VAR_9->keyframes_info_offset + VAR_8, VAR_4);


    FUNC_5(VAR_16, VAR_9->keyframes_info_offset, VAR_4);
    VAR_10 = FUNC_6(VAR_16);







    do { VAR_15[VAR_14] = FUNC_0(VAR_16, VAR_13[VAR_14], VAR_8); VAR_14 ^= 1; } while (0);
    do {
        do { VAR_15[VAR_14] = FUNC_0(VAR_16, VAR_13[VAR_14], VAR_8); VAR_14 ^= 1; } while (0);
        VAR_7 = VAR_15[VAR_14];
        if (VAR_7 < 0)
            break;
        FUNC_9(VAR_5->pb, VAR_13[VAR_14], VAR_7);
        VAR_10 += VAR_7;
    } while (VAR_10 <= VAR_11);

    FUNC_10(VAR_5, &VAR_16);

end:
    FUNC_1(VAR_12);
    return VAR_6;
}
