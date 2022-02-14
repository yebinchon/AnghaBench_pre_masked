
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ int64_t ;
struct TYPE_10__ {int (* io_open ) (TYPE_2__*,int **,int ,int ,int *) ;int * pb; int url; TYPE_1__* priv_data; } ;
struct TYPE_9__ {int flags; scalar_t__ reserved_header_pos; } ;
typedef TYPE_1__ MOVMuxContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ,char*,int ) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int **) ;
 int FUNC_11 (TYPE_2__*,int **,int ,int ,int *) ;

__attribute__((used)) static int FUNC_12(AVFormatContext *VAR_6)
{
    int VAR_7 = 0, VAR_8;
    MOVMuxContext *VAR_9 = VAR_6->priv_data;
    int64_t VAR_10, VAR_11 = FUNC_6(VAR_6->pb);
    uint8_t *VAR_12, *VAR_13[2];
    int VAR_14 = 0;
    int VAR_15[2];
    AVIOContext *VAR_16;

    if (VAR_9->flags & VAR_3)
        VAR_8 = FUNC_9(VAR_6);
    else
        VAR_8 = FUNC_8(VAR_6);
    if (VAR_8 < 0)
        return VAR_8;

    VAR_12 = FUNC_3(VAR_8 * 2);
    if (!VAR_12)
        return FUNC_0(VAR_2);
    VAR_13[0] = VAR_12;
    VAR_13[1] = VAR_12 + VAR_8;




    FUNC_4(VAR_6->pb);
    VAR_7 = VAR_6->io_open(VAR_6, &VAR_16, VAR_6->url, VAR_0, ((void*)0));
    if (VAR_7 < 0) {
        FUNC_2(VAR_6, VAR_1, "Unable to re-open %s output file for "
               "the second pass (faststart)\n", VAR_6->url);
        goto end;
    }



    VAR_11 = FUNC_6(VAR_6->pb);
    FUNC_5(VAR_6->pb, VAR_9->reserved_header_pos + VAR_8, VAR_5);


    FUNC_5(VAR_16, VAR_9->reserved_header_pos, VAR_5);
    VAR_10 = FUNC_6(VAR_16);







    do { VAR_15[VAR_14] = FUNC_0(VAR_16, VAR_13[VAR_14], VAR_8); VAR_14 ^= 1; } while (0);
    do {
        int VAR_17;
        do { VAR_15[VAR_14] = FUNC_0(VAR_16, VAR_13[VAR_14], VAR_8); VAR_14 ^= 1; } while (0);
        VAR_17 = VAR_15[VAR_14];
        if (VAR_17 <= 0)
            break;
        FUNC_7(VAR_6->pb, VAR_13[VAR_14], VAR_17);
        VAR_10 += VAR_17;
    } while (VAR_10 < VAR_11);
    FUNC_10(VAR_6, &VAR_16);

end:
    FUNC_1(VAR_12);
    return VAR_7;
}
