
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct m66592 {TYPE_1__* pdata; scalar_t__ reg; } ;
struct TYPE_2__ {scalar_t__ on_chip; } ;


 int FUNC_0 (unsigned long,void*,unsigned long) ;
 int FUNC_1 (unsigned long,void*,unsigned long) ;

__attribute__((used)) static inline void FUNC_2(struct m66592 *VAR_0,
  unsigned long VAR_1,
  void *VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4 = (unsigned long)VAR_0->reg + VAR_1;

 if (VAR_0->pdata->on_chip) {
  VAR_3 = (VAR_3 + 3) / 4;
  FUNC_0(VAR_4, VAR_2, VAR_3);
 } else {
  VAR_3 = (VAR_3 + 1) / 2;
  FUNC_1(VAR_4, VAR_2, VAR_3);
 }
}
