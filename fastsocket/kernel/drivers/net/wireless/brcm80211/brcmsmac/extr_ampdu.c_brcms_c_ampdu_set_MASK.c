
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct brcms_c_info {TYPE_2__* pub; TYPE_1__* hw; } ;
struct bcma_device {int dummy; } ;
struct ampdu_info {struct brcms_c_info* wlc; } ;
struct TYPE_4__ {int _ampdu; int _n_enab; int unit; } ;
struct TYPE_3__ {struct bcma_device* d11core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ampdu_info*) ;
 int FUNC_1 (struct bcma_device*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct ampdu_info *VAR_2, bool VAR_3)
{
 struct brcms_c_info *VAR_4 = VAR_2->wlc;
 struct bcma_device *VAR_5 = VAR_4->hw->d11core;

 VAR_4->pub->_ampdu = 0;

 if (VAR_3) {
  if (!(VAR_4->pub->_n_enab & VAR_1)) {
   FUNC_1(VAR_5, "wl%d: driver not nmode enabled\n",
      VAR_4->pub->unit);
   return -VAR_0;
  }
  if (!FUNC_0(VAR_2)) {
   FUNC_1(VAR_5, "wl%d: device not ampdu capable\n",
      VAR_4->pub->unit);
   return -VAR_0;
  }
  VAR_4->pub->_ampdu = VAR_3;
 }

 return 0;
}
