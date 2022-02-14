
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mask_set; } ;
struct TYPE_3__ {int set; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,int *) ;
 int FUNC_3 () ;
 unsigned long FUNC_4 (unsigned int) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__** VAR_1 ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_2)
{
 unsigned long VAR_3, VAR_4;
 int VAR_5 = FUNC_3();

 VAR_3 = FUNC_4(VAR_2);
 FUNC_1(VAR_4);
 if (VAR_2 > 15)
  FUNC_2(VAR_3, &VAR_0->mask_set);
 else
  FUNC_2(VAR_3, &VAR_1[VAR_5]->set);
 FUNC_0(VAR_4);
}
