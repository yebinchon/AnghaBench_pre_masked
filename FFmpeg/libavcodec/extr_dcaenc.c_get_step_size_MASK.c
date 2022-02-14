
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int bitrate_index; size_t** abits; } ;
typedef TYPE_1__ DCAEncContext ;


 int * VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static inline int32_t FUNC_0(DCAEncContext *VAR_2, int VAR_3, int VAR_4)
{
    int32_t VAR_5;

    if (VAR_2->bitrate_index == 3)
        VAR_5 = VAR_0[VAR_2->abits[VAR_3][VAR_4]];
    else
        VAR_5 = VAR_1[VAR_2->abits[VAR_3][VAR_4]];

    return VAR_5;
}
