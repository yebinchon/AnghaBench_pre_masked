
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned long) ;

void FUNC_1 (unsigned long VAR_0, void *VAR_1, unsigned long VAR_2)
{
 unsigned char *VAR_3;

 VAR_3 = (unsigned char *)VAR_1;

 while (((unsigned long)VAR_3) & 0x3) {
  if (!VAR_2)
   return;
  VAR_2--;
  *VAR_3 = FUNC_0(VAR_0);
  VAR_3++;
 }

 while (VAR_2 >= 4) {
  unsigned int VAR_4;
  VAR_2 -= 4;
  VAR_4 = FUNC_0(VAR_0) << 24;
  VAR_4 |= FUNC_0(VAR_0) << 16;
  VAR_4 |= FUNC_0(VAR_0) << 8;
  VAR_4 |= FUNC_0(VAR_0);
  *(unsigned int *) VAR_3 = VAR_4;
  VAR_3 += 4;
 }

 while (VAR_2) {
  --VAR_2;
  *VAR_3 = FUNC_0(VAR_0);
  VAR_3++;
 }
}
