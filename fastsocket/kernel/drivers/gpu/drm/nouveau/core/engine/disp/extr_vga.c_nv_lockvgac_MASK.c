
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int chipset; } ;


 TYPE_1__* FUNC_0 (void*) ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (void*,int,int,int) ;

bool
FUNC_4(void *VAR_0, bool VAR_1)
{
 bool VAR_2 = !FUNC_2(VAR_0, 0, 0x1f);
 u8 VAR_3 = VAR_1 ? 0x99 : 0x57;
 FUNC_3(VAR_0, 0, 0x1f, VAR_3);
 if (FUNC_0(VAR_0)->chipset == 0x11) {
  if (!(FUNC_1(VAR_0, 0x001084) & 0x10000000))
   FUNC_3(VAR_0, 1, 0x1f, VAR_3);
 }
 return VAR_2;
}
