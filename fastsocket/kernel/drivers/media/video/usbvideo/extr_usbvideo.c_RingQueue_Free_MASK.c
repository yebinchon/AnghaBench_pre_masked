
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RingQueue {scalar_t__ length; int * queue; } ;


 scalar_t__ FUNC_0 (struct RingQueue*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct RingQueue *VAR_0)
{
 FUNC_1(VAR_0 != ((void*)0));
 if (FUNC_0(VAR_0)) {
  FUNC_2(VAR_0->queue, VAR_0->length);
  VAR_0->queue = ((void*)0);
  VAR_0->length = 0;
 }
}
