
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVIOContext ;


 size_t VAR_0 ;
 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *,char const*) ;
 size_t FUNC_4 (char const*) ;

void FUNC_5(AVIOContext *VAR_1, const char *VAR_2, const char *VAR_3)
{
    size_t VAR_4 = FUNC_4(VAR_3);
    if (VAR_4 > 0 && VAR_4 < VAR_0) {
        VAR_4++;
        FUNC_3(VAR_1, VAR_2);
        FUNC_2(VAR_1, VAR_4);
        FUNC_0(VAR_1, VAR_3);
        if (VAR_4 & 1)
            FUNC_1(VAR_1, 0);
    }
}
