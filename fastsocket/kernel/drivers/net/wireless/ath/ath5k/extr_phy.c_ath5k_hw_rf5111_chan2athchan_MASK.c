
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_athchan_2ghz {int a2_athchan; int a2_flags; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(unsigned int VAR_1,
  struct ath5k_athchan_2ghz *VAR_2)
{
 int VAR_3;


 VAR_3 = (int)VAR_1;




 if (VAR_3 <= 13) {
  VAR_2->a2_athchan = 115 + VAR_3;
  VAR_2->a2_flags = 0x46;
 } else if (VAR_3 == 14) {
  VAR_2->a2_athchan = 124;
  VAR_2->a2_flags = 0x44;
 } else if (VAR_3 >= 15 && VAR_3 <= 26) {
  VAR_2->a2_athchan = ((VAR_3 - 14) * 4) + 132;
  VAR_2->a2_flags = 0x46;
 } else
  return -VAR_0;

 return 0;
}
