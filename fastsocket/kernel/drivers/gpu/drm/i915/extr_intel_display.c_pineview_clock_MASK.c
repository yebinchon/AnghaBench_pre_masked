
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int m; int m2; int p; int p1; int p2; int vco; int n; int dot; } ;
typedef TYPE_1__ intel_clock_t ;



__attribute__((used)) static void FUNC_0(int VAR_0, intel_clock_t *VAR_1)
{
 VAR_1->m = VAR_1->m2 + 2;
 VAR_1->p = VAR_1->p1 * VAR_1->p2;
 VAR_1->vco = VAR_0 * VAR_1->m / VAR_1->n;
 VAR_1->dot = VAR_1->vco / VAR_1->p;
}
