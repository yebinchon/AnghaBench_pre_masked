
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RingQueue {int length; int * queue; scalar_t__ wi; scalar_t__ ri; } ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct RingQueue *VAR_0, int VAR_1)
{




 int VAR_2 = 1;
 FUNC_0(VAR_0 != ((void*)0));
 FUNC_0(VAR_1 > 0);

 while(VAR_1 >> VAR_2)
  VAR_2++;
 if(VAR_1 != 1 << (VAR_2-1))
  VAR_1 = 1 << VAR_2;

 VAR_0->length = VAR_1;
 VAR_0->ri = VAR_0->wi = 0;
 VAR_0->queue = FUNC_1(VAR_0->length);
 FUNC_0(VAR_0->queue != ((void*)0));
}
