
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int redirected_location ;
struct TYPE_3__ {char* location; } ;
typedef TYPE_1__ HTTPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char*,char const*) ;

__attribute__((used)) static int FUNC_4(HTTPContext *VAR_2, const char *VAR_3)
{
    char VAR_4[VAR_1], *VAR_5;
    FUNC_3(VAR_4, sizeof(VAR_4),
                         VAR_2->location, VAR_3);
    VAR_5 = FUNC_2(VAR_4);
    if (!VAR_5)
        return FUNC_0(VAR_0);
    FUNC_1(VAR_2->location);
    VAR_2->location = VAR_5;
    return 0;
}
