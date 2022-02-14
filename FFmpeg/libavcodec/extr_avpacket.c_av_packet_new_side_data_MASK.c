
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum AVPacketSideDataType { ____Placeholder_AVPacketSideDataType } AVPacketSideDataType ;
typedef int AVPacket ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int **) ;
 int * FUNC_1 (unsigned int) ;
 int FUNC_2 (int *,int,int *,int) ;

uint8_t *FUNC_3(AVPacket *VAR_2, enum AVPacketSideDataType VAR_3,
                                 int VAR_4)
{
    int VAR_5;
    uint8_t *VAR_6;

    if ((unsigned)VAR_4 > VAR_1 - VAR_0)
        return ((void*)0);
    VAR_6 = FUNC_1(VAR_4 + VAR_0);
    if (!VAR_6)
        return ((void*)0);

    VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_6, VAR_4);
    if (VAR_5 < 0) {
        FUNC_0(&VAR_6);
        return ((void*)0);
    }

    return VAR_6;
}
