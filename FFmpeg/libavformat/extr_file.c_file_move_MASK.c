
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* filename; } ;
typedef TYPE_1__ URLContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,char*,char const**) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

__attribute__((used)) static int FUNC_3(URLContext *VAR_1, URLContext *VAR_2)
{
    const char *VAR_3 = VAR_1->filename;
    const char *VAR_4 = VAR_2->filename;
    FUNC_1(VAR_3, "file:", &VAR_3);
    FUNC_1(VAR_4, "file:", &VAR_4);

    if (FUNC_2(VAR_3, VAR_4) < 0)
        return FUNC_0(VAR_0);

    return 0;
}
