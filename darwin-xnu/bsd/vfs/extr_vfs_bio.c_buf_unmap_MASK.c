
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ kern_return_t ;
typedef int errno_t ;
typedef TYPE_1__* buf_t ;
struct TYPE_3__ {int b_flags; int b_lflags; int b_upl; scalar_t__ b_datap; scalar_t__ b_real_bp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;

errno_t
FUNC_1(buf_t VAR_7)
{
        buf_t VAR_8;
        kern_return_t VAR_9;

        if ( !(VAR_7->b_flags & VAR_2))
         return (0);



 VAR_8 = (buf_t)(VAR_7->b_real_bp);

 if (VAR_8 && VAR_8->b_datap)
         return (0);

 if ((VAR_7->b_lflags & VAR_0) &&
     ((VAR_7->b_flags & (VAR_3 | VAR_4)) != (VAR_3 | VAR_4))) {
         VAR_7->b_flags |= VAR_1;
 }
 VAR_9 = FUNC_0(VAR_7->b_upl);

 if (VAR_9 != VAR_6)
         return (VAR_5);
 return (0);
}
