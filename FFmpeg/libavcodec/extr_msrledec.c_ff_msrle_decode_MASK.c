
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetByteContext ;
typedef int AVFrame ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,int) ;
 int FUNC_1 (int *,int *,int,int *) ;
 int FUNC_2 (int *,int *,int *) ;

int FUNC_3(AVCodecContext *VAR_1, AVFrame *VAR_2,
                    int VAR_3, GetByteContext *VAR_4)
{
    switch(VAR_3){
    case 4:
        return FUNC_2(VAR_1, VAR_2, VAR_4);
    case 8:
    case 16:
    case 24:
    case 32:
        return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
    default:
        FUNC_0(VAR_1, VAR_0, "Unknown depth %d\n", VAR_3);
        return -1;
    }
}
