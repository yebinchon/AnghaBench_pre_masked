
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (long long,unsigned int) ;

unsigned long FUNC_3(unsigned int VAR_0, u32 VAR_1)
{
 long long VAR_2;
 int VAR_3;
 unsigned int VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_4 = (VAR_0 >> 10) & 0xf;
 VAR_5 = VAR_0 & 0x3ff;
 VAR_6 = (VAR_0 >> 16) & 0x3ff;
 VAR_7 = (VAR_0 >> 26) & 0xf;

 VAR_4 = VAR_4 <= 5 ? 5 : VAR_4;

 VAR_3 = VAR_5;




 if (!FUNC_0() && !FUNC_1() && VAR_5 >= 0x200)
  VAR_3 = 0x400 - VAR_5;

 VAR_1 *= 2;
 VAR_1 /= VAR_7 + 1;

 VAR_2 = (unsigned long long)VAR_1 * VAR_3;

 FUNC_2(VAR_2, VAR_6 + 1);

 if (!FUNC_0() && !FUNC_1() && VAR_5 >= 0x200)
  VAR_2 = -VAR_2;

 VAR_2 = (VAR_1 * VAR_4) + VAR_2;

 return VAR_2;
}
