
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
struct TYPE_6__ {int BufHowMuch; int DSBufferSize; int ToWritePos; int ppbufw; } ;
struct TYPE_5__ {TYPE_2__* private; } ;
typedef TYPE_1__ SexyAL_device ;
typedef int DWORD ;
typedef TYPE_2__ DSFobby ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,int*,int*) ;

uint32_t FUNC_2(SexyAL_device *VAR_1)
{
 DSFobby *VAR_2=VAR_1->private;
 DWORD VAR_3,VAR_4=0;
 FUNC_0(VAR_2);

 VAR_3=0;

 if(FUNC_1(VAR_2->ppbufw,&VAR_4,&VAR_3)==VAR_0)
 {

 }
 VAR_3=(VAR_4+VAR_2->BufHowMuch)%VAR_2->DSBufferSize;





 if(((int32_t)VAR_2->ToWritePos-(int32_t)VAR_3) >= (VAR_2->DSBufferSize/2))
 {
  VAR_3+=VAR_2->DSBufferSize;

 }
 if(VAR_2->ToWritePos<VAR_3)
 {
  int32_t VAR_5=(int32_t)VAR_3-(int32_t)VAR_2->ToWritePos;
  if(VAR_5 > VAR_2->BufHowMuch)
  {
   VAR_2->ToWritePos=VAR_3%VAR_2->DSBufferSize;





  }
  return(VAR_3-VAR_2->ToWritePos);
 }
 else
  return(0);
}
