
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum AVPacketSideDataType { ____Placeholder_AVPacketSideDataType } AVPacketSideDataType ;
typedef int AVStream ;


 int FUNC_0 (int **) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,int,int *,int) ;

uint8_t *FUNC_3(AVStream *VAR_0, enum AVPacketSideDataType VAR_1,
                                 int VAR_2)
{
    int VAR_3;
    uint8_t *VAR_4 = FUNC_1(VAR_2);

    if (!VAR_4)
        return ((void*)0);

    VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_4, VAR_2);
    if (VAR_3 < 0) {
        FUNC_0(&VAR_4);
        return ((void*)0);
    }

    return VAR_4;
}
