
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixp2400_msf_parameters {int rx_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct ixp2400_msf_parameters *VAR_5)
{
 int VAR_6;
 int VAR_7;






 VAR_6 = VAR_5->rx_mode & VAR_4;
 if (VAR_6 == VAR_3) {
  for (VAR_7 = 1; VAR_7 < 128; VAR_7++) {
   if (VAR_7 == 9 || VAR_7 == 18 || VAR_7 == 27)
    continue;
   FUNC_0(VAR_0, VAR_7);
  }
 } else if (VAR_6 == VAR_1) {
  for (VAR_7 = 1; VAR_7 < 64; VAR_7++) {
   if (VAR_7 == 4 || VAR_7 == 9 || VAR_7 == 13)
    continue;
   FUNC_0(VAR_0, VAR_7);
  }
 } else if (VAR_6 == VAR_2) {
  for (VAR_7 = 1; VAR_7 < 32; VAR_7++) {
   if (VAR_7 == 2 || VAR_7 == 4 || VAR_7 == 6)
    continue;
   FUNC_0(VAR_0, VAR_7);
  }
 }
}
