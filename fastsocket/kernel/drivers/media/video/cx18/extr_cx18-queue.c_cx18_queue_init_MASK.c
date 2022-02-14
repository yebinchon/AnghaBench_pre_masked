
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx18_queue {scalar_t__ bytesused; int depth; int list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct cx18_queue *VAR_0)
{
 FUNC_0(&VAR_0->list);
 FUNC_1(&VAR_0->depth, 0);
 VAR_0->bytesused = 0;
}
