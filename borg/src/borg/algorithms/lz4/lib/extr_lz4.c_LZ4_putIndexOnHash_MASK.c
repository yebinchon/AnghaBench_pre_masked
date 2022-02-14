
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tableType_t ;
typedef size_t U32 ;
typedef int U16 ;


 int FUNC_0 (int) ;





__attribute__((used)) static void FUNC_1(U32 VAR_0, U32 VAR_1, void* VAR_2, tableType_t const VAR_3)
{
    switch (VAR_3)
    {
    default:
    case 128:
    case 131: { FUNC_0(0); return; }
    case 129: { U32* VAR_4 = (U32*) VAR_2; VAR_4[VAR_1] = VAR_0; return; }
    case 130: { U16* VAR_5 = (U16*) VAR_2; FUNC_0(VAR_0 < 65536); VAR_5[VAR_1] = (U16)VAR_0; return; }
    }
}
