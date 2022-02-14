
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t bytes; } ;
typedef TYPE_1__ audio_buf_info ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,int ,TYPE_1__*) ;

__attribute__((used)) static size_t FUNC_2(void *VAR_1)
{
   audio_buf_info VAR_2;
   int *VAR_3 = (int*)VAR_1;

   if (FUNC_1(*VAR_3, VAR_0, &VAR_2) < 0)
   {
      FUNC_0("[OSS]: SNDCTL_DSP_GETOSPACE failed ...\n");
      return 0;
   }

   return VAR_2.bytes;
}
