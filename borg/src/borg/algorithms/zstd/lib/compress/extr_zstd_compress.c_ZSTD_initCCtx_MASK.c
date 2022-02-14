
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ZSTD_customMem ;
struct TYPE_5__ {int bmi2; int customMem; } ;
typedef TYPE_1__ ZSTD_CCtx ;


 size_t FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (size_t const) ;
 int VAR_0 ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_6(ZSTD_CCtx* VAR_1, ZSTD_customMem VAR_2)
{
    FUNC_4(VAR_1 != ((void*)0));
    FUNC_5(VAR_1, 0, sizeof(*VAR_1));
    VAR_1->customMem = VAR_2;
    VAR_1->bmi2 = FUNC_2(FUNC_1());
    { size_t const VAR_3 = FUNC_0(VAR_1, VAR_0);
        FUNC_4(!FUNC_3(VAR_3));
        (void)VAR_3;
    }
}
