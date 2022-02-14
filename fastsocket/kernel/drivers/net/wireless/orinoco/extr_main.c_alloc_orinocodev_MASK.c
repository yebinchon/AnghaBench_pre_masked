
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct TYPE_2__ {int * spy_data; } ;
struct orinoco_private {int (* hard_reset ) (struct orinoco_private*) ;int (* stop_fw ) (struct orinoco_private*,int) ;int hw_unavailable; int last_linkstatus; int * cached_fw; int * cached_pri_fw; int process_scan; int scan_list; int scan_lock; int rx_tasklet; int rx_list; int wevent_work; int join_work; int reset_work; scalar_t__ open; int lock; int spy_data; TYPE_1__ wireless_data; int * card; struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct orinoco_private*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct wiphy*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,unsigned long) ;
 struct wiphy* FUNC_6 (int *,int) ;
 struct orinoco_private* FUNC_7 (struct wiphy*) ;

struct orinoco_private
*FUNC_8(int VAR_6,
    struct device *VAR_7,
    int (*VAR_8)(struct orinoco_private *),
    int (*VAR_9)(struct orinoco_private *, int))
{
 struct orinoco_private *VAR_10;
 struct wiphy *VAR_11;





 VAR_11 = FUNC_6(&VAR_0,
     sizeof(struct orinoco_private) + VAR_6);
 if (!VAR_11)
  return ((void*)0);

 VAR_10 = FUNC_7(VAR_11);
 VAR_10->dev = VAR_7;

 if (VAR_6)
  VAR_10->card = (void *)((unsigned long)VAR_10
          + sizeof(struct orinoco_private));
 else
  VAR_10->card = ((void*)0);

 FUNC_3(VAR_11);






 VAR_10->hard_reset = VAR_8;
 VAR_10->stop_fw = VAR_9;

 FUNC_4(&VAR_10->lock);
 VAR_10->open = 0;
 VAR_10->hw_unavailable = 1;


 FUNC_1(&VAR_10->reset_work, VAR_3);
 FUNC_1(&VAR_10->join_work, VAR_1);
 FUNC_1(&VAR_10->wevent_work, VAR_5);

 FUNC_0(&VAR_10->rx_list);
 FUNC_5(&VAR_10->rx_tasklet, VAR_4,
       (unsigned long) VAR_10);

 FUNC_4(&VAR_10->scan_lock);
 FUNC_0(&VAR_10->scan_list);
 FUNC_1(&VAR_10->process_scan, VAR_2);

 VAR_10->last_linkstatus = 0xffff;







 FUNC_2(VAR_10);

 return VAR_10;
}
