
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {short len; unsigned char* data; } ;
struct net_device {int trans_start; } ;
typedef int netdev_tx_t ;


 short VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (unsigned char*,short,struct net_device*) ;

__attribute__((used)) static netdev_tx_t FUNC_4(struct sk_buff *VAR_3,
         struct net_device *VAR_4) {






    FUNC_2(VAR_4);

    {
 short VAR_5 = VAR_0 < VAR_3->len ? VAR_3->len : VAR_0;
 unsigned char* VAR_6 = VAR_3->data;

 if (FUNC_3( VAR_6, VAR_5, VAR_4) == 1) {

     FUNC_1(VAR_4);
 }
 VAR_4->trans_start = VAR_2;
    }
    FUNC_0(VAR_3);

    return VAR_1;
}
