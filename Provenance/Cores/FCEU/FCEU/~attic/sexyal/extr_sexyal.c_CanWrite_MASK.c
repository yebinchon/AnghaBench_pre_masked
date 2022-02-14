
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int channels; int sampformat; } ;
struct TYPE_7__ {TYPE_1__ format; } ;
typedef TYPE_2__ SexyAL_device ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static uint32_t FUNC_2(SexyAL_device *VAR_0)
{
 uint32_t VAR_1,VAR_2;




 VAR_1=FUNC_1(VAR_0);

 VAR_2=VAR_1 / VAR_0->format.channels / (VAR_0->format.sampformat>>4);

 return(VAR_2);
}
