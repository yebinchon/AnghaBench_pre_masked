
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__ total_samples_tail; scalar_t__ total_samples_head; } ;
typedef TYPE_1__ FFFrameQueue ;



__attribute__((used)) static inline uint64_t FUNC_0(const FFFrameQueue *VAR_0)
{
    return VAR_0->total_samples_head - VAR_0->total_samples_tail;
}
