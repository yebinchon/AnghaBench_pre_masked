
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ kern_return_t ;
typedef int errno_t ;
typedef int * caddr_t ;
typedef TYPE_1__* buf_t ;
struct TYPE_3__ {int b_flags; scalar_t__ b_uploffset; int b_upl; scalar_t__ b_datap; scalar_t__ b_real_bp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,scalar_t__*) ;

errno_t
FUNC_1(buf_t VAR_3, caddr_t *VAR_4)
{
        buf_t VAR_5;
        vm_offset_t VAR_6;
        kern_return_t VAR_7;

        if ( !(VAR_3->b_flags & VAR_0)) {
         *VAR_4 = (caddr_t)VAR_3->b_datap;
  return (0);
 }
 VAR_5 = (buf_t)(VAR_3->b_real_bp);

 if (VAR_5 && VAR_5->b_datap) {







         *VAR_4 = (caddr_t)VAR_5->b_datap;
  return (0);
 }
 VAR_7 = FUNC_0(VAR_3->b_upl, &VAR_6);

 if (VAR_7 != VAR_2) {
         *VAR_4 = ((void*)0);

         return(VAR_1);
 }
 VAR_6 += VAR_3->b_uploffset;

 *VAR_4 = (caddr_t)VAR_6;

 return (0);
}
