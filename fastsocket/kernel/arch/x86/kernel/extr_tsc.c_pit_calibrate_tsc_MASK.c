
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
typedef int u32 ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static unsigned long FUNC_4(u32 VAR_1, unsigned long VAR_2, int VAR_3)
{
 u64 VAR_4, VAR_5, VAR_6, VAR_7;
 unsigned long VAR_8, VAR_9;
 int VAR_10;


 FUNC_3((FUNC_2(0x61) & ~0x02) | 0x01, 0x61);






 FUNC_3(0xb0, 0x43);
 FUNC_3(VAR_1 & 0xff, 0x42);
 FUNC_3(VAR_1 >> 8, 0x42);

 VAR_4 = VAR_5 = VAR_6 = FUNC_1();

 VAR_10 = 0;
 VAR_9 = 0;
 VAR_8 = VAR_0;
 while ((FUNC_2(0x61) & 0x20) == 0) {
  VAR_6 = FUNC_1();
  VAR_7 = VAR_6 - VAR_4;
  VAR_4 = VAR_6;
  if ((unsigned long) VAR_7 < VAR_8)
   VAR_8 = (unsigned int) VAR_7;
  if ((unsigned long) VAR_7 > VAR_9)
   VAR_9 = (unsigned int) VAR_7;
  VAR_10++;
 }
 if (VAR_10 < VAR_3 || VAR_9 > 10 * VAR_8)
  return VAR_0;


 VAR_7 = VAR_6 - VAR_5;
 FUNC_0(VAR_7, VAR_2);
 return VAR_7;
}
