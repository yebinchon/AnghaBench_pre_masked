
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct FFBufQueue {scalar_t__ available; } ;
typedef int AVFrame ;


 int FUNC_0 (int **) ;
 int * FUNC_1 (struct FFBufQueue*) ;

__attribute__((used)) static inline void FUNC_2(struct FFBufQueue *VAR_0)
{
    while (VAR_0->available) {
        AVFrame *VAR_1 = FUNC_1(VAR_0);
        FUNC_0(&VAR_1);
    }
}
