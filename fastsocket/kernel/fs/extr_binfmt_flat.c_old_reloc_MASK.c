
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t type; scalar_t__ offset; } ;
struct TYPE_7__ {unsigned long value; TYPE_2__ reloc; } ;
typedef TYPE_3__ flat_v2_reloc_t ;
struct TYPE_8__ {TYPE_1__* mm; } ;
struct TYPE_5__ {unsigned long end_data; scalar_t__ start_data; scalar_t__ start_code; } ;





 TYPE_4__* VAR_0 ;
 int FUNC_0 (char*,int,...) ;

void FUNC_1(unsigned long VAR_1)
{



 flat_v2_reloc_t VAR_2;
 unsigned long *VAR_3;

 VAR_2.value = VAR_1;



 VAR_3 = (unsigned long *) (VAR_0->mm->start_data + VAR_2.reloc.offset);
 switch (VAR_2.reloc.type) {
 case 128:
  *VAR_3 += VAR_0->mm->start_code;
  break;
 case 129:
  *VAR_3 += VAR_0->mm->start_data;
  break;
 case 130:
  *VAR_3 += VAR_0->mm->end_data;
  break;
 default:
  FUNC_0("BINFMT_FLAT: Unknown relocation type=%x\n", VAR_2.reloc.type);
  break;
 }




}
