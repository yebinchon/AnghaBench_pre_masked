
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct FFBufQueue {unsigned int available; } ;
typedef int AVFrame ;


 int * FUNC_0 (unsigned int) ;

__attribute__((used)) static inline AVFrame *FUNC_1(struct FFBufQueue *VAR_0,
                                        unsigned VAR_1)
{
    return VAR_1 < VAR_0->available ? FUNC_0(VAR_1) : ((void*)0);
}
