
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xmlChar ;
struct TYPE_2__ {char* value; } ;
typedef TYPE_1__ parse_data_t ;


 char* FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_3(
    void *VAR_0,
    const xmlChar *VAR_1,
    int VAR_2)
{
    char *VAR_3 = (char*)VAR_1;
    parse_data_t *VAR_4 = (parse_data_t*)VAR_0;

    int VAR_5 = 0;
    if (VAR_4->value != ((void*)0))
    {
        VAR_5 = FUNC_1(VAR_4->value);
    }
    char *VAR_6 = FUNC_0(VAR_4->value, VAR_5 + VAR_2 + 1);
    if (VAR_6 == ((void*)0))
        return;
    VAR_4->value = VAR_6;
    FUNC_2(VAR_4->value + VAR_5, VAR_3, VAR_2);
    VAR_4->value[VAR_5 + VAR_2] = 0;
}
