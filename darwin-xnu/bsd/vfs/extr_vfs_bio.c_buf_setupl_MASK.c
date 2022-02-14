
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ upl_t ;
typedef int uint32_t ;
typedef int errno_t ;
typedef TYPE_1__* buf_t ;
struct TYPE_3__ {int b_lflags; int b_uploffset; scalar_t__ b_upl; int b_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

errno_t
FUNC_0(buf_t VAR_3, upl_t VAR_4, uint32_t VAR_5)
{

        if ( !(VAR_3->b_lflags & VAR_0) )
         return (VAR_2);

 if (VAR_4)
         VAR_3->b_flags |= VAR_1;
 else
         VAR_3->b_flags &= ~VAR_1;
 VAR_3->b_upl = VAR_4;
 VAR_3->b_uploffset = VAR_5;

 return (0);
}
