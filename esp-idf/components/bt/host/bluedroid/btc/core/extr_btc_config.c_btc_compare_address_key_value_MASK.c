
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value_str ;
typedef int uint8_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,char const*,char*) ;
 int FUNC_3 (int ,char const*) ;

bool FUNC_4(const char *VAR_1, const char *VAR_2, void *VAR_3, int VAR_4)
{
    FUNC_0(VAR_3 != ((void*)0));
    bool VAR_5 = 0;
    char VAR_6[100] = {0};
    if(VAR_4 > sizeof(VAR_6)/2) {
        return 0;
    }
    FUNC_1((uint8_t *)VAR_3, VAR_6, VAR_4);
    if ((VAR_5 = FUNC_2(VAR_0, VAR_2, VAR_6)) == 1) {
        FUNC_3(VAR_0, VAR_1);
    }
    return VAR_5;
}
