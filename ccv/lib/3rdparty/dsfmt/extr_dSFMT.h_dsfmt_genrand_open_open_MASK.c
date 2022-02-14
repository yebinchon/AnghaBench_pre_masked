
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {scalar_t__ idx; TYPE_1__* status; } ;
typedef TYPE_2__ dsfmt_t ;
struct TYPE_5__ {double* d; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) inline static double FUNC_1(dsfmt_t *VAR_1) {
    double *VAR_2 = &VAR_1->status[0].d[0];
    union {
 double d;
 uint64_t u;
    } VAR_3;

    if (VAR_1->idx >= VAR_0) {
 FUNC_0(VAR_1);
 VAR_1->idx = 0;
    }
    VAR_3.d = VAR_2[VAR_1->idx++];
    VAR_3.u |= 1;
    return VAR_3.d - 1.0;
}
