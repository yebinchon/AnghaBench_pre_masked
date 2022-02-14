
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ parity; int data_bits; int stop_bits; int flags; int data_rate; scalar_t__ loopback; } ;
struct slgt_info {int if_mode; int base_clock; TYPE_1__ params; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 unsigned short VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (struct slgt_info*) ;
 int FUNC_1 (struct slgt_info*) ;
 unsigned short FUNC_2 (struct slgt_info*,int ) ;
 int FUNC_3 (struct slgt_info*) ;
 int FUNC_4 (struct slgt_info*,int) ;
 int FUNC_5 (struct slgt_info*,int) ;
 int FUNC_6 (struct slgt_info*,int) ;
 int FUNC_7 (struct slgt_info*) ;
 int FUNC_8 (struct slgt_info*,int ,unsigned short) ;
 int FUNC_9 (struct slgt_info*,int ,int) ;

__attribute__((used)) static void FUNC_10(struct slgt_info *VAR_23)
{
   unsigned short VAR_24;

 FUNC_5(VAR_23, VAR_14 | VAR_15);
 FUNC_7(VAR_23);
 FUNC_3(VAR_23);
 VAR_24 = 0x4000;

 if (VAR_23->if_mode & VAR_19)
  VAR_24 |= VAR_8;

 if (VAR_23->params.parity != VAR_0) {
  VAR_24 |= VAR_10;
  if (VAR_23->params.parity == VAR_1)
   VAR_24 |= VAR_9;
 }

 switch (VAR_23->params.data_bits)
 {
 case 6: VAR_24 |= VAR_6; break;
 case 7: VAR_24 |= VAR_7; break;
 case 8: VAR_24 |= VAR_7 + VAR_6; break;
 }

 if (VAR_23->params.stop_bits != 1)
  VAR_24 |= VAR_5;

 if (VAR_23->params.flags & VAR_12)
  VAR_24 |= VAR_2;

 FUNC_8(VAR_23, VAR_22, VAR_24);
 VAR_24 = 0x4000;

 if (VAR_23->params.parity != VAR_0) {
  VAR_24 |= VAR_10;
  if (VAR_23->params.parity == VAR_1)
   VAR_24 |= VAR_9;
 }

 switch (VAR_23->params.data_bits)
 {
 case 6: VAR_24 |= VAR_6; break;
 case 7: VAR_24 |= VAR_7; break;
 case 8: VAR_24 |= VAR_7 + VAR_6; break;
 }

 if (VAR_23->params.flags & VAR_13)
  VAR_24 |= VAR_2;

 FUNC_8(VAR_23, VAR_20, VAR_24);
 FUNC_9(VAR_23, VAR_11, 0x69);

 FUNC_1(VAR_23);
 VAR_24 = VAR_4 + VAR_3 + VAR_2;

 if ((FUNC_2(VAR_23, VAR_18) & VAR_9) && VAR_23->params.data_rate &&
     ((VAR_23->base_clock < (VAR_23->params.data_rate * 16)) ||
      (VAR_23->base_clock % (VAR_23->params.data_rate * 16)))) {

  VAR_24 |= VAR_5;
  FUNC_4(VAR_23, VAR_23->params.data_rate * 8);
 } else {

  FUNC_4(VAR_23, VAR_23->params.data_rate * 16);
 }
 FUNC_8(VAR_23, VAR_21, VAR_24);

 FUNC_6(VAR_23, VAR_16 | VAR_17);

 if (VAR_23->params.loopback)
  FUNC_0(VAR_23);
}
