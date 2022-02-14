
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* dictID; } ;
typedef TYPE_1__ ZSTDv07_DCtx ;
typedef scalar_t__ U32 ;


 size_t FUNC_0 (int ) ;
 void* FUNC_1 (char const*) ;
 scalar_t__ const VAR_0 ;
 scalar_t__ FUNC_2 (size_t const) ;
 size_t FUNC_3 (TYPE_1__*,void const*,size_t) ;
 size_t FUNC_4 (TYPE_1__*,void const*,size_t) ;
 int VAR_1 ;

__attribute__((used)) static size_t FUNC_5(ZSTDv07_DCtx* VAR_2, const void* VAR_3, size_t VAR_4)
{
    if (VAR_4 < 8) return FUNC_4(VAR_2, VAR_3, VAR_4);
    { U32 const VAR_5 = FUNC_1(VAR_3);
        if (VAR_5 != VAR_0) {
            return FUNC_4(VAR_2, VAR_3, VAR_4);
    } }
    VAR_2->dictID = FUNC_1((const char*)VAR_3 + 4);


    VAR_3 = (const char*)VAR_3 + 8;
    VAR_4 -= 8;
    { size_t const VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4);
        if (FUNC_2(VAR_6)) return FUNC_0(VAR_1);
        VAR_3 = (const char*)VAR_3 + VAR_6;
        VAR_4 -= VAR_6;
    }


    return FUNC_4(VAR_2, VAR_3, VAR_4);
}
