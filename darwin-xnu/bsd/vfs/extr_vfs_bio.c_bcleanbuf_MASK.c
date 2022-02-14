
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct bufattr {int dummy; } ;
typedef TYPE_1__* buf_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_12__ {int b_tag; int b_flags; int b_lflags; size_t b_whichq; uintptr_t b_datap; int b_attr; scalar_t__ b_validend; scalar_t__ b_validoff; scalar_t__ b_dirtyend; scalar_t__ b_dirtyoff; scalar_t__ b_bcount; scalar_t__ b_resid; scalar_t__ b_error; int * b_iodone; scalar_t__ b_lblkno; scalar_t__ b_blkno; int b_dev; scalar_t__ b_redundancy_flags; void* b_owner; void* b_fsprivate; void* b_upl; scalar_t__ b_bufsize; scalar_t__ b_vp; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int,int) ;
 int VAR_13 ;
 int FUNC_3 (int,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int *,size_t) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_16 ;
 int FUNC_10 (TYPE_1__*) ;
 int VAR_17 ;
 int FUNC_11 (TYPE_1__*) ;
 int * VAR_18 ;
 int FUNC_12 (int *,int) ;
 void* FUNC_13 () ;
 int VAR_19 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (scalar_t__,scalar_t__) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int ,scalar_t__) ;
 int FUNC_19 (int *) ;

int
FUNC_20(buf_t VAR_20, boolean_t VAR_21)
{

 FUNC_8(VAR_20);
 if (FUNC_2(VAR_20->b_flags, VAR_6)) {
  if (VAR_21) {
   FUNC_3(VAR_20->b_lflags, VAR_1);
  }

  FUNC_6(VAR_20);

  FUNC_15(VAR_17);

  FUNC_19(&VAR_18[VAR_3]);



  (void)FUNC_17(VAR_14);

  FUNC_14(VAR_17);

  return (1);
 }







 FUNC_3(VAR_20->b_lflags, VAR_0);
 VAR_16++;

 FUNC_9(VAR_20);




 if (VAR_20->b_vp)
  FUNC_7(VAR_20);

 FUNC_15(VAR_17);

 FUNC_0(VAR_20);

 if (FUNC_2(VAR_20->b_flags, VAR_10))
  FUNC_10(VAR_20);

 FUNC_18(VAR_15, FUNC_16(VAR_20->b_vp, VAR_20->b_bufsize), VAR_20->b_lblkno);

 FUNC_11(VAR_20);


 if (VAR_21) {
  FUNC_14(VAR_17);
  FUNC_1(VAR_20->b_flags, (VAR_10 | VAR_12 | VAR_6 | VAR_9 | VAR_4 | VAR_5 | VAR_11 | VAR_7));
  VAR_20->b_whichq = VAR_2;
  FUNC_4(VAR_20, &VAR_19);
  FUNC_5(VAR_20, &VAR_18[VAR_2], VAR_2);
  FUNC_1(VAR_20->b_lflags, VAR_0);
  VAR_16--;
 } else {

  VAR_20->b_bufsize = 0;
  VAR_20->b_datap = (uintptr_t)((void*)0);
  VAR_20->b_upl = (void *)((void*)0);
  VAR_20->b_fsprivate = (void *)((void*)0);
  VAR_20->b_lflags = VAR_0;
  VAR_20->b_flags = (VAR_20->b_flags & VAR_8);
  VAR_20->b_redundancy_flags = 0;
  VAR_20->b_dev = VAR_13;
  VAR_20->b_blkno = VAR_20->b_lblkno = 0;
  VAR_20->b_iodone = ((void*)0);
  VAR_20->b_error = 0;
  VAR_20->b_resid = 0;
  VAR_20->b_bcount = 0;
  VAR_20->b_dirtyoff = VAR_20->b_dirtyend = 0;
  VAR_20->b_validoff = VAR_20->b_validend = 0;
  FUNC_12(&VAR_20->b_attr, sizeof(struct bufattr));

  FUNC_14(VAR_17);
 }
 return (0);
}
