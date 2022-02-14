
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int AVCodecContext ;
typedef int AVCodec ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int *,int ,char*) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int **) ;
 scalar_t__ FUNC_6 (int *,int **,int) ;
 scalar_t__ FUNC_7 (int *,int **,int,int) ;
 scalar_t__ FUNC_8 (int *,int *,int *,int *) ;

int FUNC_9(void)
{
    AVCodec *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    AVCodecContext *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
    uint64_t VAR_10[] = {VAR_1, VAR_0, VAR_3, VAR_2};
    int VAR_11[] = {8000, 44100, 48000, 192000};
    int VAR_12, VAR_13;

    VAR_6 = FUNC_3(VAR_4);
    if (!VAR_6) {
        FUNC_1(((void*)0), VAR_5, "Can't find encoder\n");
        return 1;
    }

    VAR_7 = FUNC_2(VAR_4);
    if (!VAR_7) {
        FUNC_1(((void*)0), VAR_5, "Can't find decoder\n");
        return 1;
    }

    for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_10); VAR_12++) {
        for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_11); VAR_13++) {
            if (FUNC_7(VAR_6, &VAR_8, VAR_10[VAR_12], VAR_11[VAR_13]) != 0)
                return 1;
            if (FUNC_6(VAR_7, &VAR_9, VAR_10[VAR_12]) != 0)
                return 1;
            if (FUNC_8(VAR_6, VAR_7, VAR_8, VAR_9) != 0)
                return 1;
            FUNC_5(&VAR_8);
            FUNC_4(&VAR_9);
        }
    }

    return 0;
}
