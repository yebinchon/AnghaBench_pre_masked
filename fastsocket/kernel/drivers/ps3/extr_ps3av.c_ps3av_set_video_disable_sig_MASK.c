
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_of_hdmi; int num_of_avmulti; } ;
struct TYPE_4__ {int * av_port; TYPE_1__ av_hw_conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_4 = VAR_2->av_hw_conf.num_of_hdmi;
 VAR_5 = VAR_2->av_hw_conf.num_of_hdmi +
    VAR_2->av_hw_conf.num_of_avmulti;


 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  VAR_6 = FUNC_1(VAR_2->av_port[VAR_3],
        VAR_1);
  if (VAR_6 < 0)
   return -1;
 }
 FUNC_0(100);


 for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
  VAR_6 = FUNC_2(VAR_2->av_port[VAR_3]);
  if (VAR_6 < 0)
   return -1;
  if (VAR_3 < VAR_4) {
   VAR_6 = FUNC_1(VAR_2->av_port[VAR_3],
         VAR_0);
   if (VAR_6 < 0)
    return -1;
  }
 }
 FUNC_0(300);

 return 0;
}
