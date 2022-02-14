
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char const*) ;
 int FUNC_1 (unsigned char const*) ;

unsigned long FUNC_2(unsigned long VAR_0, const unsigned char *VAR_1, unsigned int VAR_2)
{
 if (VAR_1 == 0) return 0L;
 VAR_0 = VAR_0 ^ 0xffffffffL;
 while (VAR_2 >= 8)
 {
 FUNC_1(VAR_1);
 VAR_2 -= 8;
 }
 if (VAR_2) do {
 FUNC_0(VAR_1);
 } while (--VAR_2);
 return VAR_0 ^ 0xffffffffL;
}
