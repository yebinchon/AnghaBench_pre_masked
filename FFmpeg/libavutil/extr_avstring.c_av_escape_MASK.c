
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef enum AVEscapeMode { ____Placeholder_AVEscapeMode } AVEscapeMode ;
struct TYPE_6__ {int len; } ;
typedef TYPE_1__ AVBPrint ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,char const*,char const*,int,int) ;
 int FUNC_2 (TYPE_1__*,char**) ;
 int FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(char **VAR_2, const char *VAR_3, const char *VAR_4,
              enum AVEscapeMode VAR_5, int VAR_6)
{
    AVBPrint VAR_7;

    FUNC_3(&VAR_7, 1, VAR_0);
    FUNC_1(&VAR_7, VAR_3, VAR_4, VAR_5, VAR_6);

    if (!FUNC_4(&VAR_7)) {
        FUNC_2(&VAR_7, ((void*)0));
        return FUNC_0(VAR_1);
    } else {
        FUNC_2(&VAR_7, VAR_2);
        return VAR_7.len;
    }
}
