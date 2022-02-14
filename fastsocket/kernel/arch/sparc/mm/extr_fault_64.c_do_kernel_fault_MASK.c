
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int tstate; int tpc; scalar_t__ tnpc; } ;
struct exception_table_entry {int fixup; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ,struct pt_regs*,unsigned int,int) ;
 int FUNC_1 (unsigned int,struct pt_regs*) ;
 int FUNC_2 (unsigned int,struct pt_regs*) ;
 struct exception_table_entry* FUNC_3 (int ) ;
 int FUNC_4 (unsigned long,int ,struct pt_regs*) ;

__attribute__((used)) static void FUNC_5(struct pt_regs *VAR_6, int VAR_7, int VAR_8,
       unsigned int VAR_9, unsigned long VAR_10)
{
 unsigned char VAR_11 = VAR_0;

 if ((!VAR_9) && (VAR_6->tstate & VAR_4))
  goto cannot_handle;






 if (!(VAR_8 & (VAR_2|VAR_1)) &&
     (VAR_9 & 0xc0800000) == 0xc0800000) {
  if (VAR_9 & 0x2000)
   VAR_11 = (VAR_6->tstate >> 24);
  else
   VAR_11 = (VAR_9 >> 5);
  if ((VAR_11 & 0xf2) == 0x82) {
   if (VAR_9 & 0x1000000) {
    FUNC_2(VAR_9, VAR_6);
   } else {




    FUNC_1(VAR_9, VAR_6);
   }
   return;
  }
 }


 if (VAR_6->tstate & VAR_4) {
  const struct exception_table_entry *VAR_12;

  VAR_12 = FUNC_3(VAR_6->tpc);
  if (VAR_12) {
   VAR_6->tpc = VAR_12->fixup;
   VAR_6->tnpc = VAR_6->tpc + 4;
   return;
  }
 } else {



  FUNC_0(VAR_7, VAR_3, VAR_6, VAR_9, VAR_8);
  return;
 }

cannot_handle:
 FUNC_4 (VAR_10, VAR_5, VAR_6);
}
