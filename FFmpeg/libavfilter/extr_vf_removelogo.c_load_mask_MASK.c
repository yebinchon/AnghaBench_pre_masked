
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *,int,int *,int,int,int) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int **,int*,int*,int*,int*,char const*,void*) ;
 int FUNC_5 (int **,int*,int,int,int ,int **,int*,int,int,int,void*) ;

__attribute__((used)) static int FUNC_6(uint8_t **VAR_2, int *VAR_3, int *VAR_4,
                     const char *VAR_5, void *VAR_6)
{
    int VAR_7;
    enum AVPixelFormat VAR_8;
    uint8_t *VAR_9[4], *VAR_10[4];
    int VAR_11[4], VAR_12[4];


    if ((VAR_7 = FUNC_4(VAR_9, VAR_11, VAR_3, VAR_4, &VAR_8, VAR_5, VAR_6)) < 0)
        return VAR_7;


    if ((VAR_7 = FUNC_5(VAR_10, VAR_12, *VAR_3, *VAR_4, VAR_0,
                              VAR_9, VAR_11, *VAR_3, *VAR_4, VAR_8,
                              VAR_6)) < 0)
        goto end;


    *VAR_2 = FUNC_3(*VAR_3 * *VAR_4);
    if (!*VAR_2)
        VAR_7 = FUNC_0(VAR_1);
    FUNC_2(*VAR_2, *VAR_3, VAR_10[0], VAR_12[0], *VAR_3, *VAR_4);

end:
    FUNC_1(&VAR_9[0]);
    FUNC_1(&VAR_10[0]);
    return VAR_7;
}
