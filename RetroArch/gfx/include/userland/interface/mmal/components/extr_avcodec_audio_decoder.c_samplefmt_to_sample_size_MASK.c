
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_2__ {scalar_t__ encoding; int samplefmt; unsigned int sample_size; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static unsigned int FUNC_0(enum AVSampleFormat VAR_2)
{
   unsigned int VAR_3;
   for(VAR_3 = 0; VAR_1[VAR_3].encoding != VAR_0; VAR_3++)
      if(VAR_1[VAR_3].samplefmt == VAR_2) break;
   return VAR_1[VAR_3].sample_size;
}
