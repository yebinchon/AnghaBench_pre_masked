
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv_queue {scalar_t__ bytesused; scalar_t__ length; scalar_t__ buffers; int list; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct ivtv_queue *VAR_0)
{
 FUNC_0(&VAR_0->list);
 VAR_0->buffers = 0;
 VAR_0->length = 0;
 VAR_0->bytesused = 0;
}
