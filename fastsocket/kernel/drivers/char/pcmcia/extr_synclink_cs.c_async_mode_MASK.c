
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int data_rate; int data_bits; int stop_bits; scalar_t__ parity; int flags; scalar_t__ loopback; } ;
struct TYPE_16__ {int serial_signals; TYPE_1__ params; } ;
typedef TYPE_2__ MGSLPC_INFO ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,unsigned char) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int) ;
 int FUNC_3 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,scalar_t__,int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,scalar_t__) ;
 int FUNC_8 (TYPE_2__*,scalar_t__,unsigned char) ;
 int FUNC_9 (TYPE_2__*,scalar_t__) ;
 int FUNC_10 (TYPE_2__*,scalar_t__,unsigned char) ;

__attribute__((used)) static void FUNC_11(MGSLPC_INFO *VAR_34)
{
 unsigned char VAR_35;


 FUNC_2(VAR_34, VAR_13, 0xffff);
 FUNC_2(VAR_34, VAR_14, 0xffff);
 FUNC_6(VAR_34, 0xff);
 VAR_35 = 0x06;
 if (VAR_34->params.loopback)
  VAR_35 |= VAR_2;


 if (!(VAR_34->serial_signals & VAR_32))
  VAR_35 |= VAR_7;
 FUNC_10(VAR_34, VAR_13 + VAR_28, VAR_35);
 FUNC_10(VAR_34, VAR_13 + VAR_8, 0x83);
 FUNC_10(VAR_34, VAR_13 + VAR_9, 0x1f);
 FUNC_10(VAR_34, VAR_13 + VAR_10, 0x10);
 FUNC_10(VAR_34, VAR_13 + VAR_11, 0);
 FUNC_10(VAR_34, VAR_13 + VAR_12, 0x50);
 FUNC_5(VAR_34, VAR_13, VAR_34->params.data_rate * 16);
 VAR_35 = 0x00;
 if (VAR_34->params.data_bits != 8)
  VAR_35 |= VAR_2;
 if (VAR_34->params.stop_bits != 1)
  VAR_35 |= VAR_6;
 if (VAR_34->params.parity != VAR_0)
 {
  VAR_35 |= VAR_3;
  if (VAR_34->params.parity == VAR_1)
   VAR_35 |= VAR_4;
  else
   VAR_35 |= VAR_5;
 }
 FUNC_10(VAR_34, VAR_13 + VAR_17, VAR_35);
 FUNC_10(VAR_34, VAR_13 + VAR_30, 0x5c);





 FUNC_10(VAR_34, VAR_13 + VAR_31, 0);
 VAR_35 = 0x00;
 if (VAR_34->params.flags & VAR_19)
  VAR_35 |= VAR_6;
 FUNC_10(VAR_34, VAR_13 + VAR_33, VAR_35);
 if (VAR_34->params.flags & VAR_18)
  FUNC_3(VAR_34, VAR_13, VAR_22);


 FUNC_8(VAR_34, VAR_13 + VAR_28, VAR_4);
 FUNC_1(VAR_34);
 if (VAR_34->params.flags & VAR_18) {
  FUNC_3(VAR_34, VAR_14, VAR_22);

  FUNC_8(VAR_34, VAR_13 + VAR_29, VAR_4);
 } else
  FUNC_0(VAR_34, VAR_13 + VAR_29, VAR_4);
 FUNC_3(VAR_34, VAR_13,
     VAR_23 + VAR_24 + VAR_21 + VAR_25 +
     VAR_20 + VAR_26);
 FUNC_4(VAR_34, VAR_13, VAR_16 + VAR_15);
 FUNC_9(VAR_34, VAR_13);
 FUNC_7(VAR_34, VAR_13 + VAR_27);
}
