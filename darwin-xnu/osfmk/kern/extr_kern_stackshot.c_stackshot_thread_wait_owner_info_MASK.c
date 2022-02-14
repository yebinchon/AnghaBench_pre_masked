
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int wait_type; int context; int owner; int waiter; } ;
typedef TYPE_1__ thread_waitinfo_t ;
typedef TYPE_2__* thread_t ;
struct TYPE_19__ {int block_hint; int wait_event; int waitq; } ;
 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (int ,int ,TYPE_1__*) ;
 int FUNC_5 (int ,int ,TYPE_1__*) ;
 int FUNC_6 (int ,int ,TYPE_1__*) ;
 int FUNC_7 (TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_8 (TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_10(thread_t VAR_0, thread_waitinfo_t *VAR_1)
{
 VAR_1->waiter = FUNC_9(VAR_0);
 VAR_1->wait_type = VAR_0->block_hint;
 switch (VAR_1->wait_type) {
  case 141:
   FUNC_0(VAR_0->waitq, VAR_0->wait_event, VAR_1);
   break;
  case 132:
   FUNC_1(VAR_0->waitq, VAR_0->wait_event, VAR_1);
   break;
  case 131:
   FUNC_2(VAR_0->waitq, VAR_0->wait_event, VAR_1);
   break;
  case 130:
   FUNC_5(VAR_0->waitq, VAR_0->wait_event, VAR_1);
   break;
  case 129:
   FUNC_6(VAR_0->waitq, VAR_0->wait_event, VAR_1);
   break;
  case 140:
  case 138:
  case 139:
   FUNC_4(VAR_0->waitq, VAR_0->wait_event, VAR_1);
   break;
  case 135:
  case 134:
  case 133:
  case 136:
   FUNC_3(VAR_0, VAR_1);
   break;
  case 128:
   FUNC_8(VAR_0, VAR_0->wait_event, VAR_1);
   break;
  case 137:
   FUNC_7(VAR_0, VAR_0->wait_event, VAR_1);
   break;
  default:
   VAR_1->owner = 0;
   VAR_1->context = 0;
   break;
 }
}
