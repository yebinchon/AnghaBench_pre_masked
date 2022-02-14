
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT16 ;
struct TYPE_2__ {int writebuffsel; int* writebuff1; int* writebuff0; int length; scalar_t__ stereo; void* ym_active_chs; } ;


 void* FUNC_0 (int*,int,scalar_t__,int) ;
 int FUNC_1 (int,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_2(int *VAR_1)
{
 int VAR_2, VAR_3;
 int VAR_4 = 0;
 UINT16 *VAR_5;

 if (VAR_0->writebuffsel == 1) {
  VAR_5 = VAR_0->writebuff1;
 } else {
  VAR_5 = VAR_0->writebuff0;
 }


 for (VAR_2 = 2048/2; VAR_2 > 0; VAR_2--) {
  UINT16 VAR_6;
  VAR_3 = *(int *)VAR_5;
  VAR_6 = VAR_3;
  VAR_5++;
  if (VAR_6 == 0xffff) break;
  if (VAR_6 == 0xfffe) { VAR_4=1; break; }
  FUNC_1(VAR_6 >> 8, VAR_6);
  VAR_6 = (VAR_3>>16);
  VAR_5++;
  if (VAR_6 == 0xffff) break;
  if (VAR_6 == 0xfffe) { VAR_4=1; break; }
  FUNC_1(VAR_6 >> 8, VAR_6);
 }

 if (VAR_4)
 {
  int VAR_7 = VAR_0->length / 2;
  VAR_0->ym_active_chs =
   FUNC_0(VAR_1, VAR_7, VAR_0->stereo, 1);

  for (VAR_2 *= 2; VAR_2 > 0; VAR_2--) {
   UINT16 VAR_8 = *VAR_5++;
   if (VAR_8 == 0xffff) break;
   FUNC_1(VAR_8 >> 8, VAR_8);
  }

  VAR_1 += VAR_0->stereo ? VAR_7*2 : VAR_7;
  VAR_7 = VAR_0->length - VAR_7;

  VAR_0->ym_active_chs =
   FUNC_0(VAR_1, VAR_7, VAR_0->stereo, 1);
 } else {
  VAR_0->ym_active_chs =
   FUNC_0(VAR_1, VAR_0->length, VAR_0->stereo, 1);
 }
}
