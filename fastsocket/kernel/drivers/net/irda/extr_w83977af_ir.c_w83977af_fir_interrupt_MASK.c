
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fir_base; scalar_t__ direction; } ;
struct w83977af_ir {TYPE_1__ io; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct w83977af_ir*) ;
 scalar_t__ FUNC_4 (struct w83977af_ir*) ;
 int FUNC_5 (struct w83977af_ir*,int) ;
 int FUNC_6 (struct w83977af_ir*) ;

__attribute__((used)) static __u8 FUNC_7(struct w83977af_ir *VAR_14, int VAR_15)
{
 __u8 VAR_16 = 0;
 __u8 VAR_17;
 int VAR_18;

 VAR_18 = VAR_14->io.fir_base;
 VAR_17 = FUNC_0(VAR_18+VAR_11);


 if (VAR_15 & (VAR_7|VAR_8)) {
  if (FUNC_4(VAR_14)) {


   VAR_16 |= VAR_1;
  } else {



   FUNC_2(VAR_18, VAR_10);
   FUNC_1(0x01, VAR_18+VAR_13);
   FUNC_1(0x00, VAR_18+VAR_12);


   FUNC_1(VAR_5, VAR_18+VAR_4);

   VAR_16 |= VAR_2;
  }
 }

 if (VAR_15 & VAR_9) {

  FUNC_2(VAR_18, VAR_10);
  FUNC_1(0, VAR_18+VAR_4);






  if (VAR_14->io.direction == VAR_3) {
   FUNC_5(VAR_14, VAR_18);

   VAR_16 |= VAR_0;
  } else {

   FUNC_4(VAR_14);

   VAR_16 |= VAR_1;
  }
 }

 if (VAR_15 & VAR_6) {
  FUNC_6(VAR_14);
  FUNC_3(VAR_14);
  VAR_16 = VAR_1;

 }


 FUNC_1(VAR_17, VAR_18+VAR_11);

 return VAR_16;
}
