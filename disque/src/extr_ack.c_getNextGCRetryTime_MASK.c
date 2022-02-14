
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ mstime_t ;
struct TYPE_4__ {int gc_retry; } ;
typedef TYPE_1__ job ;
struct TYPE_5__ {scalar_t__ mstime; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_2__ VAR_2 ;

mstime_t FUNC_1(job *VAR_3) {
    mstime_t VAR_4 = VAR_1 * (1 << VAR_3->gc_retry);
    if (VAR_4 > VAR_0) VAR_4 = VAR_0;


    return VAR_2.mstime + VAR_4 + FUNC_0(500);
}
