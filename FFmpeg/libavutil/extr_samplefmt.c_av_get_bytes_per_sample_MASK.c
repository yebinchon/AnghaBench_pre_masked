
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_2__ {int bits; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

int FUNC_0(enum AVSampleFormat VAR_2)
{
     return VAR_2 < 0 || VAR_2 >= VAR_0 ?
        0 : VAR_1[VAR_2].bits >> 3;
}
