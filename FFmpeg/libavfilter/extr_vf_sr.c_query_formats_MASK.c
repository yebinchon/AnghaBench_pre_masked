
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef int AVFilterFormats ;
typedef int AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int ,char*) ;
 int * FUNC_2 (int const*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_9)
{
    const enum AVPixelFormat VAR_10[] = {VAR_5, VAR_6, VAR_7,
                                                VAR_3, VAR_4, VAR_1,
                                                VAR_2};
    AVFilterFormats *VAR_11;

    VAR_11 = FUNC_2(VAR_10);
    if (!VAR_11){
        FUNC_1(VAR_9, VAR_0, "could not create formats list\n");
        return FUNC_0(VAR_8);
    }

    return FUNC_3(VAR_9, VAR_11);
}
