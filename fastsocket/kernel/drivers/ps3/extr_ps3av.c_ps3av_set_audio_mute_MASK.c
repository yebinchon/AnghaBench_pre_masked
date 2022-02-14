
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int num_of_hdmi; int num_of_avmulti; int num_of_spdif; } ;
struct TYPE_4__ {int * opt_port; int * av_port; TYPE_1__ av_hw_conf; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int,int *,int ) ;
 int FUNC_1 (int,int *,int ) ;

__attribute__((used)) static int FUNC_2(u32 VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5;

 VAR_3 = VAR_0->av_hw_conf.num_of_hdmi +
    VAR_0->av_hw_conf.num_of_avmulti;
 VAR_4 = VAR_0->av_hw_conf.num_of_spdif;

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  VAR_5 = FUNC_1(1, &VAR_0->av_port[VAR_2], VAR_1);
  if (VAR_5 < 0)
   return -1;
 }
 for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) {
  VAR_5 = FUNC_0(1, &VAR_0->opt_port[VAR_2], VAR_1);
  if (VAR_5 < 0)
   return -1;
 }

 return 0;
}
