
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; int data_len; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int * immediate_data; } ;
struct TYPE_4__ {TYPE_1__ immdata_nodesc; } ;
struct ehea_swqe {int immediate_data_length; TYPE_2__ u; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int ,int *,int ) ;
 int FUNC_2 (struct sk_buff*,int *,int ) ;
 int FUNC_3 (struct sk_buff*,struct ehea_swqe*) ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_0, struct net_device *VAR_1,
         struct ehea_swqe *VAR_2)
{
 u8 *VAR_3 = &VAR_2->u.immdata_nodesc.immediate_data[0];

 FUNC_3(VAR_0, VAR_2);

 if (!VAR_0->data_len)
  FUNC_2(VAR_0, VAR_3, VAR_0->len);
 else
  FUNC_1(VAR_0, 0, VAR_3, VAR_0->len);

 VAR_2->immediate_data_length = VAR_0->len;
 FUNC_0(VAR_0);
}
