
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int BaseAddress; } ;
typedef TYPE_1__ nsp32_hw_data ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 unsigned char FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(nsp32_hw_data *VAR_8, int VAR_9)
{
 unsigned int VAR_10 = VAR_8->BaseAddress;
 int VAR_11 = 0;
 unsigned char VAR_12, VAR_13;

 if (!((VAR_9 == VAR_0) || (VAR_9 == VAR_4))) {
  FUNC_1(VAR_2, "unknown state designation");
 }

 VAR_13 = (VAR_9 == VAR_0 ? VAR_1 : 0);

 do {
  VAR_12 = FUNC_2(VAR_10, VAR_7);
  if ((VAR_12 & VAR_1) == VAR_13) {
   FUNC_0(VAR_5,
      "wait_time: %d", VAR_11);
   return;
  }
  FUNC_3(1);
  VAR_11++;
 } while (VAR_11 < VAR_6);

 FUNC_1(VAR_3, "wait SACK timeout, ack_bit: 0x%x", VAR_13);
}
