
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char**) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (int *,int,char*,size_t) ;
 int FUNC_4 (int *,int,char*,size_t) ;

__attribute__((used)) static inline int FUNC_5(AVIOContext *VAR_3, int VAR_4, char** VAR_5, int VAR_6)
{
    int VAR_7;
    size_t VAR_8;

    if (VAR_4 < 0 || VAR_4 > VAR_2/2)
        return FUNC_0(VAR_0);

    VAR_8 = VAR_4 + VAR_4 / 2 + 1;
    *VAR_5 = FUNC_2(VAR_8);
    if (!*VAR_5)
        return FUNC_0(VAR_1);

    if (VAR_6)
        VAR_7 = FUNC_3(VAR_3, VAR_4, *VAR_5, VAR_8);
    else
        VAR_7 = FUNC_4(VAR_3, VAR_4, *VAR_5, VAR_8);

    if (VAR_7 < 0) {
        FUNC_1(VAR_5);
        return VAR_7;
    }

    return VAR_7;
}
