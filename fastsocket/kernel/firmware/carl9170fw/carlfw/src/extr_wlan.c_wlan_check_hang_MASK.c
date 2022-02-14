
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dma_desc {int dummy; } ;
struct TYPE_3__ {scalar_t__* last_super; scalar_t__* last_super_num; int mac_reset; int * tx_queue; } ;
struct TYPE_4__ {TYPE_1__ wlan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct dma_desc*) ;
 TYPE_2__ VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(void)
{
 struct dma_desc *VAR_6;
 int VAR_7;

 for (VAR_7 = VAR_1; VAR_7 >= VAR_0; VAR_7--) {
  if (FUNC_3(&VAR_5.wlan.tx_queue[VAR_7])) {

   continue;
  }


  VAR_6 = (struct dma_desc *)FUNC_2(VAR_7);


  if (FUNC_4(FUNC_1(VAR_6) == VAR_5.wlan.last_super[VAR_7])) {
   VAR_5.wlan.last_super_num[VAR_7]++;

   if (FUNC_4(VAR_5.wlan.last_super_num[VAR_7] >= VAR_4)) {
    VAR_5.wlan.mac_reset++;
   }
  } else {

   VAR_5.wlan.last_super[VAR_7] = FUNC_1(VAR_6);
   VAR_5.wlan.last_super_num[VAR_7] = 0;
  }
 }
}
