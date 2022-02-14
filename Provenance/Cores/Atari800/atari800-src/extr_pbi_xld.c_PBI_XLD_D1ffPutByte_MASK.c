
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UBYTE ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

int FUNC_3(UBYTE VAR_8)
{
 int VAR_9 = 0;
 if (VAR_7 && VAR_8 == VAR_0) {
  FUNC_1(VAR_1 + 0xd800, VAR_5, 0x800);
  FUNC_0(FUNC_2("DISK rom activated\n"));
 }
 else if (VAR_8 == VAR_2) {
  FUNC_1(VAR_1 + 0xd800, VAR_6 + 0x800, 0x800);
  FUNC_0(FUNC_2("MODEM rom activated\n"));
 }
 else if (VAR_8 == VAR_4) {
  FUNC_1(VAR_1 + 0xd800, VAR_6, 0x800);
  FUNC_0(FUNC_2("VOICE rom activated\n"));
 }
 else VAR_9 = VAR_3;
 return VAR_9;
}
