
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTDv07_DCtx ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t FUNC_1 (int *,void const*,size_t) ;
 size_t FUNC_2 (int *,void*,size_t,int const*,size_t) ;
 scalar_t__ FUNC_3 (size_t const) ;
 int VAR_1 ;

__attribute__((used)) static size_t FUNC_4(ZSTDv07_DCtx* VAR_2,
                            void* VAR_3, size_t VAR_4,
                      const void* VAR_5, size_t VAR_6)
{
    const BYTE* VAR_7 = (const BYTE*)VAR_5;

    if (VAR_6 >= VAR_0) return FUNC_0(VAR_1);


    { size_t const VAR_8 = FUNC_1(VAR_2, VAR_5, VAR_6);
        if (FUNC_3(VAR_8)) return VAR_8;
        VAR_7 += VAR_8;
        VAR_6 -= VAR_8;
    }
    return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_7, VAR_6);
}
