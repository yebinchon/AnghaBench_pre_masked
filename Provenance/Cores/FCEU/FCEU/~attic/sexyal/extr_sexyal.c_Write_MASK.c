
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;
struct TYPE_5__ {int format; int srcformat; } ;
typedef TYPE_1__ SexyAL_device ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *,int *,void*,int) ;
 int FUNC_2 (TYPE_1__*,int *,int ) ;
 int FUNC_3 (TYPE_1__*,int *,int ) ;

__attribute__((used)) static uint32_t FUNC_4(SexyAL_device *VAR_0, void *VAR_1, uint32_t VAR_2)
{
 uint8_t VAR_3[2048*4];

 while(VAR_2)
 {
  int32_t VAR_4;

  VAR_4=VAR_2;
  if(VAR_4>2048)
  {
   VAR_4=2048;
   VAR_2-=2048;
  }
  else VAR_2-=VAR_4;

  FUNC_1(&VAR_0->srcformat, &VAR_0->format, VAR_3, VAR_1, VAR_4);
  FUNC_3(VAR_0,VAR_3,FUNC_0(&VAR_0->format,VAR_4));

 }
 return(VAR_2);
}
