
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_devdata {TYPE_1__* cspec; } ;
struct TYPE_2__ {int portcntrs; int cntrs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct qib_devdata*) ;

__attribute__((used)) static void FUNC_2(struct qib_devdata *VAR_0)
{
 FUNC_1(VAR_0);
 FUNC_0(VAR_0->cspec->cntrs);
 FUNC_0(VAR_0->cspec->portcntrs);
}
