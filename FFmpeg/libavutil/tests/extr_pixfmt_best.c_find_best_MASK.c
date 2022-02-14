
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int ,int,int ,int *) ;
 int * VAR_1 ;

__attribute__((used)) static enum AVPixelFormat FUNC_2(enum AVPixelFormat VAR_2)
{
    enum AVPixelFormat VAR_3 = VAR_0;
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++)
        VAR_3 = FUNC_1(VAR_3, VAR_1[VAR_4],
                                         VAR_2, 0, ((void*)0));
    return VAR_3;
}
