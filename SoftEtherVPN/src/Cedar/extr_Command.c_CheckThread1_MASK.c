
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_2__ {int lock; scalar_t__ num; int wait_thread; } ;
typedef int THREAD ;
typedef TYPE_1__ CHECK_THREAD_1 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_2 ;

void FUNC_5(THREAD *VAR_3, void *VAR_4)
{
 CHECK_THREAD_1 *VAR_5 = (CHECK_THREAD_1 *)VAR_4;
 UINT VAR_6;
 UINT VAR_7 = VAR_0;

 FUNC_4(VAR_5->wait_thread, VAR_1);

 for (VAR_6 = 0;VAR_6 < VAR_7;VAR_6++)
 {
  FUNC_1(VAR_5->lock);
  VAR_2 = VAR_5->num;
  FUNC_0((void *)VAR_2);
  VAR_2 = VAR_2 + 1 + FUNC_2();
  VAR_5->num = VAR_2;
  FUNC_3(VAR_5->lock);
 }
}
