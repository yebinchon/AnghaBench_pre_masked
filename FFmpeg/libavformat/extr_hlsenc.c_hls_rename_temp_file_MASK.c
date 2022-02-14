
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* url; } ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char**) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,TYPE_1__*) ;
 size_t FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_1, AVFormatContext *VAR_2)
{
    size_t VAR_3 = FUNC_4(VAR_2->url);
    char *VAR_4 = FUNC_2(VAR_2->url);
    int VAR_5;

    if (!VAR_4)
        return FUNC_0(VAR_0);
    VAR_4[VAR_3-4] = '\0';
    VAR_5 = FUNC_3(VAR_2->url, VAR_4, VAR_1);
    VAR_2->url[VAR_3-4] = '\0';
    FUNC_1(&VAR_4);
    return VAR_5;
}
