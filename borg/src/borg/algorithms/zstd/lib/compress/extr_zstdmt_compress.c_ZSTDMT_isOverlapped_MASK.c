
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; scalar_t__ start; } ;
typedef TYPE_1__ range_t ;
struct TYPE_6__ {int capacity; scalar_t__ start; } ;
typedef TYPE_2__ buffer_t ;
typedef int BYTE ;



__attribute__((used)) static int FUNC_0(buffer_t VAR_0, range_t VAR_1)
{
    BYTE const* const VAR_2 = (BYTE const*)VAR_0.start;
    BYTE const* const VAR_3 = VAR_2 + VAR_0.capacity;
    BYTE const* const VAR_4 = (BYTE const*)VAR_1.start;
    BYTE const* const VAR_5 = VAR_4 + VAR_1.size;

    if (VAR_4 == ((void*)0) || VAR_2 == ((void*)0))
        return 0;

    if (VAR_2 == VAR_3 || VAR_4 == VAR_5)
        return 0;

    return VAR_2 < VAR_5 && VAR_4 < VAR_3;
}
