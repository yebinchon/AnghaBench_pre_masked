
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int channels; int sampformat; } ;
typedef TYPE_1__ SexyAL_format ;



__attribute__((used)) static uint32_t FUNC_0(const SexyAL_format *VAR_0, uint32_t VAR_1)
{
 return(VAR_1*VAR_0->channels*(VAR_0->sampformat>>4));
}
