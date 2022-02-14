
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
typedef int sh2regs_struct ;
typedef int interrupt_struct ;
struct TYPE_14__ {int (* GetInterrupts ) (TYPE_2__*,scalar_t__) ;} ;
struct TYPE_13__ {int IsSSH2Running; } ;
struct TYPE_12__ {int member_1; int member_0; } ;
struct TYPE_10__ {int shift; } ;
struct TYPE_11__ {scalar_t__ isslave; int instruction; int isIdle; int cycles; int delay; scalar_t__ DataArray; scalar_t__ AddressArray; int NumberOfInterrupts; scalar_t__ interrupts; TYPE_1__ frc; int onchip; } ;
typedef TYPE_2__ SH2_struct ;
typedef int Onchip_struct ;
typedef TYPE_3__ IOCheck_struct ;
typedef int FILE ;


 int VAR_0 ;
 TYPE_9__* VAR_1 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 TYPE_5__ VAR_2 ;
 int FUNC_4 (TYPE_3__*,void*,int,int,int *) ;

int FUNC_5(SH2_struct *VAR_3, FILE *VAR_4)
{
   int VAR_5;
   IOCheck_struct VAR_6 = { 0, 0 };
   sh2regs_struct VAR_7;


   if (VAR_3->isslave == 0)
      VAR_5 = FUNC_2(VAR_4, "MSH2", 1);
   else
   {
      VAR_5 = FUNC_2(VAR_4, "SSH2", 1);
      FUNC_4(&VAR_6, (void *)&VAR_2.IsSSH2Running, 1, 1, VAR_4);
   }


   FUNC_0(VAR_3, &VAR_7);
   FUNC_4(&VAR_6, (void *)&VAR_7, sizeof(sh2regs_struct), 1, VAR_4);


   FUNC_4(&VAR_6, (void *)&VAR_3->onchip, sizeof(Onchip_struct), 1, VAR_4);





   VAR_3->frc.shift = 1 << VAR_3->frc.shift;
   FUNC_4(&VAR_6, (void *)&VAR_3->frc, sizeof(VAR_3->frc), 1, VAR_4);
   {
      u32 VAR_8 = VAR_3->frc.shift;
      VAR_3->frc.shift = 0;
      while ((VAR_8 >>= 1) != 0)
         VAR_3->frc.shift++;
   }
   VAR_3->NumberOfInterrupts = VAR_1->GetInterrupts(VAR_3, VAR_3->interrupts);
   FUNC_4(&VAR_6, (void *)VAR_3->interrupts, sizeof(interrupt_struct), VAR_0, VAR_4);
   FUNC_4(&VAR_6, (void *)&VAR_3->NumberOfInterrupts, sizeof(u32), 1, VAR_4);
   FUNC_4(&VAR_6, (void *)VAR_3->AddressArray, sizeof(u32), 0x100, VAR_4);
   FUNC_4(&VAR_6, (void *)VAR_3->DataArray, sizeof(u8), 0x1000, VAR_4);
   FUNC_4(&VAR_6, (void *)&VAR_3->delay, sizeof(u32), 1, VAR_4);
   FUNC_4(&VAR_6, (void *)&VAR_3->cycles, sizeof(u32), 1, VAR_4);
   FUNC_4(&VAR_6, (void *)&VAR_3->isslave, sizeof(u8), 1, VAR_4);
   FUNC_4(&VAR_6, (void *)&VAR_3->isIdle, sizeof(u8), 1, VAR_4);
   FUNC_4(&VAR_6, (void *)&VAR_3->instruction, sizeof(u16), 1, VAR_4);

   return FUNC_1(VAR_4, VAR_5);
}
