
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

u16 FUNC_1(const char *VAR_12)
{
 u16 VAR_13 = 0;

 if (VAR_12 == ((void*)0)) {

  VAR_13 |= VAR_0 | VAR_4;






 } else {
  if (FUNC_0(VAR_12, "ethernet"))
   VAR_13 |= VAR_1;
  if (FUNC_0(VAR_12, "label"))
   VAR_13 |= VAR_5;
  if (FUNC_0(VAR_12, "display"))
   VAR_13 |= VAR_0;
  if (FUNC_0(VAR_12, "ext_nfc_token"))
   VAR_13 |= VAR_2;
  if (FUNC_0(VAR_12, "int_nfc_token"))
   VAR_13 |= VAR_3;
  if (FUNC_0(VAR_12, "nfc_interface"))
   VAR_13 |= VAR_6;
  if (FUNC_0(VAR_12, "push_button"))
   VAR_13 |= VAR_9;
  if (FUNC_0(VAR_12, "keypad"))
   VAR_13 |= VAR_4;
 }

 return VAR_13;
}
