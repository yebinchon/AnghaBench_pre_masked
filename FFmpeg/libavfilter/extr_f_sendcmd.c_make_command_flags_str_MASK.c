
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* str; } ;
typedef TYPE_1__ AVBPrint ;


 int VAR_0 ;
 int FUNC_0 (char const* const*) ;
 int FUNC_1 (TYPE_1__*,char,int) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,char*,char const* const) ;

__attribute__((used)) static inline char *FUNC_4(AVBPrint *VAR_1, int VAR_2)
{
    static const char * const VAR_3[] = { "enter", "leave" };
    int VAR_4, VAR_5 = 1;

    FUNC_2(VAR_1, 0, VAR_0);
    for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3); VAR_4++) {
        if (VAR_2 & 1<<VAR_4) {
            if (!VAR_5)
                FUNC_1(VAR_1, '+', 1);
            FUNC_3(VAR_1, "%s", VAR_3[VAR_4]);
            VAR_5 = 0;
        }
    }

    return VAR_1->str;
}
