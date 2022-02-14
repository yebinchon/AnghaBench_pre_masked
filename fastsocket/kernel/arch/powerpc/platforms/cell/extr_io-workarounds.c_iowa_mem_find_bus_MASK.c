
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iowa_bus {int dummy; } ;
typedef int pte_t ;
struct TYPE_2__ {int pgd; } ;
typedef int PCI_IO_ADDR ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (int const) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int * FUNC_2 (int ,unsigned long) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 struct iowa_bus* VAR_5 ;
 struct iowa_bus* FUNC_3 (unsigned long,unsigned long) ;
 unsigned long FUNC_4 (int ) ;

struct iowa_bus *FUNC_5(const PCI_IO_ADDR VAR_6)
{
 struct iowa_bus *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_6);

 if (VAR_8 && VAR_8 <= VAR_4)
  VAR_7 = &VAR_5[VAR_8 - 1];
 else {
  unsigned long VAR_9, VAR_10;
  pte_t *VAR_11;

  VAR_9 = (unsigned long)FUNC_0(VAR_6);
  if (VAR_9 < VAR_1 || VAR_9 >= VAR_2)
   return ((void*)0);

  VAR_11 = FUNC_2(VAR_3.pgd, VAR_9);
  if (VAR_11 == ((void*)0))
   VAR_10 = 0;
  else
   VAR_10 = FUNC_4(*VAR_11) << VAR_0;
  VAR_7 = FUNC_3(VAR_9, VAR_10);

  if (VAR_7 == ((void*)0))
   return ((void*)0);
 }

 return VAR_7;
}
