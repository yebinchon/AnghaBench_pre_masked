
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int id; } ;
typedef TYPE_1__ insn_map ;


 unsigned short* FUNC_0 (TYPE_1__ const*,unsigned int) ;

unsigned short FUNC_1(const insn_map *VAR_0, unsigned int VAR_1, unsigned int VAR_2, unsigned short **VAR_3)
{
 if (VAR_2 > VAR_0[VAR_1 - 1].id)
  return 0;

 if (*VAR_3 == ((void*)0))
  *VAR_3 = FUNC_0(VAR_0, VAR_1);

 return (*VAR_3)[VAR_2];
}
