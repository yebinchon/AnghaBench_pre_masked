
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned short id; } ;
typedef TYPE_1__ insn_map ;


 scalar_t__ FUNC_0 (unsigned short,int) ;

__attribute__((used)) static unsigned short *FUNC_1(const insn_map *VAR_0, unsigned int VAR_1)
{

 unsigned short VAR_2 = VAR_0[VAR_1 - 1].id;
 unsigned short VAR_3;

 unsigned short *VAR_4 = (unsigned short *)FUNC_0(VAR_2 + 1, sizeof(*VAR_4));

 for (VAR_3 = 1; VAR_3 < VAR_1; VAR_3++)
  VAR_4[VAR_0[VAR_3].id] = VAR_3;

 return VAR_4;
}
