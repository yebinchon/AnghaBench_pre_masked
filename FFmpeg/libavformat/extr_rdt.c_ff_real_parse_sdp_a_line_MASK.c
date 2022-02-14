
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * streams; } ;
typedef TYPE_1__ AVFormatContext ;


 scalar_t__ FUNC_0 (char const*,char*,char const**) ;
 int FUNC_1 (TYPE_1__*,int ,char const*) ;

void
FUNC_2 (AVFormatContext *VAR_0, int VAR_1,
                          const char *VAR_2)
{
    const char *VAR_3 = VAR_2;

    if (FUNC_0(VAR_3, "ASMRuleBook:string;", &VAR_3))
        FUNC_1(VAR_0, VAR_0->streams[VAR_1], VAR_3);
}
