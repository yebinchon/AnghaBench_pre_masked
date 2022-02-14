
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_3(void)
{
 uint32_t VAR_6 = VAR_0;
 unsigned int VAR_7 = 0, VAR_8 = 0;

 if (VAR_6 & (VAR_3 | VAR_4))
  VAR_7 = FUNC_1(VAR_6);

 if (VAR_6 & (VAR_1 | VAR_2))
  VAR_8 = FUNC_0(VAR_6);

 VAR_5 = 1 << (11 + FUNC_2(VAR_8, VAR_7));
}
