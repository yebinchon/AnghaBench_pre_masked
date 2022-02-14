
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pte_t ;
struct TYPE_2__ {int mm; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (unsigned long,int ,int,int,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static pte_t *FUNC_4(unsigned long VAR_1, int VAR_2)
{
 pte_t *VAR_3 = FUNC_3(VAR_0->mm, VAR_1);
 int VAR_4, VAR_5;

 if ((VAR_3 == ((void*)0)) || !FUNC_1(*VAR_3) ||
     (VAR_2 && !FUNC_2(*VAR_3))) {
  VAR_4 = FUNC_0(VAR_1, 0, VAR_2, 1, &VAR_5);
  if (VAR_4)
   return ((void*)0);
  VAR_3 = FUNC_3(VAR_0->mm, VAR_1);
 }
 if (!FUNC_1(*VAR_3))
  VAR_3 = ((void*)0);

 return VAR_3;
}
