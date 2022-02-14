
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VCOS_STATUS_T ;
struct TYPE_4__ {int on_reply; } ;
struct TYPE_5__ {TYPE_1__ waiter; int waitsem; } ;
typedef TYPE_2__ VCOS_MSG_SIMPLE_WAITER_T ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;

__attribute__((used)) static VCOS_STATUS_T FUNC_1(VCOS_MSG_SIMPLE_WAITER_T *VAR_1)
{
   VCOS_STATUS_T VAR_2;
   VAR_2 = FUNC_0(&VAR_1->waitsem, "waiter", 0);
   VAR_1->waiter.on_reply = VAR_0;
   return VAR_2;
}
