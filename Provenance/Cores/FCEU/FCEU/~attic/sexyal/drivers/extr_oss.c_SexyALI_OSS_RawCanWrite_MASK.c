
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct audio_buf_info {int bytes; } ;
struct TYPE_3__ {scalar_t__ private; } ;
typedef TYPE_1__ SexyAL_device ;


 int VAR_0 ;
 int FUNC_0 (int,int ,struct audio_buf_info*) ;

uint32_t FUNC_1(SexyAL_device *VAR_1)
{
 struct audio_buf_info VAR_2;
 if(!FUNC_0(*(int *)VAR_1->private,VAR_0,&VAR_2))
  return(VAR_2.bytes);
 else
  return(0);
}
