
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* mach_timebase_info_t ;
struct TYPE_6__ {scalar_t__ numer; scalar_t__ denom; } ;
typedef TYPE_2__ mach_timebase_info_data_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_5__ {scalar_t__ numer; scalar_t__ denom; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;

kern_return_t
FUNC_1(mach_timebase_info_t VAR_1){
    static mach_timebase_info_data_t VAR_2;





    if (VAR_2.numer == 0 || VAR_2.denom == 0){
        kern_return_t VAR_3 = FUNC_0(&VAR_2);
        if (VAR_3 != VAR_0) return VAR_3;
    }

 VAR_1->numer = VAR_2.numer;
 VAR_1->denom = VAR_2.denom;

    return VAR_0;
}
