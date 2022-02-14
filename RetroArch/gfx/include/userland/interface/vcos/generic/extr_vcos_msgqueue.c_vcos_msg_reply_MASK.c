
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ magic; int code; TYPE_3__* waiter; } ;
typedef TYPE_1__ VCOS_MSG_T ;
struct TYPE_6__ {int (* on_reply ) (TYPE_3__*,TYPE_1__*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_2 (int) ;

void FUNC_3(VCOS_MSG_T *VAR_3)
{
   FUNC_2(VAR_3->magic == VAR_0);
   VAR_3->code |= VAR_1;
   if (VAR_3->waiter)
   {
      VAR_3->waiter->on_reply(VAR_3->waiter, VAR_3);
   }
   else
   {
      FUNC_0("%s: reply to non-reply message id %d",
                 VAR_2,
                 VAR_3->code);
      FUNC_2(0);
   }
}
