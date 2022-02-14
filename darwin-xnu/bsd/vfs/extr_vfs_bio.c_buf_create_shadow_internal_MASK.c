
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int caddr_t ;
typedef TYPE_1__* buf_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_11__ {int b_flags; int b_lflags; scalar_t__ b_data_ref; void (* b_iodone ) (TYPE_1__*,void*) ;uintptr_t b_datap; scalar_t__ b_shadow_ref; struct TYPE_11__* b_data_store; int b_bcount; int b_bufsize; struct TYPE_11__* b_shadow; int b_orig; void* b_transaction; int b_lblkno; int b_blkno; int b_vp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int,TYPE_1__*,scalar_t__,int ,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_13 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,TYPE_1__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static buf_t
FUNC_7(buf_t VAR_14, boolean_t VAR_15, uintptr_t VAR_16, void (*VAR_17)(buf_t, void *), void *VAR_18, int VAR_19)
{
        buf_t VAR_20;

 FUNC_0(0xbbbbc000 | VAR_11, VAR_14, 0, 0, 0, 0);

 if ( !(VAR_14->b_flags & VAR_7) || (VAR_14->b_lflags & VAR_1)) {

  FUNC_0(0xbbbbc000 | VAR_10, VAR_14, 0, 0, 0, 0);
  return (((void*)0));
 }




 VAR_20 = FUNC_1(VAR_14->b_vp, VAR_19);

 VAR_20->b_flags = VAR_14->b_flags & (VAR_7 | VAR_9 | VAR_4 | VAR_8 | VAR_6);
 VAR_20->b_blkno = VAR_14->b_blkno;
 VAR_20->b_lblkno = VAR_14->b_lblkno;

 if (VAR_17) {
         VAR_20->b_transaction = VAR_18;
  VAR_20->b_iodone = VAR_17;
  VAR_20->b_flags |= VAR_5;
 }
 if (VAR_15 == VAR_12) {
  VAR_20->b_bcount = VAR_14->b_bcount;
  VAR_20->b_bufsize = VAR_14->b_bufsize;

  if (VAR_16) {
   VAR_20->b_datap = VAR_16;



  } else {
   VAR_20->b_datap = VAR_14->b_datap;



  }
  *(buf_t *)(&VAR_20->b_orig) = VAR_14;

  FUNC_4(VAR_13);

  VAR_20->b_lflags |= VAR_3;
  VAR_20->b_shadow = VAR_14->b_shadow;
  VAR_14->b_shadow = VAR_20;
  VAR_14->b_shadow_ref++;







  FUNC_5(VAR_13);
 } else {
  if (VAR_16) {



   VAR_20->b_bcount = VAR_14->b_bcount;
   VAR_20->b_bufsize = VAR_14->b_bufsize;
   VAR_20->b_datap = VAR_16;
  } else {
   FUNC_2(VAR_20, VAR_14->b_bcount);

   VAR_20->b_lflags |= VAR_2;
  }
  FUNC_3((caddr_t)VAR_14->b_datap, (caddr_t)VAR_20->b_datap, VAR_14->b_bcount);




 }
 FUNC_0(0xbbbbc000 | VAR_10, VAR_14, VAR_14->b_shadow_ref, 0, VAR_20, 0);

 return (VAR_20);
}
