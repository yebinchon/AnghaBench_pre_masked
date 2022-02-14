
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_sm_io {unsigned int addr_data; unsigned int regspacing; int regshift; } ;


 int FUNC_0 (unsigned int) ;

__attribute__((used)) static unsigned char FUNC_1(struct si_sm_io *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2 = VAR_0->addr_data;

 return (FUNC_0(VAR_2 + (VAR_1 * VAR_0->regspacing)) >> VAR_0->regshift) & 0xff;
}
