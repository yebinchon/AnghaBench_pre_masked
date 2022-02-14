
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(char VAR_2, char VAR_3)
{
 switch (VAR_2 ^ VAR_3) {
 case 0x00:
  return VAR_1;
 case 0x20:
  return (VAR_2 >= 'A' && VAR_2 <= 'Z') || (VAR_2 >= 'a' && VAR_2 <= 'z');
 default:
  return VAR_0;
 }
}
