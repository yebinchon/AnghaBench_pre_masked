
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct FFBufQueue {size_t head; int ** queue; int available; } ;
typedef int AVFrame ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline AVFrame *FUNC_1(struct FFBufQueue *VAR_1)
{
    AVFrame *VAR_2 = VAR_1->queue[VAR_1->head];
    FUNC_0(VAR_1->available);
    VAR_1->available--;
    VAR_1->queue[VAR_1->head] = ((void*)0);
    VAR_1->head = (VAR_1->head + 1) % VAR_0;
    return VAR_2;
}
