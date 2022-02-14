
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_2__ {int* writebuff0; int writebuffsel; int* writebuff1; } ;
typedef int INT32 ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_4 (int ) ;
 int VAR_4 ;

int FUNC_5(int *VAR_5, int *VAR_6)
{
 UINT8 *VAR_7, *VAR_8;
 VAR_8 = FUNC_1();
 VAR_7 = (UINT8 *) VAR_3->writebuff0;

 if (*(UINT32 *)(VAR_8 + 0x100) != 0x41534d59)
  return -1;

 *VAR_5 = *(INT32 *)(VAR_8 + 0x108);
 *VAR_6 = *(INT32 *)(VAR_8 + 0x10c);

 if (FUNC_0(VAR_2)) FUNC_4(VAR_2);


 if (VAR_3->writebuffsel == 1) {
  VAR_3->writebuff0[VAR_4 & 0xffff] = 0xffff;
 } else {
  VAR_3->writebuff1[VAR_4 & 0xffff] = 0xffff;
 }
 VAR_3->writebuffsel ^= 1;
 VAR_4 = 0;
 FUNC_2(VAR_1);
 if (FUNC_0(VAR_1)) FUNC_4(VAR_1);

 FUNC_3(VAR_7, VAR_8, 0x200);

 FUNC_2(VAR_0);
 if (FUNC_0(VAR_0)) FUNC_4(VAR_0);

 return 0;
}
