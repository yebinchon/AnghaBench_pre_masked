
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int* q2_vbase; } ;
struct nes_qp {int terminate_eventtype; int term_flags; TYPE_1__ hwqp; } ;
struct nes_hw_aeqe {int * aeqe_words; } ;
struct nes_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int*,int) ;
 int FUNC_4 (struct nes_device*,struct nes_qp*,struct nes_hw_aeqe*,int ) ;
 int FUNC_5 (struct nes_device*,struct nes_qp*,struct nes_hw_aeqe*) ;
 int FUNC_6 (struct nes_qp*) ;

__attribute__((used)) static void FUNC_7(struct nes_device *VAR_11,
    struct nes_qp *VAR_12, struct nes_hw_aeqe *VAR_13)
{
 u32 VAR_14;
 u8 *VAR_15;
 u32 *VAR_16;
 u8 VAR_17;
 u8 VAR_18;
 u16 VAR_19 = 0;

 VAR_14 = FUNC_2(VAR_13->aeqe_words[VAR_8]);
 if (VAR_14 & VAR_9) {


  VAR_15 = VAR_12->hwqp.q2_vbase + VAR_0;
  VAR_16 = (u32 *)FUNC_3(VAR_15, VAR_14);
  VAR_17 = (FUNC_0(VAR_16[0]) >> 8) & 0xff;
  VAR_18 = FUNC_0(VAR_16[0]) & 0xff;
  if ((VAR_17 & 0xc0) != 0x40)
   VAR_19 = VAR_3;
  else if ((VAR_17 & 0x03) != 1)
   VAR_19 = VAR_4;
  else if (FUNC_0(VAR_16[2]) != 2)
   VAR_19 = VAR_6;
  else if (FUNC_0(VAR_16[3]) != 1)
   VAR_19 = VAR_2;
  else if (FUNC_0(VAR_16[4]) != 0)
   VAR_19 = VAR_5;
  else if ((VAR_18 & 0xc0) != 0x40)
   VAR_19 = VAR_7;

  if (VAR_19) {

   VAR_14 = (VAR_14 & 0xffff0000) | VAR_19;
   VAR_13->aeqe_words[VAR_8] = FUNC_1(VAR_14);
   FUNC_4(VAR_11, VAR_12, VAR_13, VAR_1);
   return;
  }
 }

 VAR_12->term_flags |= VAR_10;
 VAR_12->terminate_eventtype = VAR_1;
 FUNC_6(VAR_12);
 FUNC_5(VAR_11, VAR_12, VAR_13);
}
