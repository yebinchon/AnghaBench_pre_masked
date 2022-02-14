
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlp_wssid_e {int node; int * info; } ;
struct wlp_wss_tmp_info {int dummy; } ;
struct wlp_neighbor_e {int wssid; } ;
struct wlp {TYPE_2__* rc; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;
struct TYPE_4__ {TYPE_1__ uwb_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct wlp_wssid_e*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static struct wlp_wssid_e *FUNC_4(struct wlp *VAR_1,
           struct wlp_neighbor_e *VAR_2)
{
 struct device *VAR_3 = &VAR_1->rc->uwb_dev.dev;
 struct wlp_wssid_e *VAR_4;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (VAR_4 == ((void*)0)) {
  FUNC_0(VAR_3, "WLP: unable to allocate memory "
   "for WSS information.\n");
  goto error_alloc;
 }
 VAR_4->info = FUNC_2(sizeof(struct wlp_wss_tmp_info), VAR_0);
 if (VAR_4->info == ((void*)0)) {
  FUNC_0(VAR_3, "WLP: unable to allocate memory "
   "for temporary WSS information.\n");
  FUNC_1(VAR_4);
  VAR_4 = ((void*)0);
  goto error_alloc;
 }
 FUNC_3(&VAR_4->node, &VAR_2->wssid);
error_alloc:
 return VAR_4;
}
