
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct psynch_cvwait_args {int nsec; int sec; int flags; int mugen; int mutex; int cvugen; int cvlsgen; int cv; } ;
typedef int proc_t ;
struct TYPE_2__ {int (* psynch_cvwait ) (int ,int ,int ,int ,int ,int ,int ,int ,int ,int *) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int *) ;

int
FUNC_1(proc_t VAR_1, struct psynch_cvwait_args * VAR_2, uint32_t * VAR_3)
{
 return VAR_0->psynch_cvwait(VAR_1, VAR_2->cv, VAR_2->cvlsgen, VAR_2->cvugen, VAR_2->mutex, VAR_2->mugen, VAR_2->flags, VAR_2->sec, VAR_2->nsec, VAR_3);
}
