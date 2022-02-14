
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ size; scalar_t__ start; } ;
typedef TYPE_1__ range_t ;
typedef int buffer_t ;
struct TYPE_6__ {scalar_t__ dictLimit; scalar_t__ base; scalar_t__ nextSrc; scalar_t__ lowLimit; scalar_t__ dictBase; } ;
typedef TYPE_2__ ZSTD_window_t ;


 int FUNC_0 (int,char*,...) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__) ;

__attribute__((used)) static int FUNC_2(buffer_t VAR_0, ZSTD_window_t VAR_1)
{
    range_t VAR_2;
    range_t VAR_3;

    FUNC_0(5, "ZSTDMT_doesOverlapWindow");
    VAR_2.start = VAR_1.dictBase + VAR_1.lowLimit;
    VAR_2.size = VAR_1.dictLimit - VAR_1.lowLimit;

    VAR_3.start = VAR_1.base + VAR_1.dictLimit;
    VAR_3.size = VAR_1.nextSrc - (VAR_1.base + VAR_1.dictLimit);
    FUNC_0(5, "extDict [0x%zx, 0x%zx)",
                (size_t)VAR_2.start,
                (size_t)VAR_2.start + VAR_2.size);
    FUNC_0(5, "prefix  [0x%zx, 0x%zx)",
                (size_t)VAR_3.start,
                (size_t)VAR_3.start + VAR_3.size);

    return FUNC_1(VAR_0, VAR_2)
        || FUNC_1(VAR_0, VAR_3);
}
