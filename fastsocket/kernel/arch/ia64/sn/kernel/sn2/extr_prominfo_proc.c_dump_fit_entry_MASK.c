
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 unsigned int FUNC_2 (unsigned long) ;
 char* FUNC_3 (unsigned int) ;
 int FUNC_4 (char*,char*,unsigned int,char*,int,int,unsigned long,unsigned int) ;

__attribute__((used)) static int FUNC_5(char *VAR_0, unsigned long *VAR_1)
{
 unsigned VAR_2;

 VAR_2 = FUNC_2(VAR_1[1]);
 return FUNC_4(VAR_0, "%02x %-25s %x.%02x %016lx %u\n",
         VAR_2,
         FUNC_3(VAR_2),
         FUNC_0(VAR_1[1]), FUNC_1(VAR_1[1]),
         VAR_1[0],

         (unsigned)(VAR_1[1] & 0xffffff) * 16);
}
