
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVFormatContext ;
typedef int AVDictionary ;
typedef int AVDeviceInfoList ;


 int VAR_0 ;
 int FUNC_0 (int **,int *,int ) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *,int **,int ) ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_1, AVDictionary *VAR_2,
                                    AVDeviceInfoList **VAR_3)
{
    AVDictionary *VAR_4 = ((void*)0);
    int VAR_5;

    FUNC_0(&VAR_4, VAR_2, 0);
    if ((VAR_5 = FUNC_2(VAR_1, &VAR_4, VAR_0)) < 0)
        goto fail;
    VAR_5 = FUNC_3(VAR_1, VAR_3);
  fail:
    FUNC_1(&VAR_4);
    FUNC_4(VAR_1);
    return VAR_5;
}
