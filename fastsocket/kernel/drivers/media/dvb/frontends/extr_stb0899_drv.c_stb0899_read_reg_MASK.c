
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stb0899_state {int dummy; } ;


 int FUNC_0 (struct stb0899_state*,unsigned int) ;

int FUNC_1(struct stb0899_state *VAR_0, unsigned int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);





 if ((VAR_1 != 0xf2ff) && (VAR_1 != 0xf6ff) &&
     (((VAR_1 & 0xff00) == 0xf200) || ((VAR_1 & 0xff00) == 0xf600)))
  FUNC_0(VAR_0, (VAR_1 | 0x00ff));

 return VAR_2;
}
