
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_2__ {scalar_t__ writebuff0; } ;
typedef int INT32 ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (char*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_5 (int ) ;

void FUNC_6(int VAR_2, int VAR_3)
{
 UINT8 *VAR_4, *VAR_5;
 FUNC_2(VAR_0);
 if (FUNC_0(VAR_0)) FUNC_5(VAR_0);

 VAR_4 = (UINT8 *) VAR_1->writebuff0;
 VAR_5 = FUNC_1();
 if (*(UINT32 *)(VAR_4 + 0x100) != 0x41534d59) {
  FUNC_4("code940 didn't return valid save data\n");
  return;
 }


 FUNC_3(VAR_5, VAR_4, 0x20);
 FUNC_3(VAR_5 + 0x100, VAR_4 + 0x100, 0x30);
 FUNC_3(VAR_5 + 0x0b8, VAR_4 + 0x0b8, 0x48);
 FUNC_3(VAR_5 + 0x1b8, VAR_4 + 0x1b8, 0x48);
 *(INT32 *)(VAR_5 + 0x108) = VAR_2;
 *(INT32 *)(VAR_5 + 0x10c) = VAR_3;
}
