
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e752x_error_info {int sysbus_ferr; int sysbus_nerr; } ;


 int FUNC_0 (int,int,int*,int) ;

__attribute__((used)) static void FUNC_1(struct e752x_error_info *VAR_0,
   int *VAR_1, int VAR_2)
{
 u32 VAR_3, VAR_4;


 VAR_3 = VAR_0->sysbus_ferr + (VAR_0->sysbus_nerr << 16);

 if (VAR_3 == 0)
  return;

 VAR_4 = (VAR_3 >> 16) & 0x3ff;
 VAR_3 = VAR_3 & 0x3ff;

 if (VAR_3 & 0x087)
  FUNC_0(1, VAR_3 & 0x087, VAR_1, VAR_2);

 if (VAR_3 & 0x378)
  FUNC_0(0, VAR_3 & 0x378, VAR_1, VAR_2);

 if (VAR_4 & 0x087)
  FUNC_0(1, VAR_4 & 0x087, VAR_1, VAR_2);

 if (VAR_4 & 0x378)
  FUNC_0(0, VAR_4 & 0x378, VAR_1, VAR_2);
}
