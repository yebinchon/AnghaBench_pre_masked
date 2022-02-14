
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct dshow_ctx {int ** device_filter; } ;
typedef enum dshowSourceFilterType { ____Placeholder_dshowSourceFilterType } dshowSourceFilterType ;
typedef enum dshowDeviceType { ____Placeholder_dshowDeviceType } dshowDeviceType ;
struct TYPE_5__ {struct dshow_ctx* priv_data; } ;
typedef int ICreateDevEnum ;
typedef int IBaseFilter ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (char**) ;
 int FUNC_1 (TYPE_1__*,int *,int,int,int **,char**) ;
 int FUNC_2 (TYPE_1__*,int,int,int *,int *) ;

__attribute__((used)) static int
FUNC_3(AVFormatContext *VAR_0, ICreateDevEnum *VAR_1,
                          enum dshowDeviceType VAR_2, enum dshowSourceFilterType VAR_3)
{
    struct dshow_ctx *VAR_4 = VAR_0->priv_data;
    IBaseFilter *VAR_5 = ((void*)0);
    char *VAR_6 = ((void*)0);
    int VAR_7;

    if ((VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_5, &VAR_6)) < 0)
        return VAR_7;
    VAR_4->device_filter[VAR_2] = VAR_5;
    if ((VAR_7 = FUNC_2(VAR_0, VAR_2, VAR_3, VAR_5, ((void*)0))) < 0)
        return VAR_7;
    FUNC_0(&VAR_6);
    return 0;
}
