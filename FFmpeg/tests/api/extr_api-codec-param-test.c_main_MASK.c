
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,char*) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int **,char*,int) ;

int FUNC_4(int VAR_1, char* VAR_2[])
{
    int VAR_3 = 0;
    AVFormatContext *VAR_4 = ((void*)0);
    AVFormatContext *VAR_5 = ((void*)0);

    if (VAR_1 < 2) {
        FUNC_0(((void*)0), VAR_0, "Usage: %s <input>\n", VAR_2[0]);
        return -1;
    }

    if ((VAR_3 = FUNC_3(&VAR_5, VAR_2[1], 0)) < 0) {
        FUNC_0(((void*)0), VAR_0, "Failed to probe '%s' without frame decoding\n", VAR_2[1]);
        goto end;
    }

    if ((VAR_3 = FUNC_3(&VAR_4, VAR_2[1], 1)) < 0) {
        FUNC_0(((void*)0), VAR_0, "Failed to probe '%s' with frame decoding\n", VAR_2[1]);
        goto end;
    }

    VAR_3 = FUNC_2(VAR_4, VAR_5);

end:
    FUNC_1(&VAR_4);
    FUNC_1(&VAR_5);

    return VAR_3;
}
