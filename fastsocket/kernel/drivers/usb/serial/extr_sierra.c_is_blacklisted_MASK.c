
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sierra_iface_info {scalar_t__* ifaceinfo; int infolen; } ;



__attribute__((used)) static int FUNC_0(const u8 VAR_0,
    const struct sierra_iface_info *VAR_1)
{
 const u8 *VAR_2;
 int VAR_3;

 if (VAR_1) {
  VAR_2 = VAR_1->ifaceinfo;

  for (VAR_3 = 0; VAR_3 < VAR_1->infolen; VAR_3++) {
   if (VAR_2[VAR_3] == VAR_0)
    return 1;
  }
 }
 return 0;
}
