
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int u32 ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (int*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_0, void *VAR_1, int VAR_2)
{
 uint8_t *VAR_3 = VAR_1;
 union {
  uint32_t l;
  uint16_t w;
  uint8_t b[4];
 } VAR_4;

 if ((u32)VAR_3&1 && VAR_2>=1) {
  VAR_4.b[0] = FUNC_3(*VAR_0++) << 4;
  VAR_4.b[0] |= FUNC_3(*VAR_0++);
  if (!FUNC_0(VAR_3,VAR_4.b[0]))
   return ((void*)0);
  VAR_3++;
  VAR_2--;
 }

 if ((u32)VAR_3&3 && VAR_2>=2) {
  VAR_4.b[0] = FUNC_3(*VAR_0++) << 4;
  VAR_4.b[0] |= FUNC_3(*VAR_0++);
  VAR_4.b[1] = FUNC_3(*VAR_0++) << 4;
  VAR_4.b[1] |= FUNC_3(*VAR_0++);
  if (!FUNC_2(VAR_3,VAR_4.w))
   return ((void*)0);
  VAR_3 += 2;
  VAR_2 -= 2;
 }

 while (VAR_2>=4) {
  VAR_4.b[0] = FUNC_3(*VAR_0++) << 4;
  VAR_4.b[0] |= FUNC_3(*VAR_0++);
  VAR_4.b[1] = FUNC_3(*VAR_0++) << 4;
  VAR_4.b[1] |= FUNC_3(*VAR_0++);
  VAR_4.b[2] = FUNC_3(*VAR_0++) << 4;
  VAR_4.b[2] |= FUNC_3(*VAR_0++);
  VAR_4.b[3] = FUNC_3(*VAR_0++) << 4;
  VAR_4.b[3] |= FUNC_3(*VAR_0++);
  if (!FUNC_1(VAR_3,VAR_4.l))
   return ((void*)0);
  VAR_3 += 4;
  VAR_2 -= 4;
 }

 if (VAR_2>=2) {
  VAR_4.b[0] = FUNC_3(*VAR_0++) << 4;
  VAR_4.b[0] |= FUNC_3(*VAR_0++);
  VAR_4.b[1] = FUNC_3(*VAR_0++) << 4;
  VAR_4.b[1] |= FUNC_3(*VAR_0++);
  if (!FUNC_2(VAR_3,VAR_4.w))
   return ((void*)0);
  VAR_3 += 2;
  VAR_2 -= 2;
 }

 if (VAR_2>=1) {
  VAR_4.b[0] = FUNC_3(*VAR_0++) << 4;
  VAR_4.b[0] |= FUNC_3(*VAR_0++);
  if (!FUNC_0(VAR_3,VAR_4.b[0]))
   return ((void*)0);
 }

 return (char *) VAR_0;
}
