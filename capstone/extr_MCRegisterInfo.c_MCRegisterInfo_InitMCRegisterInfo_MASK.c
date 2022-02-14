
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {unsigned int NumRegs; unsigned int RAReg; unsigned int PCReg; char const* RegStrings; unsigned int NumClasses; unsigned int NumRegUnits; unsigned int NumSubRegIndices; int const* RegEncodingTable; int const* SubRegIndices; int ** RegUnitRoots; int const* DiffLists; int const* Classes; int const* Desc; } ;
typedef TYPE_1__ MCRegisterInfo ;
typedef int MCRegisterDesc ;
typedef int MCRegisterClass ;
typedef int MCPhysReg ;



void FUNC_0(MCRegisterInfo *VAR_0,
  const MCRegisterDesc *VAR_1, unsigned VAR_2,
  unsigned VAR_3, unsigned VAR_4,
  const MCRegisterClass *VAR_5, unsigned VAR_6,
  uint16_t (*VAR_7)[2], unsigned VAR_8,
  const MCPhysReg *VAR_9,
  const char *VAR_10,
  const uint16_t *VAR_11, unsigned VAR_12,
  const uint16_t *VAR_13)
{
 VAR_0->Desc = VAR_1;
 VAR_0->NumRegs = VAR_2;
 VAR_0->RAReg = VAR_3;
 VAR_0->PCReg = VAR_4;
 VAR_0->Classes = VAR_5;
 VAR_0->DiffLists = VAR_9;
 VAR_0->RegStrings = VAR_10;
 VAR_0->NumClasses = VAR_6;
 VAR_0->RegUnitRoots = VAR_7;
 VAR_0->NumRegUnits = VAR_8;
 VAR_0->SubRegIndices = VAR_11;
 VAR_0->NumSubRegIndices = VAR_12;
 VAR_0->RegEncodingTable = VAR_13;
}
