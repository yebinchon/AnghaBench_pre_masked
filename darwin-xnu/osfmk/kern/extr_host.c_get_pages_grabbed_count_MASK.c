
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_1__* processor_t ;
struct TYPE_4__ {struct TYPE_4__* processor_list; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

uint64_t
FUNC_3(void)
{
 processor_t VAR_3;
        uint64_t VAR_4 = 0;

 FUNC_1(&VAR_2);

 VAR_3 = VAR_1;

 while (VAR_3) {
         VAR_4 += FUNC_0(VAR_3, VAR_0);
  VAR_3 = VAR_3->processor_list;
 }
 FUNC_2(&VAR_2);

 return(VAR_4);
}
