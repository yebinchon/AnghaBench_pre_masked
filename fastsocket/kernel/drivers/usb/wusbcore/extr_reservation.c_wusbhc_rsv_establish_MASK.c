
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wusbhc {struct uwb_rsv* rsv; scalar_t__ cluster_id; struct uwb_rc* uwb_rc; } ;
struct uwb_dev_addr {scalar_t__* data; } ;
struct TYPE_2__ {struct uwb_dev_addr devaddr; int type; } ;
struct uwb_rsv {int max_mas; int min_mas; int max_interval; int is_multicast; int type; TYPE_1__ target; } ;
struct uwb_rc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct uwb_rsv* FUNC_0 (struct uwb_rc*,int ,struct wusbhc*) ;
 int FUNC_1 (struct uwb_rsv*) ;
 int FUNC_2 (struct uwb_rsv*) ;
 int VAR_3 ;

int FUNC_3(struct wusbhc *VAR_4)
{
 struct uwb_rc *VAR_5 = VAR_4->uwb_rc;
 struct uwb_rsv *VAR_6;
 struct uwb_dev_addr VAR_7;
 int VAR_8;

 VAR_6 = FUNC_0(VAR_5, VAR_3, VAR_4);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_7.data[0] = VAR_4->cluster_id;
 VAR_7.data[1] = 0;

 VAR_6->target.type = VAR_2;
 VAR_6->target.devaddr = VAR_7;
 VAR_6->type = VAR_1;
 VAR_6->max_mas = 256;
 VAR_6->min_mas = 15;
 VAR_6->max_interval = 1;
 VAR_6->is_multicast = 1;

 VAR_8 = FUNC_2(VAR_6);
 if (VAR_8 == 0)
  VAR_4->rsv = VAR_6;
 else
  FUNC_1(VAR_6);
 return VAR_8;
}
