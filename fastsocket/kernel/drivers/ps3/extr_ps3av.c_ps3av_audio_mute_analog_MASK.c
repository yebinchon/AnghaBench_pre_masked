
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_of_avmulti; int num_of_hdmi; } ;
struct TYPE_4__ {TYPE_1__ av_hw_conf; int * av_port; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int,int *,int) ;

int FUNC_1(int VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->av_hw_conf.num_of_avmulti; VAR_2++) {
  VAR_3 = FUNC_0(1,
   &VAR_0->av_port[VAR_2 + VAR_0->av_hw_conf.num_of_hdmi],
   VAR_1);
  if (VAR_3 < 0)
   return -1;
 }
 return 0;
}
