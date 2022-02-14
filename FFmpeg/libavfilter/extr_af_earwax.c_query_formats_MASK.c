
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
 int FUNC_2 (int const*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_2)
{
    static const int VAR_3[] = { 44100, -1 };
    int VAR_4;

    AVFilterFormats *VAR_5 = ((void*)0);
    AVFilterChannelLayouts *VAR_6 = ((void*)0);

    if ((VAR_4 = FUNC_1 (&VAR_5, VAR_1 )) < 0 ||
        (VAR_4 = FUNC_4 (VAR_2 , VAR_5 )) < 0 ||
        (VAR_4 = FUNC_0 (&VAR_6 , VAR_0 )) < 0 ||
        (VAR_4 = FUNC_3 (VAR_2 , VAR_6 )) < 0 ||
        (VAR_4 = FUNC_5 (VAR_2 , FUNC_2(VAR_3) )) < 0)
        return VAR_4;

    return 0;
}
