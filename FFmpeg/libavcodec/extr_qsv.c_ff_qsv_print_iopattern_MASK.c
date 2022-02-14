
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mfx_iopattern; char* desc; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (void*,int ,char*,char const*,char const*) ;
 TYPE_1__* VAR_1 ;

int FUNC_2(void *VAR_2, int VAR_3,
                           const char *VAR_4)
{
    const char *VAR_5 = ((void*)0);

    for (int VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
        if (VAR_1[VAR_6].mfx_iopattern == VAR_3) {
            VAR_5 = VAR_1[VAR_6].desc;
        }
    }
    if (!VAR_5)
        VAR_5 = "unknown iopattern";

    FUNC_1(VAR_2, VAR_0, "%s: %s\n", VAR_4, VAR_5);
    return 0;
}
