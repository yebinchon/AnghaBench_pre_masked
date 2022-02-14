
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ segment_type; char const* str; } ;
typedef scalar_t__ SegmentType ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static const char *FUNC_0(SegmentType VAR_2) {
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
        if (VAR_1[VAR_3].segment_type == VAR_2)
            return VAR_1[VAR_3].str;
    return ((void*)0);
}
