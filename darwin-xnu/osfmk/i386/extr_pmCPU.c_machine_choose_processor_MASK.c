
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* processor_t ;
typedef TYPE_2__* processor_set_t ;
struct TYPE_11__ {TYPE_1__* cpu_processor; } ;
struct TYPE_10__ {int (* pmChooseCPU ) (int,int,int) ;} ;
struct TYPE_9__ {int cpu_set_low; int cpu_set_hi; } ;
struct TYPE_8__ {int cpu_id; } ;


 TYPE_7__* FUNC_0 (int) ;
 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int,int) ;

processor_t
FUNC_2(processor_set_t VAR_2,
    processor_t VAR_3)
{
    int VAR_4;
    int VAR_5;
    int VAR_6;
    int VAR_7;

    if (!VAR_1)
 return(VAR_3);

    if (VAR_2 == ((void*)0)) {
 VAR_4 = -1;
 VAR_5 = -1;
    } else {
 VAR_4 = VAR_2->cpu_set_low;
 VAR_5 = VAR_2->cpu_set_hi;
    }

    if (VAR_3 == ((void*)0))
 VAR_6 = -1;
    else
 VAR_6 = VAR_3->cpu_id;

    if (VAR_0 != ((void*)0)
 && VAR_0->pmChooseCPU != ((void*)0)) {
 VAR_7 = VAR_0->pmChooseCPU(VAR_4, VAR_5, VAR_6);

 if (VAR_7 == -1)
     return(((void*)0));
 return(FUNC_0(VAR_7)->cpu_processor);
    }

    return(VAR_3);
}
