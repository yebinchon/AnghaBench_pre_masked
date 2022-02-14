
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue {int wq_immediate_call; int wq_reqcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 uintptr_t VAR_2 ;
 int FUNC_0 (int ,struct workqueue*,int ,int ,int ,int ) ;
 int FUNC_1 (struct workqueue*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,void*) ;
 scalar_t__ FUNC_6 (struct workqueue*,uintptr_t,int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct workqueue *VAR_3)
{
 FUNC_2(!FUNC_4());

 if (FUNC_6(VAR_3, VAR_2,
   VAR_1, 0)) {
  FUNC_0(VAR_0, VAR_3, VAR_3->wq_reqcount,
    FUNC_1(VAR_3), 0, 0);

  uintptr_t VAR_4 = VAR_2;
  if (FUNC_5(VAR_3->wq_immediate_call, (void *)VAR_4)) {
   FUNC_3("immediate_call was already enqueued");
  }
 }
}
