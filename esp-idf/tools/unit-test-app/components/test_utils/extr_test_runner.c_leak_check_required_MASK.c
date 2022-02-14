
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * CurrentDetail1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (int *,char const*) ;
 void* FUNC_2 (char const*,int *,int) ;
 void* FUNC_3 (int ,int ) ;
 void* VAR_5 ;

__attribute__((used)) static bool FUNC_4(void)
{
    VAR_5 = FUNC_3(VAR_2, VAR_0);
    VAR_4 = FUNC_3(VAR_1, VAR_0);
    if (VAR_3.CurrentDetail1 != ((void*)0)) {
        const char *VAR_6 = "[leaks";
        const int VAR_7 = FUNC_0(VAR_6);
        const char *VAR_8 = FUNC_1(VAR_3.CurrentDetail1, VAR_6);
        if (VAR_8 != ((void*)0)) {
            if (VAR_8[VAR_7] == ']') {
                return 1;
            } else if (VAR_8[VAR_7] == '=') {
                VAR_4 = FUNC_2(&VAR_8[VAR_7 + 1], ((void*)0), 10);
                VAR_5 = VAR_4;
                return 0;
            }
        }
    }
    return 0;
}
