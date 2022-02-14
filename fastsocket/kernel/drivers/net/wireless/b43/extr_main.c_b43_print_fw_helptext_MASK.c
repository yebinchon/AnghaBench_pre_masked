
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_wl {int dummy; } ;


 int FUNC_0 (struct b43_wl*,char const*) ;
 int FUNC_1 (struct b43_wl*,char const*) ;

__attribute__((used)) static void FUNC_2(struct b43_wl *VAR_0, bool VAR_1)
{
 const char VAR_2[] =
  "You must go to " "http://wireless.kernel.org/en/users/Drivers/b43#devicefirmware " "and download the correct firmware for this driver version. " "Please carefully read all instructions on this website.\n";




 if (VAR_1)
  FUNC_0(VAR_0, VAR_2);
 else
  FUNC_1(VAR_0, VAR_2);
}
