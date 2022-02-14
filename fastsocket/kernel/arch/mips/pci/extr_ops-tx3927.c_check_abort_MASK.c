
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pcistat; int pcistatim; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static inline int FUNC_1(void)
{
 if (VAR_3->pcistat & VAR_2) {
  VAR_3->pcistat |= VAR_2;
  VAR_3->pcistatim |= VAR_2;

  FUNC_0();
  return VAR_0;
 }
 return VAR_1;
}
