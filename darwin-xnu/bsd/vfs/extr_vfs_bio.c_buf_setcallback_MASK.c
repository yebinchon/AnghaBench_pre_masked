
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int errno_t ;
typedef TYPE_1__* buf_t ;
struct TYPE_5__ {int b_flags; int b_lflags; void (* b_iodone ) (TYPE_1__*,void*) ;void* b_transaction; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;

errno_t
FUNC_2(buf_t VAR_4, void (*VAR_5)(buf_t, void *), void *VAR_6)
{
 FUNC_1(!FUNC_0(VAR_4->b_flags, VAR_3) && FUNC_0(VAR_4->b_lflags, VAR_0));

 if (VAR_5)
         VAR_4->b_flags |= (VAR_2 | VAR_1);
 else
         VAR_4->b_flags &= ~VAR_2;
 VAR_4->b_transaction = VAR_6;
 VAR_4->b_iodone = VAR_5;

 return (0);
}
