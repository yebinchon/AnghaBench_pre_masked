
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;

void FUNC_0(unsigned long VAR_1)
{
 int VAR_2;
 char *VAR_3;
 unsigned long VAR_4;
 unsigned long VAR_5, VAR_6;

 VAR_2 = *(int *)VAR_1;
 VAR_1 += sizeof(int) + (VAR_2 + 1) * sizeof(char *);

 do {
  VAR_3 = *(char **)VAR_1;
  VAR_1 += sizeof(char *);
 } while (VAR_3 != ((void*)0));
 VAR_5 = VAR_1;

 do {
  VAR_4 = *(unsigned long *)VAR_1;
  VAR_1 += 2 * sizeof(unsigned long);
 } while (VAR_4 != VAR_0);
 VAR_6 = ((VAR_5 + 15) & ~15) - VAR_5;
 if (VAR_6 != 0) {
  do {
   VAR_1 -= sizeof(unsigned long);
   VAR_4 = *(unsigned long *)VAR_1;
   *(unsigned long *)(VAR_1 + VAR_6) = VAR_4;
  } while (VAR_1 > VAR_5);
 }
}
