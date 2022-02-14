
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int debug_dir; int debug_events; int debug_rdesc; int debug_wait; scalar_t__ debug; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct hid_device *VAR_0)
{
 VAR_0->debug = 0;
 FUNC_1(&VAR_0->debug_wait);
 FUNC_0(VAR_0->debug_rdesc);
 FUNC_0(VAR_0->debug_events);
 FUNC_0(VAR_0->debug_dir);
}
