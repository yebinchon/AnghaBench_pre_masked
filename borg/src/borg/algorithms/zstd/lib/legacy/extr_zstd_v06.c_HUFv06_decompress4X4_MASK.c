
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BYTE ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 size_t FUNC_2 (void*,size_t,int const*,size_t,int ) ;
 scalar_t__ FUNC_3 (size_t) ;
 size_t FUNC_4 (int ,void const*,size_t) ;
 int VAR_2 ;

size_t FUNC_5 (void* VAR_3, size_t VAR_4, const void* VAR_5, size_t VAR_6)
{
    FUNC_1(VAR_0, VAR_1);
    const BYTE* VAR_7 = (const BYTE*) VAR_5;

    size_t VAR_8 = FUNC_4 (VAR_0, VAR_5, VAR_6);
    if (FUNC_3(VAR_8)) return VAR_8;
    if (VAR_8 >= VAR_6) return FUNC_0(VAR_2);
    VAR_7 += VAR_8;
    VAR_6 -= VAR_8;

    return FUNC_2 (VAR_3, VAR_4, VAR_7, VAR_6, VAR_0);
}
