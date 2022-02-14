
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_8__ {int lg_maxobjs; size_t curobjs; size_t first; int * objs; int curbytes; } ;
typedef TYPE_1__ quarantine_t ;
typedef int quarantine_obj_t ;


 size_t FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__*,int ,int) ;
 int FUNC_2 (int *,int *,size_t) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,TYPE_1__*) ;

__attribute__((used)) static quarantine_t *
FUNC_7(tsd_t *VAR_0, quarantine_t *VAR_1)
{
 quarantine_t *VAR_2;

 VAR_2 = FUNC_4(VAR_0, VAR_1->lg_maxobjs + 1);
 if (VAR_2 == ((void*)0)) {
  FUNC_3(VAR_0, VAR_1);
  return (VAR_1);
 }

 VAR_2->curbytes = VAR_1->curbytes;
 VAR_2->curobjs = VAR_1->curobjs;
 if (VAR_1->first + VAR_1->curobjs <= (FUNC_0(1) <<
     VAR_1->lg_maxobjs)) {

  FUNC_2(VAR_2->objs, &VAR_1->objs[VAR_1->first],
      VAR_1->curobjs * sizeof(quarantine_obj_t));
 } else {

  size_t VAR_3 = (FUNC_0(1) << VAR_1->lg_maxobjs) -
      VAR_1->first;
  size_t VAR_4 = VAR_1->curobjs - VAR_3;

  FUNC_2(VAR_2->objs, &VAR_1->objs[VAR_1->first], VAR_3
      * sizeof(quarantine_obj_t));
  FUNC_2(&VAR_2->objs[VAR_3], VAR_1->objs, VAR_4 *
      sizeof(quarantine_obj_t));
 }
 FUNC_1(VAR_0, VAR_1, FUNC_5(VAR_0, 0), 1);

 FUNC_6(VAR_0, VAR_2);
 return (VAR_2);
}
