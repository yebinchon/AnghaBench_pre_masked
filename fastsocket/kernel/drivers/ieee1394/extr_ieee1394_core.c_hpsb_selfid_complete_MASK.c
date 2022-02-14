
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hpsb_host {int node_id; int is_root; int irm_id; int is_irm; int is_cycmst; scalar_t__ in_bus_reset; int generation; TYPE_1__* driver; scalar_t__ is_busmgr; int node_count; scalar_t__ reset_retries; } ;
struct TYPE_2__ {int (* devctl ) (struct hpsb_host*,int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hpsb_host*,int ) ;
 int FUNC_4 (struct hpsb_host*) ;
 int FUNC_5 (struct hpsb_host*) ;
 int FUNC_6 (struct hpsb_host*,int ) ;
 int FUNC_7 (struct hpsb_host*,int ,int) ;

void FUNC_8(struct hpsb_host *VAR_3, int VAR_4, int VAR_5)
{
 if (!VAR_3->in_bus_reset)
  FUNC_0("SelfID completion called outside of bus reset!");

 VAR_3->node_id = VAR_1 | VAR_4;
 VAR_3->is_root = VAR_5;

 if (!FUNC_4(VAR_3)) {
  if (VAR_3->reset_retries++ < 20) {

   FUNC_0("Error in SelfID stage, resetting");
   VAR_3->in_bus_reset = 0;

   FUNC_6(VAR_3, VAR_2);
   return;
  } else {
   FUNC_0("Stopping out-of-control reset loop");
   FUNC_0("Warning - topology map and speed map will not be valid");
   VAR_3->reset_retries = 0;
  }
 } else {
  VAR_3->reset_retries = 0;
  FUNC_3(VAR_3, VAR_3->node_count);
 }

 FUNC_1("selfid_complete called with successful SelfID stage "
       "... irm_id: 0x%X node_id: 0x%X",VAR_3->irm_id,VAR_3->node_id);


 if (VAR_3->irm_id == VAR_3->node_id) {
  VAR_3->is_irm = 1;
 } else {
  VAR_3->is_busmgr = 0;
  VAR_3->is_irm = 0;
 }

 if (VAR_5) {
  VAR_3->driver->devctl(VAR_3, VAR_0, 1);
  VAR_3->is_cycmst = 1;
 }
 FUNC_2(&VAR_3->generation);
 VAR_3->in_bus_reset = 0;
 FUNC_5(VAR_3);
}
