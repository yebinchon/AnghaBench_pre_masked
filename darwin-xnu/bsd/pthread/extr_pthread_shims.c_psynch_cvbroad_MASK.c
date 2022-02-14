
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct psynch_cvbroad_args {int tid; int mugen; int mutex; int flags; int cvudgen; int cvlsgen; int cv; } ;
typedef int proc_t ;
struct TYPE_2__ {int (* psynch_cvbroad ) (int ,int ,int ,int ,int ,int ,int ,int ,int *) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int *) ;

int
FUNC_1(proc_t VAR_1, struct psynch_cvbroad_args *VAR_2, uint32_t *VAR_3)
{
 return VAR_0->psynch_cvbroad(VAR_1, VAR_2->cv, VAR_2->cvlsgen, VAR_2->cvudgen, VAR_2->flags, VAR_2->mutex, VAR_2->mugen, VAR_2->tid, VAR_3);
}
