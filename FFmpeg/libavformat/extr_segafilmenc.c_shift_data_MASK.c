
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_6__ {int (* io_open ) (TYPE_1__*,int **,int ,int ,int *) ;int * pb; int url; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,char*,int ) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (TYPE_1__*,int **) ;
 int FUNC_9 (TYPE_1__*,int **,int ,int ,int *) ;

__attribute__((used)) static int FUNC_10(AVFormatContext *VAR_5, int64_t VAR_6)
{
    int VAR_7 = 0;
    int64_t VAR_8, VAR_9 = FUNC_6(VAR_5->pb);
    uint8_t *VAR_10, *VAR_11[2];
    int VAR_12 = 0;
    int VAR_13[2];
    AVIOContext *VAR_14;

    VAR_10 = FUNC_3(VAR_6 * 2);
    if (!VAR_10)
        return FUNC_0(VAR_2);
    VAR_11[0] = VAR_10;
    VAR_11[1] = VAR_10 + VAR_6;



    FUNC_4(VAR_5->pb);
    VAR_7 = VAR_5->io_open(VAR_5, &VAR_14, VAR_5->url, VAR_0, ((void*)0));
    if (VAR_7 < 0) {
        FUNC_2(VAR_5, VAR_1, "Unable to re-open %s output file to "
               "write the header\n", VAR_5->url);
        FUNC_1(VAR_10);
        return VAR_7;
    }



    VAR_9 = FUNC_6(VAR_5->pb);
    FUNC_5(VAR_5->pb, VAR_6, VAR_4);


    FUNC_5(VAR_14, 0, VAR_4);
    VAR_8 = FUNC_6(VAR_14);







    do { VAR_13[VAR_12] = FUNC_0(VAR_14, VAR_11[VAR_12], VAR_6); VAR_12 ^= 1; } while (0);
    do {
        int VAR_15;
        do { VAR_13[VAR_12] = FUNC_0(VAR_14, VAR_11[VAR_12], VAR_6); VAR_12 ^= 1; } while (0);
        VAR_15 = VAR_13[VAR_12];
        if (VAR_15 <= 0)
            break;
        FUNC_7(VAR_5->pb, VAR_11[VAR_12], VAR_15);
        VAR_8 += VAR_15;
    } while (VAR_8 < VAR_9);
    FUNC_8(VAR_5, &VAR_14);

    FUNC_1(VAR_10);
    return 0;
}
