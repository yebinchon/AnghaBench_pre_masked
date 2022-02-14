
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ipr_mode_pages {int dummy; } ;
struct ipr_mode_page28 {int entry_length; int num_entries; struct ipr_dev_bus_entry* bus; } ;
struct ipr_ioa_cfg {struct ipr_bus_attributes* bus_attr; TYPE_1__* pdev; } ;
struct TYPE_4__ {scalar_t__ bus; } ;
struct ipr_dev_bus_entry {int flags; int max_xfer_rate; int bus_width; int extended_reset_delay; TYPE_2__ res_addr; } ;
struct ipr_bus_attributes {scalar_t__ qas_enabled; int max_xfer_rate; int bus_width; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int ) ;
 struct ipr_mode_page28* FUNC_3 (struct ipr_mode_pages*,int,int) ;

__attribute__((used)) static void FUNC_4(struct ipr_ioa_cfg *VAR_5,
        struct ipr_mode_pages *VAR_6)
{
 int VAR_7, VAR_8;
 struct ipr_dev_bus_entry *VAR_9;
 struct ipr_bus_attributes *VAR_10;
 struct ipr_mode_page28 *VAR_11;

 VAR_11 = FUNC_3(VAR_6, 0x28,
          sizeof(struct ipr_mode_page28));

 VAR_8 = VAR_11->entry_length;


 for (VAR_7 = 0, VAR_9 = VAR_11->bus;
      VAR_7 < VAR_11->num_entries;
      VAR_7++, VAR_9 = (struct ipr_dev_bus_entry *)((u8 *)VAR_9 + VAR_8)) {
  if (VAR_9->res_addr.bus > VAR_1) {
   FUNC_2(&VAR_5->pdev->dev,
    "Invalid resource address reported: 0x%08X\n",
    FUNC_0(VAR_9->res_addr));
   continue;
  }

  VAR_10 = &VAR_5->bus_attr[VAR_7];
  VAR_9->extended_reset_delay = VAR_0;
  VAR_9->bus_width = VAR_10->bus_width;
  VAR_9->max_xfer_rate = FUNC_1(VAR_10->max_xfer_rate);
  VAR_9->flags &= ~VAR_4;
  if (VAR_10->qas_enabled)
   VAR_9->flags |= VAR_3;
  else
   VAR_9->flags |= VAR_2;
 }
}
