
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int uint16_t ;
struct TYPE_5__ {unsigned int* SubRegIndices; TYPE_1__* Desc; scalar_t__ DiffLists; } ;
struct TYPE_4__ {int SubRegIndices; scalar_t__ SubRegs; } ;
typedef TYPE_2__ MCRegisterInfo ;
typedef int MCPhysReg ;
typedef int DiffListIterator ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

unsigned FUNC_4(const MCRegisterInfo *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
 DiffListIterator VAR_3;
 const uint16_t *VAR_4 = VAR_0->SubRegIndices + VAR_0->Desc[VAR_1].SubRegIndices;

 FUNC_1(&VAR_3, (MCPhysReg)VAR_1, VAR_0->DiffLists + VAR_0->Desc[VAR_1].SubRegs);
 FUNC_3(&VAR_3);

 while(FUNC_2(&VAR_3)) {
  if (*VAR_4 == VAR_2)
   return FUNC_0(&VAR_3);
  FUNC_3(&VAR_3);
  ++VAR_4;
 }

 return 0;
}
