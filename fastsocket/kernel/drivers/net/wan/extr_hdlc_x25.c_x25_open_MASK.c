
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct lapb_register_struct {int data_transmit; int data_indication; void* disconnect_indication; void* disconnect_confirmation; void* connect_indication; void* connect_confirmation; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,struct lapb_register_struct*) ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_5)
{
 struct lapb_register_struct VAR_6;
 int VAR_7;

 VAR_6.connect_confirmation = VAR_1;
 VAR_6.connect_indication = VAR_1;
 VAR_6.disconnect_confirmation = VAR_4;
 VAR_6.disconnect_indication = VAR_4;
 VAR_6.data_indication = VAR_2;
 VAR_6.data_transmit = VAR_3;

 VAR_7 = FUNC_0(VAR_5, &VAR_6);
 if (VAR_7 != VAR_0)
  return VAR_7;
 return 0;
}
