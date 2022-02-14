
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bytes; int fragsize; } ;
typedef TYPE_1__ audio_buf_info ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int VAR_2 ;

int FUNC_1(int VAR_3)
{
 audio_buf_info VAR_4;
 int VAR_5;







 VAR_5 = FUNC_0(VAR_2, VAR_0, &VAR_4);
 if (VAR_5 < 0)
  return 1;


 return VAR_4.bytes - VAR_4.fragsize >= VAR_3 ? 1 : 0;
}
