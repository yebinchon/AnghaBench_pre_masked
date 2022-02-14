
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__*) ;

__attribute__((used)) static bool
FUNC_4(u8 *VAR_0)
{
 bool VAR_1 = 1;
 FUNC_0("mac_addr_valid");


 if (FUNC_3(VAR_0)) {
  FUNC_1("MAC address is multicast\n");
  VAR_1 = 0;
 }

 else if (FUNC_2(VAR_0)) {
  FUNC_1("MAC address is broadcast\n");
  VAR_1 = 0;
 }

 else if (VAR_0[0] == 0 &&
    VAR_0[1] == 0 &&
    VAR_0[2] == 0 &&
    VAR_0[3] == 0 &&
    VAR_0[4] == 0 &&
    VAR_0[5] == 0) {
  FUNC_1("MAC address is all zeros\n");
  VAR_1 = 0;
 }
 return (VAR_1);
}
