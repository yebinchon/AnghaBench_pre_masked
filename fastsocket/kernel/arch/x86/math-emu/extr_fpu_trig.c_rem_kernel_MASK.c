
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned long long VAR_0, unsigned long long *VAR_1,
         unsigned long long VAR_2, unsigned long long VAR_3, int VAR_4)
{
 int VAR_5;
 unsigned long long VAR_6;

 VAR_6 = VAR_0 << VAR_4;




 asm volatile ("mull %4; subl %%eax,%0; sbbl %%edx,%1":"=m"
        (((unsigned *)&VAR_6)[0]), "=m"(((unsigned *)&VAR_6)[1]),
        "=a"(VAR_5)
        :"2"(((unsigned *)&VAR_2)[0]), "m"(((unsigned *)&VAR_3)[0])
        :"%dx");

 asm volatile ("mull %3; subl %%eax,%0":"=m" (((unsigned *)&VAR_6)[1]),
        "=a"(VAR_5)
        :"1"(((unsigned *)&VAR_2)[1]), "m"(((unsigned *)&VAR_3)[0])
        :"%dx");

 asm volatile ("mull %3; subl %%eax,%0":"=m" (((unsigned *)&VAR_6)[1]),
        "=a"(VAR_5)
        :"1"(((unsigned *)&VAR_2)[0]), "m"(((unsigned *)&VAR_3)[1])
        :"%dx");

 *VAR_1 = VAR_6;
}
