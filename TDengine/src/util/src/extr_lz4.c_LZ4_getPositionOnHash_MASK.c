
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tableType_t ;
typedef size_t U32 ;
typedef int U16 ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static const BYTE* FUNC_0(U32 VAR_2, void* VAR_3, tableType_t VAR_4, const BYTE* VAR_5)
{
    if (VAR_4 == VAR_0) { const BYTE** VAR_6 = (const BYTE**) VAR_3; return VAR_6[VAR_2]; }
    if (VAR_4 == VAR_1) { const U32* const VAR_7 = (U32*) VAR_3; return VAR_7[VAR_2] + VAR_5; }
    { const U16* const VAR_8 = (U16*) VAR_3; return VAR_8[VAR_2] + VAR_5; }
}
