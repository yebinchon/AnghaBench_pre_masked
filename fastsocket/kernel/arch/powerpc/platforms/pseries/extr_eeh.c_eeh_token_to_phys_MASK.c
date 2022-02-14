
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pte_t ;
struct TYPE_2__ {int pgd; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,unsigned long) ;
 TYPE_1__ VAR_2 ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static inline unsigned long FUNC_2(unsigned long VAR_3)
{
 pte_t *VAR_4;
 unsigned long VAR_5;

 VAR_4 = FUNC_0(VAR_2.pgd, VAR_3);
 if (!VAR_4)
  return VAR_3;
 VAR_5 = FUNC_1(*VAR_4) << VAR_0;

 return VAR_5 | (VAR_3 & (VAR_1-1));
}
