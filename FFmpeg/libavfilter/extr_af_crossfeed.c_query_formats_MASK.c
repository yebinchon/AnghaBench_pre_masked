
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVFilterFormats ;
typedef int AVFilterContext ;
typedef int AVFilterChannelLayouts ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **,int ) ;
 int FUNC_1 (int **,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_2)
{
    AVFilterFormats *VAR_3 = ((void*)0);
    AVFilterChannelLayouts *VAR_4 = ((void*)0);
    int VAR_5;

    if ((VAR_5 = FUNC_1 (&VAR_3, VAR_1 )) < 0 ||
        (VAR_5 = FUNC_4 (VAR_2 , VAR_3 )) < 0 ||
        (VAR_5 = FUNC_0 (&VAR_4 , VAR_0)) < 0 ||
        (VAR_5 = FUNC_3 (VAR_2 , VAR_4 )) < 0 ||
        (VAR_5 = FUNC_5 (VAR_2 , FUNC_2())) < 0)
        return VAR_5;

    return 0;
}
