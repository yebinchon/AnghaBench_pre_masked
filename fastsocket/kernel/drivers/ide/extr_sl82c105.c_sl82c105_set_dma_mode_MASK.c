
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct TYPE_5__ {int name; } ;
typedef TYPE_1__ ide_drive_t ;


 int FUNC_0 (char*) ;
 size_t const VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,void*) ;
 int FUNC_3 (size_t const) ;

__attribute__((used)) static void FUNC_4(ide_drive_t *VAR_1, const u8 VAR_2)
{
 static u16 VAR_3[] = {0x0707, 0x0201, 0x0200};
 unsigned long VAR_4 = (unsigned long)FUNC_1(VAR_1);
 u16 VAR_5;

  FUNC_0(("sl82c105_tune_chipset(drive:%s, speed:%s)\n",
      VAR_1->name, FUNC_3(VAR_2)));

 VAR_5 = VAR_3[VAR_2 - VAR_0];





 VAR_4 &= 0x0000ffff;
 VAR_4 |= (unsigned long)VAR_5 << 16;
 FUNC_2(VAR_1, (void *)VAR_4);
}
