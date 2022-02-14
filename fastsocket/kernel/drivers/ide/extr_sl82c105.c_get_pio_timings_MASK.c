
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct ide_timing {int active; } ;
typedef int ide_drive_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,unsigned int) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;
 struct ide_timing* FUNC_2 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_3(ide_drive_t *VAR_1, u8 VAR_2)
{
 struct ide_timing *VAR_3 = FUNC_2(VAR_0 + VAR_2);
 unsigned int VAR_4, VAR_5;
 u8 VAR_6 = 0;

 VAR_4 = (VAR_3->active + 29) / 30;
 VAR_5 = (FUNC_0(VAR_1, VAR_2) - 30 * VAR_4 + 29) / 30;

 if (VAR_4 == 0)
  VAR_4 = 1;

 if (VAR_5 == 0)
  VAR_5 = 1;

 if (FUNC_1(VAR_1, VAR_2))
  VAR_6 = 0x40;

 return (VAR_4 - 1) << 8 | (VAR_5 - 1) | VAR_6;
}
