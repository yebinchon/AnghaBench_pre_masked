
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ U32 ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int const*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static size_t FUNC_2(void const* VAR_4, size_t VAR_5)
{
    size_t const VAR_6 = VAR_1;
    U32 VAR_7;

    if (VAR_5 < VAR_1)
        return FUNC_0(VAR_3);

    VAR_7 = FUNC_1((BYTE const*)VAR_4 + VAR_0);
    if ((U32)(VAR_7 + VAR_1) < VAR_7)
        return FUNC_0(VAR_2);

    return VAR_6 + VAR_7;
}
