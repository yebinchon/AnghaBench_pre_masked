
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psynch_cvclrprepost_args {int flags; int preposeq; int prepocnt; int cvsgen; int cvugen; int cvgen; int cv; } ;
typedef int proc_t ;
struct TYPE_2__ {int (* psynch_cvclrprepost ) (int ,int ,int ,int ,int ,int ,int ,int ,int*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int*) ;

int
FUNC_1(proc_t VAR_1, struct psynch_cvclrprepost_args * VAR_2, int *VAR_3)
{
 return VAR_0->psynch_cvclrprepost(VAR_1, VAR_2->cv, VAR_2->cvgen, VAR_2->cvugen, VAR_2->cvsgen, VAR_2->prepocnt, VAR_2->preposeq, VAR_2->flags, VAR_3);
}
