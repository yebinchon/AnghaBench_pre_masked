
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int data_direction; } ;







unsigned char *FUNC_0(struct se_cmd *VAR_0)
{
 switch (VAR_0->data_direction) {
 case 129:
  return "NONE";
 case 130:
  return "READ";
 case 128:
  return "WRITE";
 case 131:
  return "BIDI";
 default:
  break;
 }

 return "UNKNOWN";
}
