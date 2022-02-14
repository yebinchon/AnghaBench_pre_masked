
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;


 int FUNC_0 (int,int*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(enum AVPixelFormat VAR_3)
{
    int VAR_4 = 0, VAR_5 = 0;

    FUNC_0(VAR_3, &VAR_4, &VAR_5);

    if (VAR_4 == 1 && VAR_5 == 1)
        return VAR_0;
    else if (VAR_4 == 1 && VAR_5 == 0)
        return VAR_1;
    else if (VAR_4 == 0 && VAR_5 == 0)
        return VAR_2;

    return -1;
}
