
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;





 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static bool FUNC_7(u16 VAR_5, u8 VAR_6)
{
 u8 VAR_7 = FUNC_4(VAR_5);
 bool VAR_8 = 1;

 if (FUNC_3(VAR_5)) {

  if (FUNC_5(VAR_5) != VAR_4 || FUNC_2(VAR_5) != VAR_2)
   return 0;

  switch (VAR_7) {
  case 132:
  case 131:
   FUNC_6("Data/Tag parity error due to %s.\n",
    (VAR_7 == 132 ? "load/hw prf" : "store"));
   break;
  case 130:
   FUNC_6("Copyback parity error on a tag miss.\n");
   break;
  case 128:
   FUNC_6("Tag parity error during snoop.\n");
   break;
  default:
   VAR_8 = 0;
  }
 } else if (FUNC_0(VAR_5)) {

  if ((FUNC_1(VAR_5) != VAR_1 && FUNC_1(VAR_5) != VAR_0) || FUNC_2(VAR_5) != VAR_3)
   return 0;

  FUNC_6("System read data error on a ");

  switch (VAR_7) {
  case 129:
   FUNC_6("TLB reload.\n");
   break;
  case 131:
   FUNC_6("store.\n");
   break;
  case 132:
   FUNC_6("load.\n");
   break;
  default:
   VAR_8 = 0;
  }
 } else {
  VAR_8 = 0;
 }

 return VAR_8;
}
