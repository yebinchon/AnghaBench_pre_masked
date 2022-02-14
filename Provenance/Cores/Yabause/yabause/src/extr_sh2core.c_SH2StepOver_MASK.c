
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_12__ {scalar_t__ (* GetPC ) (TYPE_3__*) ;} ;
struct TYPE_10__ {scalar_t__ PC; } ;
struct TYPE_9__ {void (* callBack ) (void*,u32,void*) ;int enabled; scalar_t__ address; int type; } ;
struct TYPE_11__ {scalar_t__ cycles; TYPE_2__ regs; TYPE_1__ stepOverOut; } ;
typedef TYPE_3__ SH2_struct ;


 int FUNC_0 (scalar_t__) ;
 TYPE_8__* VAR_0 ;
 int FUNC_1 (TYPE_3__*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;

int FUNC_4(SH2_struct *VAR_2, void (*VAR_3)(void *, u32, void *))
{
   if (VAR_0)
   {
      u32 VAR_4 = VAR_0->GetPC(VAR_2);
      u16 VAR_5=FUNC_0(VAR_2->regs.PC);


      if ((VAR_5 & 0xF000) == 0xB000 ||
         (VAR_5 & 0xF0FF) == 0x0003 ||
         (VAR_5 & 0xF0FF) == 0x400B)
      {

         VAR_2->stepOverOut.callBack = VAR_3;
         VAR_2->stepOverOut.type = VAR_1;
         VAR_2->stepOverOut.enabled = 1;
         VAR_2->stepOverOut.address = VAR_2->regs.PC+4;
         return 1;
      }
      else
      {

         FUNC_1(VAR_2, VAR_2->cycles+1);



         if (VAR_4 == VAR_0->GetPC(VAR_2))
            FUNC_1(VAR_2, VAR_2->cycles+1);
      }
   }
   return 0;
}
