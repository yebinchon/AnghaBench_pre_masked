
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int attribute; } ;
typedef TYPE_1__ efi_memory_desc_t ;


 int VAR_0 ;
 unsigned long FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (unsigned long) ;

u64
FUNC_2 (unsigned long VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3 = VAR_1 + VAR_2;
 efi_memory_desc_t *VAR_4 = FUNC_1(VAR_1);
 u64 VAR_5;

 if (!VAR_4)
  return 0;





 VAR_5 = VAR_4->attribute & ~VAR_0;
 do {
  unsigned long VAR_6 = FUNC_0(VAR_4);

  if (VAR_3 <= VAR_6)
   return VAR_5;

  VAR_4 = FUNC_1(VAR_6);
  if (!VAR_4 || (VAR_4->attribute & ~VAR_0) != VAR_5)
   return 0;
 } while (VAR_4);
 return 0;
}
