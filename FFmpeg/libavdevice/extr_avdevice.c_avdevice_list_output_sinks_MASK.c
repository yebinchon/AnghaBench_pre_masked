
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVOutputFormat ;
typedef int AVFormatContext ;
typedef int AVDictionary ;
typedef int AVDeviceInfoList ;


 int FUNC_0 (int **,int *,char const*,int *) ;
 int FUNC_1 (int *,int *,int **) ;

int FUNC_2(AVOutputFormat *VAR_0, const char *VAR_1,
                               AVDictionary *VAR_2, AVDeviceInfoList **VAR_3)
{
    AVFormatContext *VAR_4 = ((void*)0);
    int VAR_5;

    if ((VAR_5 = FUNC_0(&VAR_4, VAR_0, VAR_1, ((void*)0))) < 0)
        return VAR_5;
    return FUNC_1(VAR_4, VAR_2, VAR_3);
}
