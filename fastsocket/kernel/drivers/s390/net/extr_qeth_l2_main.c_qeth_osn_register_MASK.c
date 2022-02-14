
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* assist_cb ) (struct net_device*,void*) ;int (* data_cb ) (struct sk_buff*) ;} ;
struct qeth_card {TYPE_1__ osn_info; } ;
struct net_device {struct qeth_card* ml_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_2 ;
 struct net_device* FUNC_1 (unsigned char*) ;

int FUNC_2(unsigned char *VAR_3, struct net_device **VAR_4,
    int (*VAR_5)(struct net_device *, void *),
    int (*VAR_6)(struct sk_buff *))
{
 struct qeth_card *VAR_7;

 FUNC_0(VAR_2, 2, "osnreg");
 *VAR_4 = FUNC_1(VAR_3);
 if (*VAR_4 == ((void*)0))
  return -VAR_1;
 VAR_7 = (*VAR_4)->ml_priv;
 if (!VAR_7)
  return -VAR_1;
 if ((VAR_5 == ((void*)0)) || (VAR_6 == ((void*)0)))
  return -VAR_0;
 VAR_7->osn_info.assist_cb = VAR_5;
 VAR_7->osn_info.data_cb = VAR_6;
 return 0;
}
