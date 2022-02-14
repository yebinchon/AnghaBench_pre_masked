
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U64 ;
typedef scalar_t__ BYTE ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (void const*) ;

__attribute__((used)) static U64 FUNC_2(const void* VAR_0)
{
    if (FUNC_0())
        return FUNC_1(VAR_0);
    else
    {
        const BYTE* VAR_1 = (const BYTE*)VAR_0;
        return (U64)((U64)VAR_1[0] + ((U64)VAR_1[1]<<8) + ((U64)VAR_1[2]<<16) + ((U64)VAR_1[3]<<24)
                     + ((U64)VAR_1[4]<<32) + ((U64)VAR_1[5]<<40) + ((U64)VAR_1[6]<<48) + ((U64)VAR_1[7]<<56));
    }
}
