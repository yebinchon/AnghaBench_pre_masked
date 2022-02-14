
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {unsigned int NumRegs; TYPE_1__* Desc; scalar_t__ DiffLists; } ;
struct TYPE_5__ {scalar_t__ SuperRegs; } ;
typedef TYPE_2__ MCRegisterInfo ;
typedef int MCRegisterClass ;
typedef int MCPhysReg ;
typedef int DiffListIterator ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int const*,int) ;
 unsigned int FUNC_5 (TYPE_2__ const*,int,unsigned int) ;

unsigned FUNC_6(const MCRegisterInfo *VAR_0, unsigned VAR_1, unsigned VAR_2, const MCRegisterClass *VAR_3)
{
 DiffListIterator VAR_4;

 if (VAR_1 >= VAR_0->NumRegs) {
  return 0;
 }

 FUNC_1(&VAR_4, (MCPhysReg)VAR_1, VAR_0->DiffLists + VAR_0->Desc[VAR_1].SuperRegs);
 FUNC_3(&VAR_4);

 while(FUNC_2(&VAR_4)) {
  uint16_t VAR_5 = FUNC_0(&VAR_4);
  if (FUNC_4(VAR_3, VAR_5) && VAR_1 == FUNC_5(VAR_0, VAR_5, VAR_2))
   return VAR_5;

  FUNC_3(&VAR_4);
 }

 return 0;
}
