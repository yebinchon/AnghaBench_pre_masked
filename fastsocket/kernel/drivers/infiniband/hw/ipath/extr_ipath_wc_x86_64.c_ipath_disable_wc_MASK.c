
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipath_devdata {scalar_t__ ipath_wc_cookie; int ipath_wc_len; int ipath_wc_base; TYPE_1__* pcidev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__,int ,int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__,int ,int ) ;

void FUNC_3(struct ipath_devdata *VAR_1)
{
 if (VAR_1->ipath_wc_cookie) {
  int VAR_2;
  FUNC_1(VAR_0, "undoing WCCOMB on pio buffers\n");
  VAR_2 = FUNC_2(VAR_1->ipath_wc_cookie, VAR_1->ipath_wc_base,
        VAR_1->ipath_wc_len);
  if (VAR_2 < 0)
   FUNC_0(&VAR_1->pcidev->dev,
     "mtrr_del(%lx, %lx, %lx) failed: %d\n",
     VAR_1->ipath_wc_cookie, VAR_1->ipath_wc_base,
     VAR_1->ipath_wc_len, VAR_2);
  VAR_1->ipath_wc_cookie = 0;
 }
}
