
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timespec {int tv_sec; int tv_nsec; } ;
struct buf {int b_whichq; int b_timestamp; int b_flags; int b_lflags; } ;
typedef struct buf* buf_t ;
struct TYPE_5__ {struct buf* tqh_first; } ;
struct TYPE_4__ {int bufs_sleeps; } ;


 int FUNC_0 (struct buf*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ,int ) ;
 int VAR_14 ;
 scalar_t__ FUNC_3 (struct buf*,int ) ;
 int FUNC_4 (struct buf*,int *) ;
 int FUNC_5 (struct buf*,TYPE_2__*,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* FUNC_6 () ;
 int FUNC_7 (struct buf*) ;
 TYPE_2__* VAR_18 ;
 TYPE_1__ VAR_19 ;
 int VAR_20 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int FUNC_10 (int*,int ,int,char*,struct timespec*) ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int FUNC_11 (char*,struct buf*,int ) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static buf_t
FUNC_13(int VAR_26, int VAR_27, int * VAR_28)
{
 buf_t VAR_29;
 buf_t VAR_30;
 buf_t VAR_31;
 buf_t VAR_32;
 int VAR_33, VAR_34, VAR_35, VAR_36;
 int VAR_37 = *VAR_28;
 struct timespec VAR_38;

start:



 if ((*VAR_28 >= VAR_1) || (*VAR_28 < 0)
  || (*VAR_28 == VAR_4) || (*VAR_28 == VAR_5))
  *VAR_28 = VAR_3;


 if (*VAR_28 == VAR_3 && (VAR_29 = VAR_18[*VAR_28].tqh_first))
         goto found;




 if (VAR_24 < VAR_22) {





  VAR_24++;
  goto add_newbufs;
 }

 VAR_29 = VAR_18[*VAR_28].tqh_first;
 if (VAR_29)
         goto found;


 VAR_31 = VAR_18[VAR_2].tqh_first;
 VAR_30 = VAR_18[VAR_6].tqh_first;
 VAR_32 = VAR_18[VAR_7].tqh_first;

 if (!VAR_31 && !VAR_30 && !VAR_32) {




  VAR_29 = VAR_18[VAR_3].tqh_first;
  if (VAR_29) {
   *VAR_28 = VAR_3;
   goto found;
  }






add_newbufs:
  FUNC_9(VAR_17);


  VAR_29 = (struct buf *)FUNC_12(VAR_16);

  if (VAR_29) {
   FUNC_7(VAR_29);
   VAR_29->b_whichq = VAR_3;
   VAR_29->b_timestamp = FUNC_6();
   FUNC_0(VAR_29);
   FUNC_2(VAR_29->b_flags, VAR_8);
   *VAR_28 = VAR_3;
  }
  FUNC_8(VAR_17);

  if (VAR_29) {
   FUNC_4(VAR_29, &VAR_20);
   FUNC_5(VAR_29, &VAR_18[VAR_3], VAR_3);
   VAR_15++;
   goto found;
  }

  VAR_24--;

  VAR_19.bufs_sleeps++;


  VAR_25 = 1;

  VAR_38.tv_sec = (VAR_27/1000);

  VAR_38.tv_nsec = (VAR_27 % 1000) * VAR_11 * 1000 * 10;

  FUNC_10(&VAR_25, VAR_17, VAR_26 | VAR_12 | (VAR_13+1), "getnewbuf", &VAR_38);
  return (((void*)0));
 }


 VAR_29 = ((void*)0);
 *VAR_28 = -1;


 if (!VAR_31) {
  VAR_29 = VAR_30;
  *VAR_28 = VAR_6;
 } else if (!VAR_30) {
  VAR_29 = VAR_31;
  *VAR_28 = VAR_2;
 } else {
  int VAR_39 = FUNC_6();

  VAR_33 = VAR_39 - VAR_31->b_timestamp;
  VAR_34 = VAR_39 - VAR_30->b_timestamp;
  if ((VAR_33 < 0) || (VAR_34 < 0)) {
   VAR_29 = VAR_31;
   *VAR_28 = VAR_2;




  } else {
   if ((VAR_34 >= VAR_21) && (VAR_33 < VAR_14)) {
    VAR_29 = VAR_30;
    *VAR_28 = VAR_6;
   } else {
    VAR_29 = VAR_31;
    *VAR_28 = VAR_2;
   }
  }
 }

 if (!VAR_29) {
  VAR_29 = VAR_32;
  *VAR_28 = VAR_7;
 } else if (VAR_32) {
  int VAR_40 = FUNC_6();

  VAR_35 = VAR_40 - VAR_29->b_timestamp;
  VAR_36 = VAR_40 - VAR_32->b_timestamp;

  if (!(VAR_35 < 0) && !(VAR_36 < 0)) {

   int VAR_41;
   VAR_41 = (*VAR_28 == VAR_6) ?
     VAR_21 : VAR_14;

   if ((VAR_36 >= VAR_23) &&
     (VAR_35 < VAR_41)) {
    VAR_29 = VAR_32;
    *VAR_28 = VAR_7;
   }
  }
 }
found:
 if (FUNC_1(VAR_29->b_flags, VAR_9) || FUNC_1(VAR_29->b_lflags, VAR_0))
         FUNC_11("getnewbuf: bp @ %p is LOCKED or BUSY! (flags 0x%x)\n", VAR_29, VAR_29->b_flags);


 if (FUNC_3(VAR_29, VAR_10)) {



  *VAR_28 = VAR_37;
  goto start;
 }
 return (VAR_29);
}
