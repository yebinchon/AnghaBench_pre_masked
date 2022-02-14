
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct hcp_ehea_port_cb4 {int jumbo_frame; } ;
struct ehea_port {int logical_port_id; TYPE_1__* adapter; } ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,struct hcp_ehea_port_cb4*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,struct hcp_ehea_port_cb4*) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ehea_port *VAR_6, int *VAR_7)
{
 struct hcp_ehea_port_cb4 *VAR_8;
 u64 VAR_9;
 int VAR_10 = 0;

 *VAR_7 = 0;


 VAR_8 = (void *)FUNC_4(VAR_2);
 if (!VAR_8) {
  FUNC_0("no mem for cb4");
  VAR_10 = -VAR_1;
  goto out;
 } else {
  VAR_9 = FUNC_2(VAR_6->adapter->handle,
           VAR_6->logical_port_id,
           VAR_3,
           VAR_4, VAR_8);
  if (VAR_9 == VAR_5) {
   if (VAR_8->jumbo_frame)
    *VAR_7 = 1;
   else {
    VAR_8->jumbo_frame = 1;
    VAR_9 = FUNC_1(VAR_6->adapter->
              handle,
              VAR_6->
              logical_port_id,
              VAR_3,
              VAR_4,
              VAR_8);
    if (VAR_9 == VAR_5)
     *VAR_7 = 1;
   }
  } else
   VAR_10 = -VAR_0;

  FUNC_3((unsigned long)VAR_8);
 }
out:
 return VAR_10;
}
