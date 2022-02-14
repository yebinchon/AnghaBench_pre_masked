
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT16 ;
struct TYPE_2__ {int writebuffsel; int* writebuff1; int* writebuff0; } ;


 int FUNC_0 (int,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_1(void)
{
 UINT16 *VAR_1;
 int VAR_2;

 if (VAR_0->writebuffsel == 1) {
  VAR_1 = VAR_0->writebuff1;
 } else {
  VAR_1 = VAR_0->writebuff0;
 }


 for (VAR_2 = 2048; VAR_2 > 0; VAR_2--) {
  UINT16 VAR_3 = *VAR_1++;
  if (VAR_3 == 0xffff) break;
  if (VAR_3 == 0xfffe) continue;
  FUNC_0(VAR_3 >> 8, VAR_3);
 }
}
