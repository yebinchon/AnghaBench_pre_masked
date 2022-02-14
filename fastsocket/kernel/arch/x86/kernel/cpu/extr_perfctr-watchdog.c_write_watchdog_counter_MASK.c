
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (unsigned int,int) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_1,
    const char *VAR_2, unsigned VAR_3)
{
 u64 VAR_4 = (u64)VAR_0 * 1000;

 FUNC_0(VAR_4, VAR_3);
 if (VAR_2)
  FUNC_1("setting %s to -0x%08Lx\n", VAR_2, VAR_4);
 FUNC_2(VAR_1, 0 - VAR_4);
}
