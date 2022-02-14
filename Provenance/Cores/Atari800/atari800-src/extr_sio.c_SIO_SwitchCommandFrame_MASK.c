
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

void FUNC_1(int VAR_8)
{
 if (VAR_8) {
  if (VAR_7 != VAR_4)
   FUNC_0("Unexpected command frame at state %x.", VAR_7);
  VAR_0 = 0;
  VAR_1 = 0;
  VAR_2 = 5;
  VAR_7 = VAR_3;
 }
 else {
  if (VAR_7 != VAR_6 && VAR_7 != VAR_4 &&
   VAR_7 != VAR_5) {
   if (!(VAR_7 == VAR_3 && VAR_0 == 0))
    FUNC_0("Command frame %02x unfinished.", VAR_7);
   VAR_7 = VAR_4;
  }
  VAR_0 = 0;
 }
}
