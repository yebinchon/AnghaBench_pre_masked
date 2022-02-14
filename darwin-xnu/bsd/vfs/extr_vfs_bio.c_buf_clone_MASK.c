
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* buf_t ;
struct TYPE_7__ {int b_bcount; int b_flags; int b_uploffset; void (* b_iodone ) (TYPE_1__*,void*) ;uintptr_t b_datap; int b_upl; void* b_transaction; int b_vp; } ;


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
 TYPE_1__* FUNC_0 (int ,int ) ;

buf_t
FUNC_1(buf_t VAR_11, int VAR_12, int VAR_13, void (*VAR_14)(buf_t, void *), void *VAR_15)
{
        buf_t VAR_16;

 if (VAR_12 < 0 || VAR_13 < 0)
         return (((void*)0));

 if ((unsigned)(VAR_12 + VAR_13) > (unsigned)VAR_11->b_bcount)
         return (((void*)0));

 if (VAR_11->b_flags & VAR_2) {
         if (VAR_12 && ((VAR_11->b_uploffset + VAR_12) & VAR_10))
          return (((void*)0));

         if (((VAR_11->b_uploffset + VAR_12 + VAR_13) & VAR_10) && ((VAR_12 + VAR_13) < VAR_11->b_bcount))
          return (((void*)0));
 }
 VAR_16 = FUNC_0(VAR_11->b_vp, 0);

 VAR_16->b_flags = VAR_11->b_flags & (VAR_3 | VAR_5 | VAR_6 | VAR_2 | VAR_7 | VAR_8 | VAR_0 | VAR_9 | VAR_4);

 if (VAR_14) {
         VAR_16->b_transaction = VAR_15;
  VAR_16->b_iodone = VAR_14;
  VAR_16->b_flags |= VAR_1;
 }
 if (VAR_11->b_flags & VAR_2) {
         VAR_16->b_upl = VAR_11->b_upl;
  VAR_16->b_uploffset = VAR_11->b_uploffset + VAR_12;
 } else {
         VAR_16->b_datap = (uintptr_t)(((char *)VAR_11->b_datap) + VAR_12);
 }
 VAR_16->b_bcount = VAR_13;

 return (VAR_16);
}
