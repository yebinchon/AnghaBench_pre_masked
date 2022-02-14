
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int URLContext ;
typedef int AVIOInterruptCB ;
typedef int AVIOContext ;
typedef int AVDictionary ;


 int FUNC_0 (int **,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,char const*,int,int const*,int **,char const*,char const*,int *) ;

int FUNC_3(AVIOContext **VAR_0, const char *VAR_1, int VAR_2,
                         const AVIOInterruptCB *VAR_3, AVDictionary **VAR_4,
                         const char *VAR_5, const char *VAR_6
                        )
{
    URLContext *VAR_7;
    int VAR_8;

    VAR_8 = FUNC_2(&VAR_7, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, ((void*)0));
    if (VAR_8 < 0)
        return VAR_8;
    VAR_8 = FUNC_0(VAR_0, VAR_7);
    if (VAR_8 < 0) {
        FUNC_1(VAR_7);
        return VAR_8;
    }
    return 0;
}
