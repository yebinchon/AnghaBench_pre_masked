
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_7__ {size_t curbytes; int curobjs; int lg_maxobjs; int first; TYPE_2__* objs; } ;
typedef TYPE_1__ quarantine_t ;
struct TYPE_8__ {size_t usize; void* ptr; } ;
typedef TYPE_2__ quarantine_obj_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,size_t) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,void*,int *,int) ;
 int VAR_4 ;
 size_t FUNC_5 (void*,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (void*,int,size_t) ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_8 (int *,TYPE_1__*,size_t) ;
 TYPE_1__* FUNC_9 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ) ;

void
FUNC_12(tsd_t *VAR_7, void *VAR_8)
{
 quarantine_t *VAR_9;
 size_t VAR_10 = FUNC_5(VAR_8, VAR_2);

 FUNC_3(VAR_1);
 FUNC_2(VAR_6);

 if ((VAR_9 = FUNC_10(VAR_7)) == ((void*)0)) {
  FUNC_4(VAR_7, VAR_8, ((void*)0), 0);
  return;
 }




 if (VAR_9->curbytes + VAR_10 > VAR_6) {
  size_t VAR_11 = (VAR_6 >= VAR_10) ? VAR_6
      - VAR_10 : 0;
  FUNC_8(VAR_7, VAR_9, VAR_11);
 }

 if (VAR_9->curobjs == (FUNC_0(1) << VAR_9->lg_maxobjs))
  VAR_9 = FUNC_9(VAR_7, VAR_9);

 FUNC_2(VAR_9->curobjs < (FUNC_0(1) << VAR_9->lg_maxobjs));

 if (VAR_9->curbytes + VAR_10 <= VAR_6) {
  size_t VAR_12 = (VAR_9->first + VAR_9->curobjs) &
      ((FUNC_0(1) << VAR_9->lg_maxobjs) - 1);
  quarantine_obj_t *VAR_13 = &VAR_9->objs[VAR_12];
  VAR_13->ptr = VAR_8;
  VAR_13->usize = VAR_10;
  VAR_9->curbytes += VAR_10;
  VAR_9->curobjs++;
  if (VAR_1 && FUNC_11(VAR_5)) {




   if ((!VAR_3 || FUNC_6(!VAR_4))
       && VAR_10 <= VAR_0)
    FUNC_1(VAR_8, VAR_10);
   else
    FUNC_7(VAR_8, 0x5a, VAR_10);
  }
 } else {
  FUNC_2(VAR_9->curbytes == 0);
  FUNC_4(VAR_7, VAR_8, ((void*)0), 0);
 }
}
