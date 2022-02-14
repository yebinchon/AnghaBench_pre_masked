
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct jme_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct jme_adapter*,char*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct jme_adapter *VAR_7, u16 VAR_8)
{
 if (!(VAR_8 & (VAR_4 | VAR_6 | VAR_1)))
  return 0;

 if (FUNC_1((VAR_8 & (VAR_2 | VAR_4 | VAR_3))
   == VAR_4)) {
  if (VAR_8 & VAR_1)
   FUNC_0(VAR_7, "TCP Checksum error\n");
  return 0;
 }

 if (FUNC_1((VAR_8 & (VAR_2 | VAR_6 | VAR_5))
   == VAR_6)) {
  if (VAR_8 & VAR_1)
   FUNC_0(VAR_7, "UDP Checksum error.\n");
  return 0;
 }

 if (FUNC_1((VAR_8 & (VAR_1 | VAR_0))
   == VAR_1)) {
  FUNC_0(VAR_7, "IPv4 Checksum error.\n");
  return 0;
 }

 return 1;
}
