
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const*,unsigned char*,unsigned int,unsigned int) ;
 int FUNC_2 (unsigned char*,unsigned int) ;

__attribute__((used)) static void FUNC_3(const u16 *VAR_0, unsigned char *VAR_1, unsigned int VAR_2,
       unsigned int VAR_3)
{
 unsigned char *VAR_4;

 FUNC_0(!(VAR_3 & 1));

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3 - 1);

 VAR_4 = VAR_1 + FUNC_2(VAR_1, VAR_3 - 1);
 while (VAR_4 > VAR_1 && VAR_4[-1] == ' ')
  VAR_4--;
 *VAR_4 = '\0';
}
