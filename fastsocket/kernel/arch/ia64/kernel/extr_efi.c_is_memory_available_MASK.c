
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int attribute; int type; } ;
typedef TYPE_1__ efi_memory_desc_t ;







 int VAR_0 ;

__attribute__((used)) static int
FUNC_0 (efi_memory_desc_t *VAR_1)
{
 if (!(VAR_1->attribute & VAR_0))
  return 0;

 switch (VAR_1->type) {
       case 129:
       case 128:
       case 132:
       case 131:
       case 130:
  return 1;
 }
 return 0;
}
