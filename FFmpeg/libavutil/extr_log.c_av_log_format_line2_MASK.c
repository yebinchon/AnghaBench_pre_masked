
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_4__ {char* str; } ;
typedef TYPE_1__ AVBPrint ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (void*,int,char const*,int ,TYPE_1__*,int*,int *) ;
 int FUNC_2 (char*,int,char*,char*,char*,char*,char*) ;

int FUNC_3(void *VAR_0, int VAR_1, const char *VAR_2, va_list VAR_3,
                        char *VAR_4, int VAR_5, int *VAR_6)
{
    AVBPrint VAR_7[4];
    int VAR_8;

    FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_7, VAR_6, ((void*)0));
    VAR_8 = FUNC_2(VAR_4, VAR_5, "%s%s%s%s", VAR_7[0].str, VAR_7[1].str, VAR_7[2].str, VAR_7[3].str);
    FUNC_0(VAR_7+3, ((void*)0));
    return VAR_8;
}
