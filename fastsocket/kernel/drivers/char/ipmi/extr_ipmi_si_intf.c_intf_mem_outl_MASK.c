
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_sm_io {unsigned char regshift; unsigned int regspacing; scalar_t__ addr; } ;


 int FUNC_0 (unsigned char,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct si_sm_io *VAR_0, unsigned int VAR_1,
       unsigned char VAR_2)
{
 FUNC_0(VAR_2 << VAR_0->regshift, (VAR_0->addr)+(VAR_1 * VAR_0->regspacing));
}
