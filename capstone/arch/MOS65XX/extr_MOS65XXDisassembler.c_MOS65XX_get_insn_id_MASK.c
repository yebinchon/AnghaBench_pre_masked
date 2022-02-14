
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int cs_struct ;
struct TYPE_4__ {int id; } ;
typedef TYPE_1__ cs_insn ;
struct TYPE_5__ {int ins; } ;


 TYPE_2__* VAR_0 ;

void FUNC_0(cs_struct *VAR_1, cs_insn *VAR_2, unsigned int VAR_3)
{
 if (VAR_3 < 256) {
  VAR_2->id = VAR_0[VAR_3].ins;
 }
}
