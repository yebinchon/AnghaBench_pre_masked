
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVFrameSideDataType { ____Placeholder_AVFrameSideDataType } AVFrameSideDataType ;
typedef int AVFrameSideData ;
typedef int AVFrame ;
typedef int AVBufferRef ;


 int * FUNC_0 (int) ;
 int FUNC_1 (int **) ;
 int * FUNC_2 (int *,int,int *) ;

AVFrameSideData *FUNC_3(AVFrame *VAR_0,
                                        enum AVFrameSideDataType VAR_1,
                                        int VAR_2)
{
    AVFrameSideData *VAR_3;
    AVBufferRef *VAR_4 = FUNC_0(VAR_2);
    VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_4);
    if (!VAR_3)
        FUNC_1(&VAR_4);
    return VAR_3;
}
