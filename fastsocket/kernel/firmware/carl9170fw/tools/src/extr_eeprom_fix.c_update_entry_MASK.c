
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct carl9170fw_fix_entry {int value; int mask; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(char VAR_2, struct carl9170fw_fix_entry *VAR_3,
      struct carl9170fw_fix_entry *VAR_4)
{
 switch (VAR_2) {
 case '=':
  VAR_3->mask = VAR_4->mask;
  VAR_3->value = VAR_4->value;
  break;

 case 'O':
  VAR_3->mask |= VAR_4->mask;
  VAR_3->value |= VAR_4->value;
  break;

 case 'A':
  VAR_3->mask &= VAR_4->mask;
  VAR_3->value &= VAR_4->value;
  break;

 default:
  FUNC_0(VAR_1, "Unknown option: '%c'\n", VAR_2);
  return -VAR_0;
 }

 return 0;
}
