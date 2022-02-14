
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_4__ {size_t first; int lg_maxobjs; int curobjs; int curbytes; TYPE_2__* objs; } ;
typedef TYPE_1__ quarantine_t ;
struct TYPE_5__ {scalar_t__ usize; int ptr; } ;
typedef TYPE_2__ quarantine_obj_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int *,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(tsd_t *VAR_1, quarantine_t *VAR_2)
{
 quarantine_obj_t *VAR_3 = &VAR_2->objs[VAR_2->first];
 FUNC_1(VAR_3->usize == FUNC_3(VAR_3->ptr, VAR_0));
 FUNC_2(VAR_1, VAR_3->ptr, ((void*)0), 0);
 VAR_2->curbytes -= VAR_3->usize;
 VAR_2->curobjs--;
 VAR_2->first = (VAR_2->first + 1) & ((FUNC_0(1) <<
     VAR_2->lg_maxobjs) - 1);
}
