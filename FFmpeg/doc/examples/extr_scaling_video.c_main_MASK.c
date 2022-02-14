
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct SwsContext {int dummy; } ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int **) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int **,int*,int,int,int,int) ;
 scalar_t__ FUNC_4 (int*,int*,char const*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int*,int,int,int) ;
 int * FUNC_8 (char const*,char*) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (int *,int,int,int *) ;
 int VAR_4 ;
 int FUNC_11 (struct SwsContext*) ;
 struct SwsContext* FUNC_12 (int,int,int,int,int,int,int ,int *,int *,int *) ;
 int FUNC_13 (struct SwsContext*,int const* const*,int*,int ,int,int **,int*) ;

int FUNC_14(int VAR_5, char **VAR_6)
{
    uint8_t *VAR_7[4], *VAR_8[4];
    int VAR_9[4], VAR_10[4];
    int VAR_11 = 320, VAR_12 = 240, VAR_13, VAR_14;
    enum AVPixelFormat VAR_15 = VAR_1, VAR_16 = VAR_0;
    const char *VAR_17 = ((void*)0);
    const char *VAR_18 = ((void*)0);
    FILE *VAR_19;
    int VAR_20;
    struct SwsContext *VAR_21;
    int VAR_22, VAR_23;

    if (VAR_5 != 3) {
        FUNC_9(VAR_4, "Usage: %s output_file output_size\n"
                "API example program to show how to scale an image with libswscale.\n"
                "This program generates a series of pictures, rescales them to the given "
                "output_size and saves them to an output file named output_file\n."
                "\n", VAR_6[0]);
        FUNC_5(1);
    }
    VAR_18 = VAR_6[1];
    VAR_17 = VAR_6[2];

    if (FUNC_4(&VAR_13, &VAR_14, VAR_17) < 0) {
        FUNC_9(VAR_4,
                "Invalid size '%s', must be in the form WxH or a valid size abbreviation\n",
                VAR_17);
        FUNC_5(1);
    }

    VAR_19 = FUNC_8(VAR_18, "wb");
    if (!VAR_19) {
        FUNC_9(VAR_4, "Could not open destination file %s\n", VAR_18);
        FUNC_5(1);
    }


    VAR_21 = FUNC_12(VAR_11, VAR_12, VAR_15,
                             VAR_13, VAR_14, VAR_16,
                             VAR_3, ((void*)0), ((void*)0), ((void*)0));
    if (!VAR_21) {
        FUNC_9(VAR_4,
                "Impossible to create scale context for the conversion "
                "fmt:%s s:%dx%d -> fmt:%s s:%dx%d\n",
                FUNC_2(VAR_15), VAR_11, VAR_12,
                FUNC_2(VAR_16), VAR_13, VAR_14);
        VAR_23 = FUNC_0(VAR_2);
        goto end;
    }


    if ((VAR_23 = FUNC_3(VAR_7, VAR_9,
                              VAR_11, VAR_12, VAR_15, 16)) < 0) {
        FUNC_9(VAR_4, "Could not allocate source image\n");
        goto end;
    }


    if ((VAR_23 = FUNC_3(VAR_8, VAR_10,
                              VAR_13, VAR_14, VAR_16, 1)) < 0) {
        FUNC_9(VAR_4, "Could not allocate destination image\n");
        goto end;
    }
    VAR_20 = VAR_23;

    for (VAR_22 = 0; VAR_22 < 100; VAR_22++) {

        FUNC_7(VAR_7, VAR_9, VAR_11, VAR_12, VAR_22);


        FUNC_13(VAR_21, (const uint8_t * const*)VAR_7,
                  VAR_9, 0, VAR_12, VAR_8, VAR_10);


        FUNC_10(VAR_8[0], 1, VAR_20, VAR_19);
    }

    FUNC_9(VAR_4, "Scaling succeeded. Play the output file with the command:\n"
           "ffplay -f rawvideo -pix_fmt %s -video_size %dx%d %s\n",
           FUNC_2(VAR_16), VAR_13, VAR_14, VAR_18);

end:
    FUNC_6(VAR_19);
    FUNC_1(&VAR_7[0]);
    FUNC_1(&VAR_8[0]);
    FUNC_11(VAR_21);
    return VAR_23 < 0;
}
