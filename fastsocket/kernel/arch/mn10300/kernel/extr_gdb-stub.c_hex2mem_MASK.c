
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 scalar_t__ FUNC_0 (int,int*) ;
 scalar_t__ FUNC_1 (int,int*) ;
 scalar_t__ FUNC_2 (int,int*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static
const char *FUNC_4(const char *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
 u8 *VAR_4 = VAR_1;
 union {
  u32 val;
  u8 b[4];
 } VAR_5;

 if ((u32) VAR_4 & 1 && VAR_2 >= 1) {
  VAR_5.b[0] = FUNC_3(*VAR_0++) << 4;
  VAR_5.b[0] |= FUNC_3(*VAR_0++);
  if (FUNC_0(VAR_5.val, VAR_4) != 0)
   return 0;
  VAR_4++;
  VAR_2--;
 }

 if ((u32) VAR_4 & 3 && VAR_2 >= 2) {
  VAR_5.b[0] = FUNC_3(*VAR_0++) << 4;
  VAR_5.b[0] |= FUNC_3(*VAR_0++);
  VAR_5.b[1] = FUNC_3(*VAR_0++) << 4;
  VAR_5.b[1] |= FUNC_3(*VAR_0++);
  if (FUNC_2(VAR_5.val, VAR_4) != 0)
   return 0;
  VAR_4 += 2;
  VAR_2 -= 2;
 }

 while (VAR_2 >= 4) {
  VAR_5.b[0] = FUNC_3(*VAR_0++) << 4;
  VAR_5.b[0] |= FUNC_3(*VAR_0++);
  VAR_5.b[1] = FUNC_3(*VAR_0++) << 4;
  VAR_5.b[1] |= FUNC_3(*VAR_0++);
  VAR_5.b[2] = FUNC_3(*VAR_0++) << 4;
  VAR_5.b[2] |= FUNC_3(*VAR_0++);
  VAR_5.b[3] = FUNC_3(*VAR_0++) << 4;
  VAR_5.b[3] |= FUNC_3(*VAR_0++);
  if (FUNC_1(VAR_5.val, VAR_4) != 0)
   return 0;
  VAR_4 += 4;
  VAR_2 -= 4;
 }

 if (VAR_2 >= 2) {
  VAR_5.b[0] = FUNC_3(*VAR_0++) << 4;
  VAR_5.b[0] |= FUNC_3(*VAR_0++);
  VAR_5.b[1] = FUNC_3(*VAR_0++) << 4;
  VAR_5.b[1] |= FUNC_3(*VAR_0++);
  if (FUNC_2(VAR_5.val, VAR_4) != 0)
   return 0;
  VAR_4 += 2;
  VAR_2 -= 2;
 }

 if (VAR_2 >= 1) {
  VAR_5.b[0] = FUNC_3(*VAR_0++) << 4;
  VAR_5.b[0] |= FUNC_3(*VAR_0++);
  if (FUNC_0(VAR_5.val, VAR_4) != 0)
   return 0;
 }

 return VAR_0;
}
