
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct AVMD5 {int dummy; } ;
typedef int errstr ;
typedef int AVFrame ;
typedef int AVFilterGraph ;
typedef int AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 float VAR_2 ;
 float VAR_3 ;
 float FUNC_1 (char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct AVMD5**) ;
 struct AVMD5* FUNC_8 () ;
 int FUNC_9 (int,char*,int) ;
 int FUNC_10 (int **) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int **,int **,int **) ;
 int FUNC_14 (struct AVMD5*,int *) ;
 int VAR_4 ;

int FUNC_15(int VAR_5, char *VAR_6[])
{
    struct AVMD5 *VAR_7;
    AVFilterGraph *VAR_8;
    AVFilterContext *VAR_9, *VAR_10;
    AVFrame *VAR_11;
    uint8_t VAR_12[1024];
    float VAR_13;
    int VAR_14, VAR_15, VAR_16;

    if (VAR_5 < 2) {
        FUNC_11(VAR_4, "Usage: %s <duration>\n", VAR_6[0]);
        return 1;
    }

    VAR_13 = FUNC_1(VAR_6[1]);
    VAR_15 = VAR_13 * VAR_3 / VAR_2;
    if (VAR_15 <= 0) {
        FUNC_11(VAR_4, "Invalid duration: %s\n", VAR_6[1]);
        return 1;
    }


    VAR_11 = FUNC_4();
    if (!VAR_11) {
        FUNC_11(VAR_4, "Error allocating the frame\n");
        return 1;
    }

    VAR_7 = FUNC_8();
    if (!VAR_7) {
        FUNC_11(VAR_4, "Error allocating the MD5 context\n");
        return 1;
    }


    VAR_14 = FUNC_13(&VAR_8, &VAR_9, &VAR_10);
    if (VAR_14 < 0) {
        FUNC_11(VAR_4, "Unable to init filter graph:");
        goto fail;
    }


    for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {

        VAR_14 = FUNC_12(VAR_11, VAR_16);
        if (VAR_14 < 0) {
            FUNC_11(VAR_4, "Error generating input frame:");
            goto fail;
        }


        VAR_14 = FUNC_3(VAR_9, VAR_11);
        if (VAR_14 < 0) {
            FUNC_6(VAR_11);
            FUNC_11(VAR_4, "Error submitting the frame to the filtergraph:");
            goto fail;
        }


        while ((VAR_14 = FUNC_2(VAR_10, VAR_11)) >= 0) {

            VAR_14 = FUNC_14(VAR_7, VAR_11);
            if (VAR_14 < 0) {
                FUNC_11(VAR_4, "Error processing the filtered frame:");
                goto fail;
            }
            FUNC_6(VAR_11);
        }

        if (VAR_14 == FUNC_0(VAR_1)) {

            continue;
        } else if (VAR_14 == VAR_0) {

            break;
        } else if (VAR_14 < 0) {

            FUNC_11(VAR_4, "Error filtering the data:");
            goto fail;
        }
    }

    FUNC_10(&VAR_8);
    FUNC_5(&VAR_11);
    FUNC_7(&VAR_7);

    return 0;

fail:
    FUNC_9(VAR_14, VAR_12, sizeof(VAR_12));
    FUNC_11(VAR_4, "%s\n", VAR_12);
    return 1;
}
