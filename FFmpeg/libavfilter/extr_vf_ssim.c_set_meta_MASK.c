
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int key2 ;
typedef int AVDictionary ;


 int FUNC_0 (int **,char const*,char*,int ) ;
 int FUNC_1 (char*,int,char*,...) ;

__attribute__((used)) static void FUNC_2(AVDictionary **VAR_0, const char *VAR_1, char VAR_2, float VAR_3)
{
    char VAR_4[128];
    FUNC_1(VAR_4, sizeof(VAR_4), "%0.2f", VAR_3);
    if (VAR_2) {
        char VAR_5[128];
        FUNC_1(VAR_5, sizeof(VAR_5), "%s%c", VAR_1, VAR_2);
        FUNC_0(VAR_0, VAR_5, VAR_4, 0);
    } else {
        FUNC_0(VAR_0, VAR_1, VAR_4, 0);
    }
}
