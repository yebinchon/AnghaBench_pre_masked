
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* buf_t ;
struct TYPE_6__ {void (* b_iodone ) (TYPE_1__*,void*) ;int b_flags; void* b_transaction; int b_lflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

void
FUNC_2(buf_t VAR_2, void (*VAR_3)(buf_t, void *), void *VAR_4,
     void (**VAR_5)(buf_t, void *), void **VAR_6)
{
 FUNC_1(FUNC_0(VAR_2->b_lflags, VAR_0));

 if (VAR_5)
  *VAR_5 = VAR_2->b_iodone;
 if (VAR_6)
  *VAR_6 = VAR_2->b_transaction;

 VAR_2->b_transaction = VAR_4;
 VAR_2->b_iodone = VAR_3;
 if (VAR_3)
         VAR_2->b_flags |= VAR_1;
 else
         VAR_2->b_flags &= ~VAR_1;
}
