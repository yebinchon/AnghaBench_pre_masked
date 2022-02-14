
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* linesize; scalar_t__* data; } ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static inline void FUNC_1(int VAR_0, int VAR_1, int VAR_2, AVFrame *VAR_3)
{
    FUNC_0(VAR_3->data[0] + VAR_2 * VAR_3->linesize[0] + VAR_1 * 4, VAR_0);
}
