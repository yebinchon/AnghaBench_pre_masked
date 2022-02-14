
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_2__ {int planar; int altform; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

enum AVSampleFormat FUNC_0(enum AVSampleFormat VAR_3, int VAR_4)
{
    if (VAR_3 < 0 || VAR_3 >= VAR_0)
        return VAR_1;
    if (VAR_2[VAR_3].planar == VAR_4)
        return VAR_3;
    return VAR_2[VAR_3].altform;
}
