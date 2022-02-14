
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bytestream; int bytestream_start; int outstanding_count; scalar_t__ outstanding_byte; int range; } ;
typedef TYPE_1__ RangeCoder ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(RangeCoder *VAR_0)
{
    int VAR_1 = VAR_0->bytestream - VAR_0->bytestream_start + VAR_0->outstanding_count;
    if (VAR_0->outstanding_byte >= 0)
        VAR_1++;
    return 8 * VAR_1 - FUNC_0(VAR_0->range);
}
